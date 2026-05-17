/*
 * XREFs of sub_180060688 @ 0x180060688
 * Callers:
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180060688(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax
  __int64 v5; // r8
  __int64 v6; // rcx

  v3 = a3;
  v4 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 80));
  v5 = 16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3);
  v6 = a1 ^ *(_QWORD *)(a1 + 64);
  if ( v4 == sub_1800606E0 )
    return sub_1800606E0(v6, a2, v5, v3);
  else
    return v4(v6, a2, v5, v3);
}
