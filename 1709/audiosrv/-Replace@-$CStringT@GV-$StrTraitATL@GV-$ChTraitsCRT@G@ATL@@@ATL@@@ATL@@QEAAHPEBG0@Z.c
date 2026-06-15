/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180017B30
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800142B0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180017800 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007DF2C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const void **a1,
        const wchar_t *a2,
        _WORD *a3,
        ...)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r12d
  unsigned __int64 v8; // r15
  wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // r13
  const wchar_t **v13; // r8
  __int64 v14; // r13
  int v15; // r15d
  int v16; // edx
  const wchar_t *v17; // rsi
  wchar_t *v18; // r13
  __int64 v19; // r9
  size_t v20; // rcx
  wchar_t *v21; // rdx
  size_t v22; // r8
  wchar_t *v23; // rax
  __int64 v24; // rax
  const wchar_t *v25; // [rsp+28h] [rbp-60h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  v6 = (const wchar_t *)*a1;
  v7 = 0;
  v8 = (unsigned __int64)*a1 + 2 * *((int *)*a1 - 4);
  if ( (unsigned __int64)*a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v12 = (int)v4;
        do
        {
          v6 = &v9[v12];
          ++v7;
          v9 = wcsstr(&v9[v12], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v6 += (int)v10 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v13 = (const wchar_t **)a1;
      v14 = *((int *)*a1 - 4);
      v15 = v14 + v7 * (v5 - v4);
      v28 = *((_DWORD *)*a1 - 4);
      v16 = v28;
      if ( v15 > (int)v14 )
        v16 = v14 + v7 * (v5 - v4);
      if ( ((*((_DWORD *)*a1 - 3) - v16) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v16);
        v13 = (const wchar_t **)a1;
      }
      v25 = *v13;
      v17 = *v13;
      v26 = (unsigned __int64)&(*v13)[v14];
      if ( (unsigned __int64)*v13 < v26 )
      {
        do
        {
          v18 = wcsstr(v17, a2);
          if ( v18 )
          {
            v19 = (int)v4;
            v20 = 2LL * (int)v5;
            do
            {
              v17 = &v18[v20 / 2];
              v30 = v28 - (v18 - v25) - v4;
              v21 = &v18[v19];
              v22 = 2LL * v30;
              if ( v22 )
              {
                if ( !v17 || !v21 )
                {
                  *(_DWORD *)_o__errno(v20, v21) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove(&v18[v20 / 2], v21, v22);
                v20 = 2LL * (int)v5;
              }
              if ( v20 )
              {
                if ( !v18 )
                  goto LABEL_49;
                if ( !a3 )
                {
                  memset(v18, 0, v20);
LABEL_49:
                  *(_DWORD *)_o__errno(v20, v21) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v18, a3, v20);
              }
              v18[(int)v5 + v30] = 0;
              v28 += v5 - v4;
              v23 = wcsstr(v17, a2);
              v20 = 2LL * (int)v5;
              v18 = v23;
              v19 = (int)v4;
            }
            while ( v23 );
          }
          if ( v17 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( v17[v24] );
          }
          else
          {
            LODWORD(v24) = 0;
          }
          v17 += (int)v24 + 1;
        }
        while ( (unsigned __int64)v17 < v26 );
        v13 = (const wchar_t **)a1;
      }
      if ( v15 < 0 || v15 > *((_DWORD *)*v13 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)*v13 - 4) = v15;
      (*v13)[v15] = 0;
    }
  }
  return (unsigned int)v7;
}
