/*
 * XREFs of ObpLockDirectoryShared @ 0x14008A9CC
 * Callers:
 *     NtQueryDirectoryObject @ 0x140484130 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x14056ED60 (ObpLookupDirectoryUsingHash.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
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
