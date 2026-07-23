/*
 * XREFs of sub_1800D3C0C @ 0x1800D3C0C
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800CB430 @ 0x1800CB430 (sub_1800CB430.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D3C0C(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  PVOID BaseAddress[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( (int)sub_180054448(a1, (unsigned __int64 *)BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)qword_18015C348 && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    sub_18001F5FC((char *)BaseAddress[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  qword_18016F290,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      sub_18004FB50(a3, 1u, BaseAddress);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
