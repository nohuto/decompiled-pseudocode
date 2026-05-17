/*
 * XREFs of sub_180063438 @ 0x180063438
 * Callers:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     sub_1800634B0 @ 0x1800634B0 (sub_1800634B0.c)
 */

__int64 __fastcall sub_180063438(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v7; // esi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx

  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v8 = sub_18006337C(a1, (unsigned __int64)a2);
  if ( v8 )
    v10 = sub_1800634B0(v9, v8, a4);
  else
    v10 = -1LL;
  if ( !v7 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v10;
}
