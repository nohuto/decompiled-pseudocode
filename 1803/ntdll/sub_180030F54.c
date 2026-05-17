/*
 * XREFs of sub_180030F54 @ 0x180030F54
 * Callers:
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 * Callees:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     sub_1800CC2EC @ 0x1800CC2EC (sub_1800CC2EC.c)
 */

char __fastcall sub_180030F54(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int16 a5, int a6)
{
  const wchar_t *v6; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v13; // bl
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v6 = a4;
  if ( !a6 )
    return 1;
  if ( a4 )
  {
    if ( (a5 & 0x1000) != 0 )
    {
      if ( (int)LdrResGetRCConfig(a1, 0, (unsigned int)&v16, 4096, 1) < 0
        || (int)LdrResGetRCConfig(a2, 0, (unsigned int)&v15, 4096, 0) < 0 )
      {
        return 0;
      }
      v10 = v15;
    }
    else
    {
      LOBYTE(a4) = 1;
      v16 = sub_180033B60(a1, a2, 0LL, a4);
      if ( !v16 )
        return 0;
      v10 = sub_180033B60(a2, v9, 0LL, 0LL);
      v15 = v10;
      if ( !v10 )
        return 0;
    }
    if ( a6 == 2 )
    {
      v14 = *(_QWORD *)(v16 + 28) - *(_QWORD *)(v10 + 28);
      if ( *(_QWORD *)(v16 + 28) == *(_QWORD *)(v10 + 28) )
        v14 = *(_QWORD *)(v16 + 36) - *(_QWORD *)(v10 + 36);
      v13 = v14 == 0;
      if ( a3 )
      {
        if ( !v14 )
          return !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
        sub_1800CC2EC(a3);
        v10 = v15;
      }
    }
    else
    {
      v11 = *(_QWORD *)(v16 + 44) - *(_QWORD *)(v10 + 44);
      if ( !v11 )
        v11 = *(_QWORD *)(v16 + 52) - *(_QWORD *)(v10 + 52);
      if ( !v11 )
        return !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
      v13 = 0;
    }
    if ( !v13 )
      return 0;
    return !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
  }
  return 0;
}
