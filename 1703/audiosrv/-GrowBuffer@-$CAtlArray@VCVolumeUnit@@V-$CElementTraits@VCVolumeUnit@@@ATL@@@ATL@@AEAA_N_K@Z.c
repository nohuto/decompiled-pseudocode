/*
 * XREFs of ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18003ABC8
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18003AC90 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer(__int64 a1, size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  void *v9; // rsi
  size_t v10; // r8
  const void *v11; // rdx
  void *v13; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v5 = *(int *)(a1 + 24);
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v6 = calloc(a2, 0x38uLL);
    v9 = v6;
    if ( v6 )
    {
      v10 = 56LL * *(_QWORD *)(a1 + 8);
      v11 = *(const void **)a1;
      if ( v10 )
      {
        if ( !v11 )
        {
          *(_DWORD *)_o__errno(v7, 0LL, v10, v8) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v6, v11, v10);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v9;
LABEL_13:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  else
  {
    if ( *(int *)(a1 + 24) > a2 )
      a2 = *(int *)(a1 + 24);
    v13 = calloc(a2, 0x38uLL);
    *(_QWORD *)a1 = v13;
    if ( v13 )
      goto LABEL_13;
  }
  return 0;
}
