/*
 * XREFs of sub_1800014DC @ 0x1800014DC
 * Callers:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 * Callees:
 *     sub_180001560 @ 0x180001560 (sub_180001560.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 */

__int64 __fastcall sub_1800014DC(__int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  int v11; // eax

  v3 = a1;
  v4 = sub_180001560(a1, LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]);
  v7 = 0;
  if ( !v4 )
    goto LABEL_8;
  v8 = v4 - 1;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)sub_180030138(v6, v5, 0LL) )
      {
        *a2 = 16;
        return v7;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v7;
  }
  v9 = v3 & 0xF;
  *a2 = ((unsigned int)v9 != 0LL) + 1;
  LOBYTE(v7) = v9 == 0;
  return v7;
}
