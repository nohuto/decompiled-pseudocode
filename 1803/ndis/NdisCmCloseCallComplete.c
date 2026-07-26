/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C0111940
 * Callers:
 *     NdisClCloseCall @ 0x1C01110C0 (NdisClCloseCall.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_LqDLqD @ 0x1C005290C (WPP_SF_LqDLqD.c)
 *     ndisDereferenceAf @ 0x1C01145D8 (ndisDereferenceAf.c)
 *     ndisDereferenceVcPtr @ 0x1C0114684 (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // dl
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, __int64, __int64); // r12
  KSPIN_LOCK *v12; // rcx

  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_LqDLqD(0x27u, (__int64)NdisVcHandle, Status, (__int64)NdisVcHandle);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v7 = *((_QWORD *)NdisVcHandle + 3);
  v8 = *((_DWORD *)NdisVcHandle + 1) & 0xFFFFFF9F;
  *((_DWORD *)NdisVcHandle + 1) = v8;
  if ( NdisPartyHandle )
    v9 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v9 = 0LL;
  v10 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 296);
  else
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 144);
  v12 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v12, v6);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v8 & 0xFFFFFFF7;
    KeReleaseSpinLock(v12, v6);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(PVOID *)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((PVOID *)NdisVcHandle + 8));
    if ( (v8 & 8) != 0 )
      ndisDereferenceVcPtr(NdisVcHandle);
  }
  ndisDereferenceVcPtr(NdisVcHandle);
  v11((unsigned int)Status, v7, v9);
  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_q(0x28u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, (__int64)NdisVcHandle);
}
