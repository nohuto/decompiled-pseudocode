/*
 * XREFs of sub_1800888F8 @ 0x1800888F8
 * Callers:
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 */

__int64 __fastcall sub_1800888F8(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  DWORD v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = sub_180032C0C(a1, 1, 9u, &v4, (char **)&v5);
  v2 = v5;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 != 0 ? 0xC000007B : 0;
}
