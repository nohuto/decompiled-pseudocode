/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60
 * Callers:
 *     ??1?$CComObject@VCVADServer@@@ATL@@UEAA@XZ @ 0x18002AFF4 (--1-$CComObject@VCVADServer@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180017350 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001CA50 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x18002969C (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18002ACB8 (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this)
{
  CServerAudioSessionControl *v2; // rcx
  __int64 v3; // r9
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  struct CAudioStream *v5; // rdx
  __int64 (__fastcall *Blink)(struct _RTL_CRITICAL_SECTION *, struct CAudioStream *, char); // rax
  __int64 (__fastcall *v7)(struct _RTL_CRITICAL_SECTION *, struct CAudioStream *, char); // r8
  CAudioStream *v8; // rcx
  void (*v9)(void); // rax
  CAudioDGProcess *v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(CAudioSession *); // rax
  CAudioSession *v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(CAudioSessionManager *); // rax
  CAudioSessionManager *v16; // rcx
  __int64 i; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this);
  }
  std::shared_ptr<CPowerReference>::reset((char *)this + 408);
  v2 = (CServerAudioSessionControl *)*((_QWORD *)this + 20);
  if ( v2 )
    CServerAudioSessionControl::RemoveClientReference(v2);
  v3 = *((_QWORD *)this + 24);
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
        v3,
        *(_QWORD *)(v3 + 48));
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 24) + 48LL) )
    {
      if ( *((_BYTE *)this + 188) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 256LL))(*((_QWORD *)this + 21));
      v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 21);
      v7 = CAudioSession::RemoveStream;
      v5 = (struct CAudioStream *)*((_QWORD *)this + 24);
      Blink = (__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, struct CAudioStream *, char))v4->DebugInfo[5].ProcessLocksList.Blink;
      LOBYTE(v7) = 1;
      if ( Blink == CAudioSession::RemoveStream )
        CAudioSession::RemoveStream(v4, v5, 1);
      else
        Blink(v4, v5, (char)v7);
    }
    v8 = (CAudioStream *)*((_QWORD *)this + 24);
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 64LL);
    if ( (char *)v9 == (char *)CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v8);
    else
      v9();
    *((_QWORD *)this + 24) = 0LL;
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
      *((_QWORD *)this + 21));
    v10 = WPP_GLOBAL_Control;
  }
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 16LL);
    v13 = (CAudioSession *)*((_QWORD *)this + 21);
    if ( v12 == CAudioSession::Release )
      CAudioSession::Release(v13);
    else
      v12(v13);
    *((_QWORD *)this + 21) = 0LL;
    v10 = WPP_GLOBAL_Control;
  }
  if ( v10 != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v10 + 7) & 0x100) != 0 && *((_BYTE *)v10 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v10 + 2), 17LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v10 + 7) & 0x100) != 0
      && *((_BYTE *)v10 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v10 + 2), 18LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, *((_QWORD *)this + 19));
      v10 = WPP_GLOBAL_Control;
    }
  }
  v14 = *((_QWORD *)this + 19);
  if ( v14 )
  {
    v15 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v14 + 16LL);
    v16 = (CAudioSessionManager *)*((_QWORD *)this + 19);
    if ( v15 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v16);
    else
      v15(v16);
    *((_QWORD *)this + 19) = 0LL;
    v10 = WPP_GLOBAL_Control;
  }
  if ( v10 != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v10 + 7) & 0x100) != 0
    && *((_BYTE *)v10 + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)v10 + 2), 19LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
  }
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = g_VADServerList; i && *(CVADServer **)(i + 16) != this; i = *(_QWORD *)i )
    ;
  if ( i )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt();
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this);
  }
}
