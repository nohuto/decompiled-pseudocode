/*
 * XREFs of RtlInitMinimalBarrier @ 0x1402B15F8
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
