/*
 * XREFs of RtlApplyRXactNoFlush @ 0x180080060
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x180080090 (RtlAbortRXact.c)
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800800D0();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
