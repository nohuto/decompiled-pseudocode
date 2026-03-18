/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x14025F174
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0 (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v11, 0);
  if ( a3 )
  {
    v7 = *(_DWORD *)(a1 + 200);
    if ( (v7 & 0x80000) == 0 )
      *(_DWORD *)(a1 + 200) = v7 | 0x200000;
  }
  else
  {
    *(_DWORD *)(a1 + 200) |= 0x80000u;
    v8 = *(_DWORD *)(a1 + 200);
    if ( a2 )
      v9 = v8 | 0x100000;
    else
      v9 = v8 & 0xFFEFFFFF;
    *(_DWORD *)(a1 + 200) = v9;
    *(_DWORD *)(a1 + 200) &= ~0x200000u;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
