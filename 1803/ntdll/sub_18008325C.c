/*
 * XREFs of sub_18008325C @ 0x18008325C
 * Callers:
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 */

__int64 __fastcall sub_18008325C(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  DWORD v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = sub_18001014C(a1, 1, 9u, &v4, (char **)&v5);
  v2 = v5;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 != 0 ? 0xC000007B : 0;
}
