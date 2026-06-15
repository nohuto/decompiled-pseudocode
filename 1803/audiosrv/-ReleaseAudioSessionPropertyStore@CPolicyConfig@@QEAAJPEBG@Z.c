/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180042898
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041C14 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180042580 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x1800425B8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180042B00 (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig *v2; // rbx
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 **v6; // rdi
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]

  v2 = g_PolicyConfig;
  v4 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((_QWORD *)v2 + 11);
  v6 = (__int64 **)((char *)v2 + 72);
  v7 = (__int64 *)*((_QWORD *)v2 + 9);
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = v7;
      if ( !v7 )
        ATL::AtlThrowImpl(-2147467259);
      v9 = v7[2];
      v7 = (__int64 *)*v7;
      if ( CAudioSessionStore::IsEqual((PCNZWCH *)v9, a2) )
        break;
      if ( !--v5 )
        goto LABEL_17;
    }
    v4 = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 40), 0xFFFFFFFF) == 1 )
    {
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (__int64 *)*v8;
      if ( v8 == *v6 )
        *v6 = v10;
      else
        *(_QWORD *)v8[1] = v10;
      v11 = (__int64 *)v8[1];
      if ( v8 == v6[1] )
        v6[1] = v11;
      else
        *(_QWORD *)(*v8 + 8) = v11;
      ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode(v6, v8);
      CAudioSessionStore::Release((CAudioSessionStore *)v9);
    }
  }
  else
  {
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ReleaseAudioSessionPropertyStore", 0x12CFu, -2147023728);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
