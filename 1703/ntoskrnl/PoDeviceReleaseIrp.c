/*
 * XREFs of PoDeviceReleaseIrp @ 0x140145650
 * Callers:
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     PoHandleIrp @ 0x140145564 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceReleaseIrp @ 0x14014568C (PopDiagTraceDeviceReleaseIrp.c)
 */

__int64 __fastcall PoDeviceReleaseIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
    result = PopDiagTraceDeviceReleaseIrp(a1, a3);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  return result;
}
