/*
 * XREFs of MiIsSessionMetadata @ 0x140221BFC
 * Callers:
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSystemRegionType(a1);
  if ( (_DWORD)result != 1 || v2 < qword_1403884B8 || v2 >= qword_1403884B8 + 4481024 )
    return 0LL;
  return result;
}
