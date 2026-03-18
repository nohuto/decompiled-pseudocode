/*
 * XREFs of ObpLockDirectoryExclusive @ 0x14004439C
 * Callers:
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14044E76C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf
  __int64 result; // rax

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 296, 0LL);
  v5 = ObpTraceFlags == 0;
  *(_DWORD *)(a1 + 32) = -859041228;
  if ( !v5 )
    ObpPushStackInfo(a2 - 48);
  result = ObpIncrPointerCount(a2 - 48);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 257;
  return result;
}
