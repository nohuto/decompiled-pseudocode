/*
 * XREFs of NdisCoRequest @ 0x1C01083E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     NdisCoOidRequest @ 0x1C0107F10 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C0108710 (NdisCoRequestComplete.c)
 *     ndisDereferenceAf @ 0x1C010958C (ndisDereferenceAf.c)
 *     ndisReferenceAf @ 0x1C0109840 (ndisReferenceAf.c)
 */

__int64 __fastcall NdisCoRequest(
        NDIS_HANDLE NdisBindingHandle,
        KSPIN_LOCK *P,
        _QWORD *NdisVcHandle,
        _QWORD *NdisPartyHandle,
        _QWORD *a5)
{
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // dl
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 (__fastcall *v15)(KSPIN_LOCK, __int64, PVOID, _QWORD *); // rbp
  KIRQL v16; // al
  NDIS_STATUS v17; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *OidRequest; // rbx
  _DWORD *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r11
  KSPIN_LOCK v26; // [rsp+68h] [rbp+10h]
  PVOID v27; // [rsp+80h] [rbp+28h]

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x3Eu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, NdisBindingHandle, P, a5);
  if ( *((_DWORD *)a5 + 10) == -33554422 && *((_DWORD *)a5 + 8) == 1 && P && (unsigned __int8)ndisReferenceAf(P) )
  {
    if ( *((_DWORD *)P + 99) < 6u )
    {
      v14 = 0LL;
      v27 = 0LL;
      memset(a5 + 9, 0, 0x20uLL);
      v15 = (__int64 (__fastcall *)(KSPIN_LOCK, __int64, PVOID, _QWORD *))P[10];
      v26 = P[47];
      a5[11] = P[6];
      a5[9] = *(_QWORD *)(P[3] + 128);
      if ( NdisVcHandle )
      {
        a5[10] = NdisVcHandle[18];
        v14 = NdisVcHandle[3];
      }
      if ( NdisPartyHandle )
      {
        a5[12] = NdisPartyHandle[18];
        v27 = (PVOID)NdisPartyHandle[2];
      }
      if ( v15 )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(P + 48);
        v11 = P + 48;
        v12 = v16;
        if ( (P[1] & 0x40000000) == 0 )
        {
          KeReleaseSpinLock(v11, v16);
          v17 = v15(v26, v14, v27, a5);
          v13 = v17;
          if ( v17 == 259 )
            goto LABEL_31;
          NdisCoRequestComplete(v17, P, NdisVcHandle, NdisPartyHandle, a5);
          goto LABEL_30;
        }
        goto LABEL_9;
      }
      v13 = -1073741637;
    }
    else
    {
      P[50] = (KSPIN_LOCK)a5;
      v10 = KeAcquireSpinLockRaiseToDpc(P + 48);
      v11 = P + 48;
      v12 = v10;
      if ( (P[1] & 0x40000000) != 0 )
      {
LABEL_9:
        *((_BYTE *)P + 592) = 1;
        P[73] = (KSPIN_LOCK)a5;
        KeReleaseSpinLock(v11, v12);
LABEL_30:
        v13 = 259;
        goto LABEL_31;
      }
      KeReleaseSpinLock(v11, v10);
      v13 = ((__int64 (__fastcall *)(KSPIN_LOCK))P[45])(P[47]);
      if ( v13 == 259 )
        goto LABEL_31;
      P[50] = 0LL;
    }
    ndisDereferenceAf(P);
    goto LABEL_31;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
  OidRequest = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
    goto LABEL_31;
  }
  memset(PoolWithTag, 0, 0xF8uLL);
  *OidRequest = 16253334;
  OidRequest[1] = *((_DWORD *)a5 + 8);
  if ( *((_DWORD *)a5 + 8) != 12 )
  {
    OidRequest[8] = *((_DWORD *)a5 + 10);
    *((_QWORD *)OidRequest + 5) = a5[6];
    OidRequest[12] = *((_DWORD *)a5 + 14);
    OidRequest[13] = *((_DWORD *)a5 + 15);
    OidRequest[14] = *((_DWORD *)a5 + 16);
  }
  *((_QWORD *)OidRequest + 13) = NdisBindingHandle;
  *((_QWORD *)OidRequest + 12) = a5;
  v13 = NdisCoOidRequest(NdisBindingHandle, P, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
  if ( v13 != 259 )
  {
    v20 = (_DWORD *)*((_QWORD *)OidRequest + 12);
    v21 = *((_QWORD *)OidRequest + 14);
    v22 = *((_QWORD *)OidRequest + 16);
    v23 = *((_QWORD *)OidRequest + 17);
    v24 = *((_QWORD *)OidRequest + 13);
    if ( v20[8] != 12 )
    {
      v20[15] = OidRequest[13];
      v20[16] = OidRequest[14];
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v24 + 1072))(v13, v23, v22, v21, v20);
    ExFreePoolWithTag(OidRequest, 0);
    goto LABEL_30;
  }
LABEL_31:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x3Fu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, NdisBindingHandle, P, a5);
  return v13;
}
