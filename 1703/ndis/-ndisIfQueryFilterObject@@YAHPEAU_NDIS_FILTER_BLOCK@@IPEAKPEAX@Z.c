/*
 * XREFs of ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00A3E24
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00A3D60 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_LqL @ 0x1C0043EA4 (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00A4E40 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00D04F0 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(
        struct _NDIS_FILTER_BLOCK *a1,
        int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rsi
  unsigned int v9; // r12d
  __int64 v10; // rdx
  _NDIS_MINIPORT_BLOCK *Miniport; // r14
  __int64 v12; // rdx
  _NDIS_IF_BLOCK *IfBlock; // r13
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifAdminStatus; // ecx
  unsigned __int32 MediaConnectState; // eax
  int MiniportStatistics; // eax
  unsigned __int64 ifLastChange; // rax
  bool v20; // cf
  struct _NDIS_FILTER_BLOCK *v21; // r8
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v25; // [rsp+40h] [rbp-C0h] BYREF

  v24 = a2;
  v7 = 0LL;
  v9 = 0;
  memset(&v25, 0, 0xF8uLL);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_LqL(0x3Au, v10, a2, (__int64)a4);
  memset(&v25, 0, 0xF8uLL);
  Miniport = a1->Miniport;
  v12 = v24;
  *(_DWORD *)&v25.NdisReserved[16] |= 8u;
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v25.NdisReserved[32] = &ndisIntReqNsi;
  v25.Header = (NDIS_OBJECT_HEADER)15466902;
  v25.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v25.RequestType = 2LL;
  v25.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v25.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = Miniport->DriverHandle->MajorNdisVersion;
  if ( v24 == 66184 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifAdminStatus = Miniport->IfBlock->ifAdminStatus;
      goto LABEL_12;
    }
    return 3221291030LL;
  }
  if ( v24 > 0x10288 )
  {
    switch ( v24 )
    {
      case 0x1028Au:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MediaConnectState = IfBlock->MediaConnectState;
        goto LABEL_20;
      case 0x1028Cu:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MediaConnectState = IfBlock->MediaDuplexState;
        goto LABEL_20;
      case 0x20106u:
        if ( *a3 < 0x90 )
          return 3221291030LL;
        *a3 = 144;
        MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4, a1);
        goto LABEL_32;
      case 0x20202u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v25.DATA.QUERY_INFORMATION.Oid = 131586;
        break;
      case 0x20208u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v25.DATA.QUERY_INFORMATION.Oid = 131592;
        break;
      default:
        switch ( v24 )
        {
          case 0x20219u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v20 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
            v23 = 0LL;
            v21 = a1;
            v22 = Miniport;
            if ( v20 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 = v23;
              v23 = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
              v25.DATA.QUERY_INFORMATION.Oid = 131593;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 += v23;
              v25.DATA.QUERY_INFORMATION.Oid = 131595;
              goto LABEL_68;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131609;
            break;
          case 0x2021Au:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v20 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
            v23 = 0LL;
            v21 = a1;
            v22 = Miniport;
            if ( v20 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 = v23;
              v23 = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
              v25.DATA.QUERY_INFORMATION.Oid = 131587;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 += v23;
              v25.DATA.QUERY_INFORMATION.Oid = 131589;
              goto LABEL_68;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131610;
            break;
          case 0x2021Bu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v20 = MajorNdisVersion < 6u;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
            v23 = 0LL;
            v21 = a1;
            v22 = Miniport;
            if ( v20 )
            {
              v25.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 = v23;
              v25.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_68:
              v23 = 0LL;
              v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
              v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v25, a1);
              *(_QWORD *)a4 += v23;
              goto LABEL_33;
            }
            v25.DATA.QUERY_INFORMATION.Oid = 131611;
            break;
          case 0x2021Cu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion < 6u )
              goto LABEL_26;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
            v23 = 0LL;
            v25.DATA.QUERY_INFORMATION.Oid = 131612;
            v9 = ndisIfQuerySetMiniport(Miniport, &v25, a1);
LABEL_72:
            *(_QWORD *)a4 = v23;
            goto LABEL_33;
          default:
LABEL_62:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v25.DATA.QUERY_INFORMATION.Oid = v12;
            v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            *(_QWORD *)a4 = 0LL;
            v25.DATA.QUERY_INFORMATION.InformationBuffer = a4;
            MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v25, a1);
LABEL_32:
            v9 = MiniportStatistics;
            goto LABEL_33;
        }
        ndisIfQuerySetMiniport(v22, &v25, v21);
        goto LABEL_72;
    }
    *a3 = 8;
    v25.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v25.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
    v23 = 0LL;
    v9 = ndisIfQuerySetMiniport(Miniport, &v25, a1);
    if ( !v9 )
      v7 = v23;
    *(_QWORD *)a4 = v7;
    goto LABEL_33;
  }
  switch ( v24 )
  {
    case 0x10106u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      MediaConnectState = IfBlock->ifMtu;
LABEL_20:
      *(_DWORD *)a4 = MediaConnectState;
      goto LABEL_13;
    case 0x10280u:
      if ( *a3 )
      {
        *a3 = 1;
        *a4 = Miniport->IfBlock->ifPromiscuousMode;
        goto LABEL_13;
      }
      return 3221291030LL;
    case 0x10281u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifLastChange;
      goto LABEL_36;
    case 0x10282u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifCounterDiscontinuityTime;
      goto LABEL_36;
  }
  if ( v24 != 66179 )
  {
    switch ( v24 )
    {
      case 0x10284u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = IfBlock->XmitLinkSpeed;
        break;
      case 0x10285u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = IfBlock->RcvLinkSpeed;
        break;
      case 0x10286u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
LABEL_26:
        *(_QWORD *)a4 = 0LL;
        goto LABEL_13;
      case 0x10287u:
        if ( *a3 < 0xD8 )
          return 3221291030LL;
        *a3 = 216;
        *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)a4 + 1) = Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)a4 + 2) = IfBlock->MediaConnectState;
        *((_DWORD *)a4 + 3) = IfBlock->MediaDuplexState;
        *((_QWORD *)a4 + 3) = IfBlock->XmitLinkSpeed;
        *((_QWORD *)a4 + 4) = IfBlock->RcvLinkSpeed;
        v9 = ndisIfGetMiniportStatistics(Miniport, a4 + 64, a1);
        *((_DWORD *)a4 + 4) = IfBlock->ifMtu;
        a4[20] = Miniport->IfBlock->ifPromiscuousMode;
        a4[21] = IfBlock->ifDeviceWakeUpEnable;
        *((_QWORD *)a4 + 5) = IfBlock->ifLastChange;
        *((_QWORD *)a4 + 6) = IfBlock->ifCounterDiscontinuityTime;
        *((_QWORD *)a4 + 7) = 0LL;
        *((_DWORD *)a4 + 52) = IfBlock->CompartmentId;
        *((_DWORD *)a4 + 53) = Miniport->IfBlock->SupportedStatistics;
LABEL_33:
        v12 = v24;
        goto LABEL_13;
      default:
        goto LABEL_62;
    }
LABEL_36:
    *(_QWORD *)a4 = ifLastChange;
    goto LABEL_13;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifAdminStatus = Miniport->IfBlock->ifOperStatus;
LABEL_12:
  *(_DWORD *)a4 = ifAdminStatus;
LABEL_13:
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_LqL(0x3Bu, v12, v12, (__int64)a4);
  return v9;
}
