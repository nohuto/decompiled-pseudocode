/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180022F00
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18003202C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180022EE0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const wchar_t **a1,
        const wchar_t *a2,
        _WORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  const wchar_t *v7; // rsi
  int v8; // r15d
  unsigned __int64 v9; // r12
  wchar_t *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // r13
  const wchar_t **v14; // r8
  __int64 v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // rdx
  const wchar_t *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  wchar_t *v22; // r13
  size_t v23; // rcx
  wchar_t *v24; // rdx
  size_t v25; // r8
  wchar_t *v26; // rax
  size_t v27; // [rsp+20h] [rbp-58h]
  const wchar_t *v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+98h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !(_DWORD)v5 )
    return 0LL;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  v7 = *a1;
  v8 = 0;
  v9 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
  if ( (unsigned __int64)*a1 < v9 )
  {
    do
    {
      v10 = wcsstr(v7, a2);
      if ( v10 )
      {
        v13 = (int)v5;
        do
        {
          v7 = &v10[v13];
          ++v8;
          v10 = wcsstr(&v10[v13], a2);
        }
        while ( v10 );
      }
      if ( v7 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( v7[v11] );
      }
      else
      {
        LODWORD(v11) = 0;
      }
      v7 += (int)v11 + 1;
    }
    while ( (unsigned __int64)v7 < v9 );
    if ( v8 > 0 )
    {
      v14 = a1;
      v15 = *((int *)*a1 - 4);
      v16 = v15 + v8 * (v6 - v5);
      v31 = *((_DWORD *)*a1 - 4);
      v17 = (unsigned int)v15;
      if ( (int)v16 > (int)v15 )
        v17 = v16;
      if ( (int)((*((_DWORD *)*a1 - 3) - v17) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v17);
        v14 = a1;
      }
      v28 = *v14;
      v18 = *v14;
      v29 = (unsigned __int64)&(*v14)[v15];
      if ( (unsigned __int64)*v14 < v29 )
      {
        do
        {
          v22 = wcsstr(v18, a2);
          if ( v22 )
          {
            v21 = 2LL * (int)v5;
            v23 = 2LL * (int)v6;
            v27 = v23;
            do
            {
              v18 = &v22[v23 / 2];
              v32 = v31 - (v22 - v28) - v5;
              v24 = &v22[(unsigned __int64)v21 / 2];
              v25 = 2LL * v32;
              if ( v25 )
              {
                if ( !v18 || !v24 )
                {
                  *(_DWORD *)_o__errno(v23, v24, v25, v21) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove(&v22[v23 / 2], v24, v25);
                v23 = 2LL * (int)v6;
              }
              if ( v23 )
              {
                if ( !v22 )
                  goto LABEL_42;
                if ( !a3 )
                {
                  memset(v22, 0, v23);
LABEL_42:
                  *(_DWORD *)_o__errno(v23, v24, v25, v21) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v22, a3, v23);
              }
              v22[(int)v6 + v32] = 0;
              v31 += v6 - v5;
              v26 = wcsstr(v18, a2);
              v23 = 2LL * (int)v6;
              v22 = v26;
              v21 = 2LL * (int)v5;
            }
            while ( v26 );
          }
          v18 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v18, v19, v20, v21, v27) + 1);
        }
        while ( (unsigned __int64)v18 < v29 );
        v14 = a1;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v14, v16);
    }
  }
  return (unsigned int)v8;
}
