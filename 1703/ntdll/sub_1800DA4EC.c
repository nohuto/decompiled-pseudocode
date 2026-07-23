/*
 * XREFs of sub_1800DA4EC @ 0x1800DA4EC
 * Callers:
 *     sub_180004F9C @ 0x180004F9C (sub_180004F9C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 * Callees:
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DA4EC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  PVOID BaseAddress[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( (int)sub_180076258(a1, (volatile signed __int32 **)BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)qword_18015B318 && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    sub_18003015C((char *)BaseAddress[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                         qword_18016B288,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      sub_18000159C(a3, 1u, BaseAddress);
    *a5 = v10;
  }
  else
  {
    *a5 = a3;
  }
  return 0LL;
}
