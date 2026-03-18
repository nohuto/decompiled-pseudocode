/*
 * XREFs of SeSetPrivateNameSpaceToken @ 0x1406F0CA4
 * Callers:
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeSetPrivateNameSpaceToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v3 = -1073741525;
  }
  else if ( a2 )
  {
    *(_DWORD *)(a1 + 200) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(a1 + 200) &= ~0x10000u;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
