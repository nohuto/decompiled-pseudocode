/*
 * XREFs of sub_180039AE0 @ 0x180039AE0
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180039B68 @ 0x180039B68 (sub_180039B68.c)
 */

signed __int64 __fastcall sub_180039AE0(unsigned __int64 a1, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = sub_180032C0C(a1, 1, 3u, &v8, &v9);
  v5 = v9;
  if ( v4 < 0 )
    v5 = 0;
  RtlAcquireSRWLockExclusive(&qword_18015C248);
  sub_18001DEA8(0);
  sub_180039B68(v6, v3, v5, a2, v8);
  sub_18001DEA8(1);
  return RtlReleaseSRWLockExclusive(&qword_18015C248);
}
