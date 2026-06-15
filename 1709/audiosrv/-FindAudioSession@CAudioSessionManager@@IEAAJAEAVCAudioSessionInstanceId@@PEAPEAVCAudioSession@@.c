/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     AudioSessionManagerGetExistingSession @ 0x18007AF90 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x18007BD80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180014C00 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x180017774 (--8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800182C0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18005B664 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SS @ 0x180078E1C (WPP_SF_SS.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  unsigned int v3; // esi
  char *v4; // r15
  struct CAudioSession *v5; // r14
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rcx
  unsigned __int16 v13; // ax
  unsigned int i; // edi
  ATL::CAtlStringMgr **v16; // rdx
  void (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 Node; // rax
  volatile signed __int32 *v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v24; // [rsp+48h] [rbp-30h]
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (char *)this + 64;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v24 = 0;
  v5 = 0LL;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v8 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v21 = (volatile signed __int32 *)((char *)NilString + 24);
  if ( (int)CAudioSessionInstanceId::ToString(a2, &v21) < 0 )
  {
    v16 = (ATL::CAtlStringMgr **)(v21 - 6);
    if ( _InterlockedExchangeAdd(v21 - 2, 0xFFFFFFFF) <= 1 )
    {
      v17 = *(void (**)(void))(*(_QWORD *)*v16 + 8LL);
      if ( (char *)v17 == (char *)ATL::CAtlStringMgr::Free )
        ATL::CAtlStringMgr::Free(*v16, (struct ATL::CStringData *)v16);
      else
        v17();
    }
    i = 0;
  }
  else
  {
    v10 = v21;
    v11 = *((int *)v21 - 4);
    if ( (int)((*((_DWORD *)v21 - 3) - v11) | (1 - *((_DWORD *)v21 - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v21, v11);
      v10 = v21;
    }
    _o__wcsupr_s(v10, (int)v11 + 1);
    if ( (int)v11 < 0 || (int)v11 > *((_DWORD *)v10 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v10 - 4) = v11;
    *((_WORD *)v10 + v11) = 0;
    v12 = v10;
    v13 = *(_WORD *)v10;
    for ( i = 0; *(_WORD *)v12; v13 = *(_WORD *)v12 )
    {
      v12 = (volatile signed __int32 *)((char *)v12 + 2);
      i = v13 + 33 * i;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v10 - 6));
  }
  if ( *(_QWORD *)v4 )
  {
    v18 = *((_DWORD *)v4 + 4) == 17 ? i % 0x11 : i % *((_DWORD *)v4 + 4);
    v19 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v18);
    if ( v19 )
    {
      while ( *(_DWORD *)(v19 + 96) != i || !(unsigned __int8)CAudioSessionInstanceId::operator==(v19, a2) )
      {
        v19 = *(_QWORD *)(v19 + 88);
        if ( !v19 )
          goto LABEL_12;
      }
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
               (__int64)v4,
               (__int64)a2,
               &v26,
               &v25,
               &v22);
      if ( !Node )
        Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                 v4,
                 a2,
                 v26,
                 v25);
      v5 = *(struct CAudioSession **)(Node + 80);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
          0,
          *((_QWORD *)a2 + 9));
      }
      if ( v5 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
LABEL_12:
  *a3 = v5;
  if ( !v5 )
    v3 = -2147024894;
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
