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

void __fastcall sub_18002AE58(unsigned __int64 a1, int a2)
{
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  int v6; // ecx
  DWORD v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = sub_18001014C(a1, 1, 3u, &v7, &v8);
  v5 = (int)v8;
  if ( v4 < 0 )
    v5 = 0;
  RtlAcquireSRWLockExclusive(&Address);
  sub_1800259B4(0);
  sub_18002AEE0(v6, v3, v5, a2, v7);
  sub_1800259B4(1);
  RtlReleaseSRWLockExclusive(&Address);
}
