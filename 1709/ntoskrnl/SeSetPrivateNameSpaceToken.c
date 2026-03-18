/*
 * XREFs of SeSetPrivateNameSpaceToken @ 0x1407286C4
 * Callers:
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
