/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x1402A0C24
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14077A340 (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v12, 0);
  v7 = *(_DWORD *)(a1 + 200);
  if ( !a3 )
  {
    v9 = v7 | 0x80000;
    *(_DWORD *)(a1 + 200) = v9;
    if ( a2 )
      v10 = v9 | 0x100000;
    else
      v10 = v9 & 0xFFEFFFFF;
    v8 = v10 & 0xFFDFFFFF;
    goto LABEL_8;
  }
  if ( (v7 & 0x80000) == 0 )
  {
    v8 = v7 | 0x200000;
LABEL_8:
    *(_DWORD *)(a1 + 200) = v8;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v12, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
