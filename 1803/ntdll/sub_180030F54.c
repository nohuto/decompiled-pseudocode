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

char __fastcall sub_180030F54(void *a1, void *a2, __int64 a3, const wchar_t *a4, __int16 a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v12; // bl
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  if ( !a6 )
    return 1;
  if ( a4 )
  {
    if ( (a5 & 0x1000) != 0 )
    {
      if ( (int)LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v15, 4096, 1) < 0
        || (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v14, 4096, 0) < 0 )
      {
        return 0;
      }
      v9 = v14;
    }
    else
    {
      v15 = sub_180033B60(a1);
      if ( !v15 )
        return 0;
      v9 = sub_180033B60(a2);
      v14 = v9;
      if ( !v9 )
        return 0;
    }
    if ( a6 == 2 )
    {
      v13 = *(_QWORD *)(v15 + 28) - *(_QWORD *)(v9 + 28);
      if ( *(_QWORD *)(v15 + 28) == *(_QWORD *)(v9 + 28) )
        v13 = *(_QWORD *)(v15 + 36) - *(_QWORD *)(v9 + 36);
      v12 = v13 == 0;
      if ( a3 )
      {
        if ( !v13 )
          return !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
        sub_1800CC2EC(a3);
        v9 = v14;
      }
    }
    else
    {
      v10 = *(_QWORD *)(v15 + 44) - *(_QWORD *)(v9 + 44);
      if ( !v10 )
        v10 = *(_QWORD *)(v15 + 52) - *(_QWORD *)(v9 + 52);
      if ( !v10 )
        return !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
      v12 = 0;
    }
    if ( !v12 )
      return 0;
    return !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
  }
  return 0;
}
