/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800142B0
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180014208 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007DFC4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800148AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800148E0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180016C70 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180017B30 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E9C (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800182C0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180070428 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180073538 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007DF2C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  unsigned int v2; // r12d
  __int64 v3; // rdi
  OLECHAR *v4; // rbx
  struct ATL::CStringData *(__fastcall *v5)(ATL::CAtlStringMgr *__hidden); // rax
  int *NilString; // rax
  unsigned __int16 v7; // dx
  _BYTE *v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  size_t v12; // r8
  const GUID *v13; // rcx
  volatile signed __int32 *v14; // rbx
  ATL::CAtlStringMgr **v15; // rdx
  void (*v16)(void); // rax
  _QWORD *v17; // rdx
  HINSTANCE StringResourceInstance; // rax
  void *v20; // [rsp+20h] [rbp-E8h] BYREF
  int v21; // [rsp+28h] [rbp-E0h]
  _QWORD v22[3]; // [rsp+30h] [rbp-D8h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+50h] [rbp-B8h] BYREF

  v22[1] = -2LL;
  v2 = 0;
  try
  {
    v3 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)&this->Data1 - 24LL) + 24;
    v22[0] = v3;
    if ( !*(_DWORD *)this[2].Data4 )
    {
      CAudioIdentifier::EscapeIdentifierString(v22);
      v3 = v22[0];
    }
    StringFromGUID2(this + 1, sz, 64);
    v4 = SysAllocString(sz);
    v22[2] = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    v5 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v5 == ATL::CAtlStringMgr::GetNilString )
      NilString = (int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = (int *)v5((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v8 = NilString + 6;
    v20 = NilString + 6;
    if ( ((unsigned __int64)v4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v4, v7);
      if ( StringResourceInstance )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v20,
          StringResourceInstance,
          (unsigned __int16)v4);
      goto LABEL_18;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( v4[v9] );
    if ( !(_DWORD)v9 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v20);
      goto LABEL_18;
    }
    v21 = NilString[2];
    v10 = ((char *)v4 - v8) >> 1;
    v11 = (unsigned int)(1 - NilString[4]);
    if ( ((v11 | (NilString[3] - v9)) & 0x80000000) != 0LL )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v20, (unsigned int)v9);
      v8 = v20;
    }
    if ( v10 <= (unsigned int)v21 )
    {
      v11 = (unsigned __int64)&v8[2 * v10];
      v12 = 2LL * (int)v9;
      if ( !v12 )
        goto LABEL_17;
      if ( v8 && v11 )
      {
        memmove(v8, (const void *)v11, v12);
        goto LABEL_17;
      }
    }
    else
    {
      v12 = 2LL * (int)v9;
      if ( !v12 )
      {
LABEL_17:
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v20, (unsigned int)v9, v12);
LABEL_18:
        SysFreeString(v4);
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
          &v20,
          L"%",
          L"%%");
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
          &v20,
          L"|",
          L"%b");
        v13 = this + 2;
        v14 = (volatile signed __int32 *)v20;
        if ( *(_DWORD *)this[2].Data4 )
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            v13,
            L"#|%s",
            v20);
        else
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            v13,
            L"%s|%s",
            v3,
            v20);
        v15 = (ATL::CAtlStringMgr **)(v14 - 6);
        if ( _InterlockedExchangeAdd(v14 - 2, 0xFFFFFFFF) <= 1 )
        {
          v16 = *(void (**)(void))(*(_QWORD *)*v15 + 8LL);
          if ( (char *)v16 == (char *)ATL::CAtlStringMgr::Free )
            ATL::CAtlStringMgr::Free(*v15, (struct ATL::CStringData *)v15);
          else
            v16();
        }
        v17 = (_QWORD *)(v22[0] - 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
        return v2;
      }
      if ( v8 )
      {
        memcpy_0(v8, v4, v12);
        goto LABEL_17;
      }
    }
    *(_DWORD *)_o__errno(v8, v11) = 22;
    invalid_parameter_noinfo();
    goto LABEL_17;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v21 = *(_DWORD *)v23;
    v2 = v21;
    if ( v21 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, v21);
  }
  return v2;
}
