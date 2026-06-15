/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x1800301C4
 * Callers:
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180030938 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x1800310FC (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  const void *v11; // rdx
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v7 = *(int *)(a1 + 24);
    if ( !v7 )
    {
      v7 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v7 = a2 - v4;
    }
    if ( a2 < v4 + v7 )
      a2 = v4 + v7;
    v8 = calloc(a2, 8uLL);
    v10 = v8;
    if ( v8 )
    {
      v11 = *(const void **)a1;
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !v11 )
        {
          *(_DWORD *)_o__errno(v9, 0LL) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v8, v11, v12);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v10;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(int *)(a1 + 24) > a2 )
      a2 = *(int *)(a1 + 24);
    v5 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  return 0;
}
