/*
 * XREFs of PoDeviceReleaseIrp @ 0x140166C5C
 * Callers:
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     PoHandleIrp @ 0x140166B54 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceReleaseIrp @ 0x140166C98 (PopDiagTraceDeviceReleaseIrp.c)
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
