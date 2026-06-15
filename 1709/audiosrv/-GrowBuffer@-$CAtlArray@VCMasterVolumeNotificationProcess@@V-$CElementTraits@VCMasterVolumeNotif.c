/*
 * XREFs of ?GrowBuffer@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18006CE88
 * Callers:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18006C504 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18006C5BC (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  const void *v11; // rdx
  size_t v12; // r8

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
      v8 = calloc(a2, 4uLL);
      v10 = v8;
      if ( !v8 )
        return 0;
      v11 = *(const void **)a1;
      v12 = 4LL * *(_QWORD *)(a1 + 8);
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
    }
    else
    {
      if ( *(int *)(a1 + 24) > a2 )
        a2 = *(int *)(a1 + 24);
      v5 = calloc(a2, 4uLL);
      *(_QWORD *)a1 = v5;
      if ( !v5 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}
