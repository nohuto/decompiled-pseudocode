/*
 * XREFs of ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800AA3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180030910 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180042ED8 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B7F00 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSession::GetStreamSwitchId(const wchar_t **this, unsigned __int16 **a2)
{
  void **v2; // rsi
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 *v6; // rbx
  size_t v7; // rdi
  char *v8; // rax
  wchar_t *v10; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v11; // [rsp+38h] [rbp-40h] BYREF
  const wchar_t *v12[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v13; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int16 *v15; // [rsp+90h] [rbp+18h] BYREF
  wchar_t *v16; // [rsp+98h] [rbp+20h] BYREF

  v12[1] = (const wchar_t *)-2LL;
  v2 = (void **)a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      this[91]);
  }
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v12, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v16, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v15, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToStreamSwitchString(this + 82, v12);
  if ( v4 < 0 )
  {
    v6 = v15;
    goto LABEL_13;
  }
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v11,
      L"%d",
      *((unsigned int *)this + 77));
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v10,
      L"%d",
      *((unsigned int *)this + 76));
    v5 = (*((__int64 (__fastcall **)(char *))this[3] + 4))((char *)this + 24);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v16,
      L"%d",
      v5);
    CAudioIdentifier::EscapeIdentifierString(v12);
    CAudioIdentifier::EscapeIdentifierString((const wchar_t **)&v11);
    CAudioIdentifier::EscapeIdentifierString((const wchar_t **)&v10);
    CAudioIdentifier::EscapeIdentifierString((const wchar_t **)&v16);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v15,
      L"%s|%s|%s|%s",
      v12[0],
      v11,
      v10,
      v16);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v2 = (void **)a2;
    v4 = *(_DWORD *)v13;
  }
  v6 = v15;
  if ( v4 < 0 )
    goto LABEL_13;
  v7 = 2LL * (*((_DWORD *)v15 - 4) + 1);
  v8 = (char *)MIDL_user_allocate(v7);
  *v2 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetStreamSwitchId", 568, v4);
    goto LABEL_14;
  }
  v4 = StringCbCopyW(v8, v7, (char *)v6);
  if ( v4 < 0 )
  {
    operator delete(*v2);
    *v2 = 0LL;
    goto LABEL_13;
  }
LABEL_14:
  ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v12[0] - 12));
  return (unsigned int)v4;
}
