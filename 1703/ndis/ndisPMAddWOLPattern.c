/*
 * XREFs of ndisPMAddWOLPattern @ 0x1C002319C
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00232DC (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C004ACC4 (ndisClonePMPatternList.c)
 *     ndisGetWoLPatternSize @ 0x1C00BADB4 (ndisGetWoLPatternSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00D6E0C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(_DWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  _QWORD *v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // cl
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  _QWORD *v17; // rax
  __int64 v18; // r11
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // rsi
  UINT WoLPatternSize; // eax
  int v24; // r9d
  void *v25; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+40h] [rbp-C0h] BYREF

  memset(&Requesta, 0, 0xF8uLL);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(79LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, a2, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 986, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      v13 = *((_BYTE *)MiniportAdapterHandle + 32);
      NewIrql = v12;
      MiniportAdapterHandle[464] = 2758075;
      if ( v13 > 6u || v13 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x14u )
        v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 121);
      else
        v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 120);
      v15 = ndisClonePMPatternList(v14);
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      v16 = v15;
      MiniportAdapterHandle[464] = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, NewIrql);
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C0092615 < 2u )
          goto LABEL_7;
        v20 = 81LL;
        v21 = v16;
        goto LABEL_31;
      }
      v7 = 1;
    }
    v17 = (_QWORD *)ndisRemovePMLowestPriorityEntry(
                      &P,
                      *((unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v17 )
    {
      if ( (unsigned __int8)byte_1C0092615 < 4u )
        goto LABEL_7;
      v21 = *(unsigned int *)(v18 + 8);
      v20 = 82LL;
      goto LABEL_31;
    }
    *v17 = v6;
    v6 = v17;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265845;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = *((_DWORD *)v6 + 11);
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 5;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v19 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C0092615 < 2u )
        goto LABEL_7;
      v20 = 83LL;
      v21 = v19;
      goto LABEL_31;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0092615 >= 2u )
  {
    v20 = 80LL;
    v21 = SetMiniport;
LABEL_31:
    WPP_SF_d(v20, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v21);
  }
LABEL_7:
  while ( v6 )
  {
    v22 = v6;
    v6 = (_QWORD *)*v6;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265846;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v22[11];
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v22 + 12;
    WoLPatternSize = ndisGetWoLPatternSize();
    *(_DWORD *)&Requesta.NdisReserved[16] = v24 | 0x1800000;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2) )
    {
      *(_QWORD *)v22 = v6;
      v6 = v22;
      break;
    }
    ExFreePoolWithTag(v22, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 986), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938513LL);
  v10 = P;
  while ( v10 )
  {
    v25 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v25, 0);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqL(84LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, a2, Request, v9);
  return v9;
}
