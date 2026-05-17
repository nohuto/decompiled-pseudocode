/*
 * XREFs of sub_18002AE58 @ 0x18002AE58
 * Callers:
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002AEE0 @ 0x18002AEE0 (sub_18002AEE0.c)
 */

signed __int64 __fastcall sub_18002AE58(unsigned __int64 a1, int a2)
{
  int v3; // esi
  int v4; // eax
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // ecx
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = sub_18001014C(a1, 1, 3u, &v10, &v11);
  v7 = v11;
  if ( v4 < 0 )
    v7 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D288, 0LL, v5, v6);
  sub_1800259B4(0);
  sub_18002AEE0(v8, v3, v7, a2, v10);
  sub_1800259B4(1);
  return RtlReleaseSRWLockExclusive(&qword_18015D288);
}
