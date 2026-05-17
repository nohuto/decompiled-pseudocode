/*
 * XREFs of sub_1800960F0 @ 0x1800960F0
 * Callers:
 *     sub_1800961B0 @ 0x1800961B0 (sub_1800961B0.c)
 *     sub_180096200 @ 0x180096200 (sub_180096200.c)
 *     sub_180096250 @ 0x180096250 (sub_180096250.c)
 *     sub_1800962A0 @ 0x1800962A0 (sub_1800962A0.c)
 * Callees:
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 */

void __fastcall sub_1800960F0()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+A8h] [rbp-10h]

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800F5B30(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
