/*
 * XREFs of ObpLockDirectoryShared @ 0x140044324
 * Callers:
 *     NtQueryDirectoryObject @ 0x14047C040 (NtQueryDirectoryObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1404F7410 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpLockDirectoryShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf
  __int64 result; // rax

  *(_DWORD *)(a1 + 32) = -1145368012;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 296, 0LL);
  v5 = ObpTraceFlags == 0;
  *(_DWORD *)(a1 + 32) = -572714444;
  if ( !v5 )
    ObpPushStackInfo(a2 - 48);
  result = ObpIncrPointerCount(a2 - 48);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 1;
  return result;
}
