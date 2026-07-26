/*
 * XREFs of ndisPMAddWOLPattern @ 0x1C001E958
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001E894 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001EA98 (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C0048748 (ndisClonePMPatternList.c)
 *     ndisGetWoLPatternSize @ 0x1C00ADD3C (ndisGetWoLPatternSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00E125C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
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
  int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rsi
  UINT WoLPatternSize; // eax
  int v25; // r9d
  void *v26; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+40h] [rbp-C0h] BYREF

  memset(&Requesta, 0, 0xF8uLL);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(79LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 493, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
      MiniportAdapterHandle[65] = KeGetCurrentThread();
      v13 = *((_BYTE *)MiniportAdapterHandle + 32);
      NewIrql = v12;
      *((_DWORD *)MiniportAdapterHandle + 464) = 2758077;
      if ( v13 > 6u || v13 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x14u )
        v14 = (void *)MiniportAdapterHandle[121];
      else
        v14 = (void *)MiniportAdapterHandle[120];
      v15 = ndisClonePMPatternList(v14);
      MiniportAdapterHandle[65] = 0LL;
      v16 = v15;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      KeReleaseSpinLock(MiniportAdapterHandle + 12, NewIrql);
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C0098755 < 2u )
          goto LABEL_7;
        v21 = 81LL;
        v22 = v16;
        goto LABEL_31;
      }
      v7 = 1;
    }
    v17 = (_QWORD *)ndisRemovePMLowestPriorityEntry(
                      &P,
                      *((unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v17 )
    {
      if ( (unsigned __int8)byte_1C0098755 < 4u )
        goto LABEL_7;
      v22 = *(unsigned int *)(v18 + 8);
      v21 = 82LL;
      goto LABEL_31;
    }
    *v17 = v6;
    v6 = v17;
    memset(&Requesta, 0, 0xF8uLL);
    v19 = *(_DWORD *)&Requesta.NdisReserved[16];
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265845;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = *((_DWORD *)v6 + 11);
    *(_DWORD *)&Requesta.NdisReserved[16] = v19 | 0x1800008;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 5;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v20 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2);
    if ( v20 )
    {
      if ( (unsigned __int8)byte_1C0098755 < 2u )
        goto LABEL_7;
      v21 = 83LL;
      v22 = v20;
      goto LABEL_31;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0098755 >= 2u )
  {
    v21 = 80LL;
    v22 = SetMiniport;
LABEL_31:
    WPP_SF_d(v21, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v22);
  }
LABEL_7:
  while ( v6 )
  {
    v23 = v6;
    v6 = (_QWORD *)*v6;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265846;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v23[11];
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v23 + 12;
    WoLPatternSize = ndisGetWoLPatternSize();
    *(_DWORD *)&Requesta.NdisReserved[16] = v25 | 0x1800000;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2) )
    {
      *(_QWORD *)v23 = v6;
      v6 = v23;
      break;
    }
    ExFreePoolWithTag(v23, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 493), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938513LL);
  v10 = P;
  while ( v10 )
  {
    v26 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v26, 0);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(84LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, Request, v9);
  return v9;
}
