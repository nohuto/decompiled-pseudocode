/*
 * XREFs of RtlApplyRXactNoFlush @ 0x180087C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x180087C90 (RtlAbortRXact.c)
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = sub_180087CD0();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
