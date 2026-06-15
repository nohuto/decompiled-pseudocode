/*
 * XREFs of ?GrowBuffer@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18000A9C4
 * Callers:
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000A4A0 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 */

char __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  void *v11; // rsi
  const void *v12; // rdx
  size_t v13; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > v4 )
  {
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
      v8 = calloc(a2, 0x20uLL);
      v11 = v8;
      if ( !v8 )
        return 0;
      v12 = *(const void **)a1;
      v13 = 32LL * *(_QWORD *)(a1 + 8);
      if ( v13 )
      {
        if ( !v12 )
        {
          *(_DWORD *)_o__errno(v9, 0LL, v13, v10) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v8, v12, v13);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v11;
    }
    else
    {
      if ( *(int *)(a1 + 24) > a2 )
        a2 = *(int *)(a1 + 24);
      v5 = calloc(a2, 0x20uLL);
      *(_QWORD *)a1 = v5;
      if ( !v5 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}
