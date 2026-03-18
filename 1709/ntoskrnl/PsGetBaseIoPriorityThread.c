/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x140060E60
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
