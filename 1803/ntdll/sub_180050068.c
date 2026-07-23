/*
 * XREFs of sub_180050068 @ 0x180050068
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800F2E70 @ 0x1800F2E70 (sub_1800F2E70.c)
 * Callees:
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     sub_1800500E8 @ 0x1800500E8 (sub_1800500E8.c)
 */

__int64 __fastcall sub_180050068(__int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // edi
  int v9; // eax

  v3 = a1;
  v4 = sub_1800500E8(a1, LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]);
  v5 = 0;
  if ( !v4 )
    goto LABEL_8;
  v6 = v4 - 1;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)sub_18001F704() )
      {
        *a2 = 16;
        return v5;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v5;
  }
  v7 = v3 & 0xF;
  LOBYTE(v5) = v7 == 0;
  *a2 = (v7 != 0LL) + 1;
  return v5;
}
