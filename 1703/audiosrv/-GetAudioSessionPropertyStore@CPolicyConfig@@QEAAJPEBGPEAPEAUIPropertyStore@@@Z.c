/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180031CCC
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031108 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x1800318C0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x1800318F8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180031A04 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAudioSessionStore@@PEAV312@1@Z @ 0x180031E48 (-NewNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        unsigned __int16 *a2,
        struct IPropertyStore **a3)
{
  struct IPropertyStore **v3; // r12
  CPolicyConfig *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // r15
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // rax
  ATL::CAtlException *v16; // [rsp+30h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v18; // [rsp+40h] [rbp-38h]
  _QWORD *v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)v5 + 11);
  v7 = (__int64 *)((char *)v5 + 72);
  v8 = (_QWORD *)*((_QWORD *)v5 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v11 = (_QWORD *)v8[2];
      v8 = (_QWORD *)*v8;
      v20 = v11;
      if ( CAudioSessionStore::IsEqual((PCNZWCH *)v11, a2) )
        break;
      if ( !--v6 )
        goto LABEL_2;
    }
    v13 = 0;
  }
  else
  {
LABEL_2:
    v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *v9 = &CAudioSessionStore::`vftable';
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v9);
      }
      *((_DWORD *)v10 + 2) = 1;
      *((_DWORD *)v10 + 10) = 0;
      v10[2] = 0LL;
      v10[3] = 0LL;
      v10[4] = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = v10;
    v20 = v10;
    if ( !v10 )
    {
      v13 = -2147024882;
      goto LABEL_22;
    }
    v13 = CAudioSessionStore::Initialize((CAudioSessionStore *)v10, (char *)a2);
    if ( v13 < 0 )
      goto LABEL_31;
    try
    {
      v14 = ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::NewNode(v7, &v20, v12, *v7);
      if ( *v7 )
        *(_QWORD *)(*v7 + 8) = v14;
      else
        v7[1] = v14;
      *v7 = v14;
    }
    catch ( ATL::CAtlException *v16 )
    {
      v3 = a3;
      v13 = *(_DWORD *)v16;
      v11 = v20;
    }
    if ( v13 < 0 )
    {
LABEL_31:
      CAudioSessionStore::Release((CAudioSessionStore *)v10);
      v20 = 0LL;
      goto LABEL_22;
    }
  }
  if ( v11 )
  {
    *v3 = (struct IPropertyStore *)v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v20 + 10);
    goto LABEL_17;
  }
LABEL_22:
  *v3 = 0LL;
LABEL_17:
  if ( v13 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetAudioSessionPropertyStore", 0x1286u, v13);
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v13;
}
