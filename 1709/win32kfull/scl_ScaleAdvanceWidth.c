/*
 * XREFs of scl_ScaleAdvanceWidth @ 0x1C02B917C
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B4CD4 (fs_FindBitMapSize.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 *     mth_FixXYMul @ 0x1C02B7548 (mth_FixXYMul.c)
 */

__int64 __fastcall scl_ScaleAdvanceWidth(__int64 a1, int *a2, __int16 a3, int a4, __int16 a5, int *a6)
{
  __int64 result; // rax
  int v9; // eax
  int v10; // edx
  int fixed; // eax
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp+8h]

  if ( !a4 )
  {
    LODWORD(v13) = a3 << 16;
    HIDWORD(v13) = a3 >> 15;
    v9 = CompDiv(a5, v13);
    *a2 = v9;
    v10 = *(_DWORD *)(a1 + 384);
    if ( v10 == 0x10000 || !*(_WORD *)(a1 + 446) )
    {
      if ( !v9 || !*(_WORD *)(a1 + 446) )
        return mth_FixXYMul(a2, a2 + 1, a6);
      v12 = v9 + 0x10000;
    }
    else
    {
      fixed = FixMul(v9, v10);
      *a2 = fixed;
      if ( fixed && *(_WORD *)(a1 + 446) )
        *a2 = fixed + 0x10000;
      v12 = CompDiv(*(_DWORD *)(a1 + 384), (__int64)*a2 << 16);
    }
    *a2 = v12;
    return mth_FixXYMul(a2, a2 + 1, a6);
  }
  result = CompDiv(a5, a3 * (__int64)*(int *)(a1 + 384));
  *a2 = result;
  if ( (_DWORD)result )
  {
    if ( *(_WORD *)(a1 + 446) )
    {
      result = (unsigned int)(result + 0x10000);
      *a2 = result;
    }
  }
  return result;
}
