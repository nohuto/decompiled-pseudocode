/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000F5BC
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000C4A0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180032640 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180032894 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v8; // rax
  __int64 v9; // rdx
  void *v10; // rsi
  void *v11; // rcx
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > v4 )
  {
    v5 = *(int *)(a1 + 24);
    if ( *(_QWORD *)a1 )
    {
      if ( !v5 )
      {
        v5 = v4 >> 1;
        if ( a2 - v4 > v4 >> 1 )
          v5 = a2 - v4;
      }
      if ( a2 < v4 + v5 )
        a2 = v4 + v5;
      v8 = calloc(a2, 8uLL);
      v10 = v8;
      if ( !v8 )
        return 0;
      v11 = *(void **)a1;
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !v11 )
        {
          *(_DWORD *)_o__errno(0LL, v9) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v8, *(const void **)a1, v12);
        v11 = *(void **)a1;
      }
      free(v11);
      *(_QWORD *)a1 = v10;
    }
    else
    {
      if ( v5 > a2 )
        a2 = v5;
      v6 = calloc(a2, 8uLL);
      *(_QWORD *)a1 = v6;
      if ( !v6 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}
