/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800B7A10
 * Callers:
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800B00F4 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800B792C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  int v3; // r8d
  int v4; // r8d
  char *v5; // rcx
  const void *v6; // rdx
  unsigned __int64 v7; // r9

  if ( a2 < 0 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v3 )
    return 0LL;
  if ( a2 != v3 - 1 )
  {
    v4 = v3 - a2;
    v5 = (char *)(*(_QWORD *)a1 + 16LL * a2);
    v6 = v5 + 16;
    v7 = 16LL * (v4 - 1);
    if ( v7 )
    {
      if ( !v5 || v5 == (char *)-16LL )
      {
        *(_DWORD *)_o__errno(v5, v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * v4 < v7 )
      {
        *(_DWORD *)_o__errno(v5, v6) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v5, v6, 16LL * (v4 - 1));
    }
  }
  --*(_DWORD *)(a1 + 8);
  return 1LL;
}
