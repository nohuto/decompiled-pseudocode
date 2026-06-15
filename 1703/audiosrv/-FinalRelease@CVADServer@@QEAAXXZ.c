/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180020360 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180020EB0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x1800240B8 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this)
{
  std::_Ref_count_base *v2; // rcx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rax
  unsigned int (__fastcall *v5)(CServerAudioSessionControl *__hidden); // rax
  __int64 v6; // r9
  CVolumeStrip *v7; // rcx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(CAudioSession *); // rax
  CAudioSession *v10; // rcx
  __int64 v11; // rdx
  unsigned int (__fastcall *v12)(CAudioSessionManager *__hidden); // rax
  CAudioSessionManager *v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  CAudioSession *v16; // rcx
  struct CAudioStream *v17; // rdx
  __int64 (__fastcall *v18)(CAudioSession *, struct CAudioStream *, char, char); // rax
  CAudioStream *v19; // rcx
  void (*v20)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+38h] [rbp-20h]
  std::_Ref_count_base *v23; // [rsp+48h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, this);
  }
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  v23 = v2;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 6, 0xFFFFFFFF) == 1 )
    {
      v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v3 + 104LL);
      if ( v4 == CServerAudioSessionControl::Dispose )
        CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)v3);
      else
        v4((CServerAudioSessionControl *)v3);
    }
    v5 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v3 + 16LL);
    if ( v5 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v3);
    else
      v5((CServerAudioSessionControl *)v3);
  }
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
        v6,
        *(_QWORD *)(v6 + 48));
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 24) + 48LL) )
    {
      if ( *((_BYTE *)this + 188) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 264LL))(*((_QWORD *)this + 21));
      v16 = (CAudioSession *)*((_QWORD *)this + 21);
      v17 = (struct CAudioStream *)*((_QWORD *)this + 24);
      v18 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, char, char))(*(_QWORD *)v16 + 272LL);
      if ( v18 == CAudioSession::RemoveStream )
        CAudioSession::RemoveStream(v16, v17, 1, 1);
      else
        ((void (__fastcall *)(CAudioSession *, struct CAudioStream *, __int64))v18)(v16, v17, 1LL);
    }
    v19 = (CAudioStream *)*((_QWORD *)this + 24);
    v20 = *(void (**)(void))(*(_QWORD *)v19 + 72LL);
    if ( (char *)v20 == (char *)CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v19);
    else
      v20();
    *((_QWORD *)this + 24) = 0LL;
  }
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
      *((_QWORD *)this + 21));
    v7 = WPP_GLOBAL_Control;
  }
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v8 + 16LL);
    v10 = (CAudioSession *)*((_QWORD *)this + 21);
    if ( v9 == CAudioSession::Release )
      CAudioSession::Release(v10);
    else
      v9(v10);
    *((_QWORD *)this + 21) = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CVolumeStrip *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v7 + 2), 17LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
      v7 = WPP_GLOBAL_Control;
    }
    if ( v7 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v7 + 2), 18LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, *((_QWORD *)this + 19));
      v7 = WPP_GLOBAL_Control;
    }
  }
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    v12 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v11 + 16LL);
    v13 = (CAudioSessionManager *)*((_QWORD *)this + 19);
    if ( v12 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v13);
    else
      v12(v13);
    *((_QWORD *)this + 19) = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 5u )
    WPP_SF_(*((_QWORD *)v7 + 2), 19LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
  v22 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = g_VADServerList;
  if ( g_VADServerList )
  {
    while ( *(CVADServer **)(v14 + 16) != this )
    {
      v14 = *(_QWORD *)v14;
      if ( !v14 )
        goto LABEL_48;
    }
    if ( v14 == g_VADServerList )
      g_VADServerList = *(_QWORD *)v14;
    else
      **(_QWORD **)(v14 + 8) = *(_QWORD *)v14;
    if ( v14 == qword_18012AE68 )
      qword_18012AE68 = *(_QWORD *)(v14 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)v14 = qword_18012AE80;
    v15 = qword_18012AE70-- == 1;
    qword_18012AE80 = v14;
    if ( v15 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
  }
LABEL_48:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, this);
  }
}
