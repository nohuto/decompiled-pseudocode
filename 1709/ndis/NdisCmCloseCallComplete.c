/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C010F930
 * Callers:
 *     NdisClCloseCall @ 0x1C010F0C0 (NdisClCloseCall.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_LqDLqD @ 0x1C0051F9C (WPP_SF_LqDLqD.c)
 *     ndisDereferenceAf @ 0x1C011259C (ndisDereferenceAf.c)
 *     ndisDereferenceVcPtr @ 0x1C0112648 (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // al
  KIRQL v7; // dl
  int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, __int64, __int64); // r15
  KSPIN_LOCK *v13; // rcx

  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_LqDLqD(0x27u, (__int64)NdisVcHandle, Status, (__int64)NdisVcHandle);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) &= 0xFFFFFF9F;
  v7 = v6;
  v8 = *((_DWORD *)NdisVcHandle + 1);
  v9 = *((_QWORD *)NdisVcHandle + 3);
  if ( NdisPartyHandle )
    v10 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v10 = 0LL;
  v11 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 296);
  else
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 144);
  v13 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v13, v7);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v8 & 0xFFFFFFF7;
    KeReleaseSpinLock(v13, v7);
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
  v12((unsigned int)Status, v9, v10);
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_q(0x28u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, (__int64)NdisVcHandle);
}
