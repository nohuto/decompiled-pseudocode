/*
 * XREFs of NdisCmMakeCallComplete @ 0x1C0106D40
 * Callers:
 *     NdisClMakeCall @ 0x1C01063C0 (NdisClMakeCall.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_LqDLqD @ 0x1C0053160 (WPP_SF_LqDLqD.c)
 *     ndisDereferenceAf @ 0x1C010958C (ndisDereferenceAf.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0109894 (ndisReferenceVcPtr.c)
 */

void __stdcall NdisCmMakeCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  bool v9; // si
  __int64 v10; // rbp
  KIRQL v11; // al
  int v12; // ecx
  __int64 v13; // rdx
  KIRQL v14; // al
  _QWORD *v15; // rcx
  KIRQL v16; // r9
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+30h] [rbp-28h]
  int v25; // [rsp+38h] [rbp-20h]

  v9 = 0;
  if ( (unsigned __int8)byte_1C009261A >= 4u )
  {
    v25 = *(_DWORD *)(*((_QWORD *)NdisVcHandle + 9) + 4LL);
    v24 = *((_QWORD *)NdisVcHandle + 9);
    v23 = *(_DWORD *)NdisVcHandle;
    v22 = *((_DWORD *)NdisVcHandle + 1);
    WPP_SF_LqDLqD(0x22u, (__int64)NdisVcHandle, Status, (__int64)NdisVcHandle);
  }
  v10 = *((_QWORD *)NdisVcHandle + 8);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) &= ~0x10u;
  v12 = *((_DWORD *)NdisVcHandle + 1);
  if ( Status )
    v9 = (v12 & 0x40) != 0;
  else
    *((_DWORD *)NdisVcHandle + 1) = v12 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v11);
  if ( Status )
  {
    if ( !v9 )
    {
      ndisDereferenceVcPtr(NdisVcHandle);
      ndisDereferenceAf((PVOID)v10);
      if ( NdisPartyHandle )
      {
        ExFreePoolWithTag(NdisPartyHandle, 0);
        NdisPartyHandle = 0LL;
      }
    }
    if ( (unsigned __int8)byte_1C009261A >= 4u )
      WPP_SF_d(0x23u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, Status);
  }
  else
  {
    if ( NdisPartyHandle )
    {
      *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
      ndisReferenceVcPtr(NdisVcHandle, v13);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL));
    v15 = (char *)NdisVcHandle + 32;
    v16 = v14;
    v17 = *((_QWORD *)NdisVcHandle + 4);
    v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 5);
    if ( *(NDIS_HANDLE *)(v17 + 8) != (char *)NdisVcHandle + 32 || (_QWORD *)*v18 != v15 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = *(_QWORD *)(v10 + 368) + 1088LL;
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
      __fastfail(3u);
    *v15 = v20;
    *((_QWORD *)NdisVcHandle + 5) = v19;
    *(_QWORD *)(v20 + 8) = v15;
    *(_QWORD *)v19 = v15;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL), v16);
  }
  v21 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS, int, int, __int64, int))(v10 + 280))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters,
      v22,
      v23,
      v24,
      v25);
  else
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS, int, int, __int64, int))(v10 + 128))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters,
      v22,
      v23,
      v24,
      v25);
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_(0x24u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
}
