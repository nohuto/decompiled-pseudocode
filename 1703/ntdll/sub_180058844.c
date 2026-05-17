/*
 * XREFs of sub_180058844 @ 0x180058844
 * Callers:
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 * Callees:
 *     sub_18000799C @ 0x18000799C (sub_18000799C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180058A00 @ 0x180058A00 (sub_180058A00.c)
 *     sub_180058AF0 @ 0x180058AF0 (sub_180058AF0.c)
 */

__int64 __fastcall sub_180058844(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rax
  bool i; // zf
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = sub_180058A00(a1, a1);
  for ( i = *(_QWORD *)(a1 + 8) == 0LL; ; i = *(_QWORD *)(a1 + 8) == 0LL )
  {
    v7 = v5;
    if ( !i || v4 < 0 )
      break;
    if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
      RtlReleaseSRWLockShared((volatile signed __int64 *)a1);
    sub_180058AF0(a1, a1);
    if ( !*(_QWORD *)(a1 + 8) )
      v4 = sub_18000799C(a1);
    if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v5 = sub_180058A00(a1, a1);
  }
  result = (unsigned int)v4;
  *a2 = v7;
  return result;
}
