/*
 * XREFs of sub_1800CB310 @ 0x1800CB310
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 *     sub_1800CB430 @ 0x1800CB430 (sub_1800CB430.c)
 */

__int64 __fastcall sub_1800CB310(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *),
        __int64 (__fastcall *a4)(__int64, const char *),
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int v14; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  v14 = sub_180041814(a1, a2, (__int64 *)&BaseAddress, a6, (__int64)a5);
  Status = v14;
  if ( v14 >= 0 )
  {
    if ( byte_18015CFB4 )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016F1F0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = sub_1800CB430(a1, (_DWORD)BaseAddress, a2, (_DWORD)a5, v12, (__int64)&v14);
    sub_18001F5FC((char *)BaseAddress);
    Status = v14;
  }
  if ( Status >= 0
    || (v10 = sub_18007FCDC(a1, (__int64)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
