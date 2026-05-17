/*
 * XREFs of sub_18008B350 @ 0x18008B350
 * Callers:
 *     sub_18008B410 @ 0x18008B410 (sub_18008B410.c)
 *     sub_18008B460 @ 0x18008B460 (sub_18008B460.c)
 *     sub_18008B4B0 @ 0x18008B4B0 (sub_18008B4B0.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_1800F2E10 @ 0x1800F2E10 (sub_1800F2E10.c)
 */

void __fastcall sub_18008B350()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+A8h] [rbp-10h]

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800F2E10(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
