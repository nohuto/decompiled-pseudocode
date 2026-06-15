/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180042990
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041CFC (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180042580 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x1800425B8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x1800426C8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAudioSessionStore@@PEAV312@1@Z @ 0x180042B5C (-NewNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        unsigned __int16 *a2,
        struct IPropertyStore **a3)
{
  struct IPropertyStore **v3; // r12
  CPolicyConfig *v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // r15
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  CAudioSessionStore *v11; // r14
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rax
  CAudioSessionStore *v16; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v17; // [rsp+30h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v19; // [rsp+40h] [rbp-38h]
  _QWORD *v21; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v19 = 0;
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
      v10 = (_QWORD *)v8[2];
      v8 = (_QWORD *)*v8;
      v21 = v10;
      if ( CAudioSessionStore::IsEqual((PCNZWCH *)v10, a2) )
        break;
      if ( !--v6 )
        goto LABEL_2;
    }
    v12 = 0;
  }
  else
  {
LABEL_2:
    v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *v9 = &CAudioSessionStore::`vftable';
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v9);
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
    v11 = (CAudioSessionStore *)v10;
    v16 = (CAudioSessionStore *)v10;
    v21 = v10;
    if ( !v10 )
    {
      v12 = -2147024882;
      goto LABEL_20;
    }
    v12 = CAudioSessionStore::Initialize((CAudioSessionStore *)v10, (char *)a2);
    if ( v12 < 0 )
      goto LABEL_31;
    try
    {
      v14 = ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::NewNode(v7, &v21, v13, *v7);
      if ( *v7 )
        *(_QWORD *)(*v7 + 8) = v14;
      else
        v7[1] = v14;
      *v7 = v14;
    }
    catch ( ATL::CAtlException *v17 )
    {
      v3 = a3;
      v12 = *(_DWORD *)v17;
      v10 = v21;
      v11 = v16;
    }
    if ( v12 < 0 )
    {
LABEL_31:
      v21 = 0LL;
      CAudioSessionStore::Release(v11);
      goto LABEL_20;
    }
  }
  if ( v10 )
  {
    *v3 = (struct IPropertyStore *)v10;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v21 + 10);
    goto LABEL_15;
  }
LABEL_20:
  *v3 = 0LL;
LABEL_15:
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetAudioSessionPropertyStore", 0x128Bu, v12);
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v12;
}
