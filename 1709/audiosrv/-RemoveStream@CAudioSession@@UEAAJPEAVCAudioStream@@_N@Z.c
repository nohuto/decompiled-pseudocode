/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180018C64 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001B590 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001CA50 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180030184 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dq @ 0x1800770B0 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::RemoveStream(struct _RTL_CRITICAL_SECTION *this, struct CAudioStream *a2, char a3)
{
  unsigned __int64 v3; // rsi
  char v5; // r15
  CAudioStream *v6; // rdi
  struct IAudioStreamInfo *v9; // rdx
  void (__fastcall *v10)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *); // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  HANDLE *p_OwningThread; // r14
  __int64 (__fastcall *Flink)(CAudioSession *); // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  struct _RTL_CRITICAL_SECTION *v19; // rcx
  unsigned int (__fastcall *v20)(CAudioStream *__hidden); // rax
  LONG *p_LockCount; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v24; // [rsp+38h] [rbp-28h]
  LPCRITICAL_SECTION v25; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+48h] [rbp-18h]
  CAudioStream *v27; // [rsp+50h] [rbp-10h]
  CAudioStream *v28; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 74LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this, a2);
  }
  if ( g_SpatialAudioResourceManager )
  {
    v9 = (struct IAudioStreamInfo *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
    v10 = *(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)g_SpatialAudioResourceManager + 32LL);
    if ( v10 == Sarm::CSpatialAudioResourceManager::OnDestroyStream )
      Sarm::CSpatialAudioResourceManager::OnDestroyStream(g_SpatialAudioResourceManager, v9);
    else
      v10(g_SpatialAudioResourceManager, v9);
  }
  LOBYTE(v26) = 0;
  v25 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v25);
  v13 = 0LL;
  if ( this[2].LockSemaphore )
  {
    p_OwningThread = &this[2].OwningThread;
    while ( 1 )
    {
      if ( (HANDLE)v3 >= this[2].LockSemaphore )
        ATL::AtlThrowImpl(-2147024809);
      if ( *((struct CAudioStream **)*p_OwningThread + v3) == a2 )
        break;
      v13 = (unsigned int)(v13 + 1);
      v3 = (unsigned int)v13;
      if ( (HANDLE)(unsigned int)v13 >= this[2].LockSemaphore )
      {
        v3 = 0LL;
        goto LABEL_17;
      }
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (HANDLE)v3 >= this[2].LockSemaphore )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 75LL, v12, v13, *((_QWORD *)*p_OwningThread + v3));
    }
    v5 = 1;
    if ( (HANDLE)v3 >= this[2].LockSemaphore )
      ATL::AtlThrowImpl(-2147024809);
    v6 = (CAudioStream *)*((_QWORD *)*p_OwningThread + v3);
    v28 = v6;
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(&this[2].OwningThread, v3, v12, v13);
    v3 = 0LL;
    lpCriticalSection = this + 5;
    v24 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&this[6], &v28);
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    --this[2].LockCount;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        76LL,
        &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (unsigned int)this[2].LockCount);
    }
  }
LABEL_17:
  if ( (_BYTE)v26 )
    LeaveCriticalSection(v25);
  if ( !v5 )
  {
    v24 = 0;
    lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v13 = 0LL;
    if ( this[4].OwningThread )
    {
      p_LockCount = &this[4].LockCount;
      while ( *(struct CAudioStream **)(*(_QWORD *)p_LockCount + 8 * v3) != a2 )
      {
        v13 = (unsigned int)(v13 + 1);
        v3 = (unsigned int)v13;
        if ( (HANDLE)(unsigned int)v13 >= this[4].OwningThread )
          goto LABEL_63;
      }
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( (HANDLE)v3 >= this[4].OwningThread )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, v12, v13, *(_QWORD *)(*(_QWORD *)p_LockCount + 8 * v3));
      }
      if ( (HANDLE)v3 >= this[4].OwningThread )
        ATL::AtlThrowImpl(-2147024809);
      v6 = *(CAudioStream **)(*(_QWORD *)p_LockCount + 8 * v3);
      v28 = v6;
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(&this[4].LockCount, v3, v12, v13);
      v25 = this + 5;
      LOBYTE(v26) = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v25);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&this[6], &v28);
      if ( (_BYTE)v26 )
        LeaveCriticalSection(v25);
    }
LABEL_63:
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v6 )
  {
    if ( a3 )
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, __int64, __int64))this->DebugInfo->CriticalSection)(
        this,
        v11,
        v12,
        v13);
      v26 = this;
      v25 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v27 = v6;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        this + 14,
        (void (__fastcall ***)(_QWORD, CAudioSessionManager **))&v25);
      Flink = (__int64 (__fastcall *)(CAudioSession *))this->DebugInfo->ProcessLocksList.Flink;
      if ( Flink == CAudioSession::Release )
        CAudioSession::Release((CAudioSession *)this);
      else
        Flink((CAudioSession *)this);
    }
    CAudioStream::CloseAudioHandle(v6);
    *((_QWORD *)v6 + 8) = 0LL;
    v25 = this + 5;
    LOBYTE(v26) = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v25);
    v18 = 0LL;
    if ( *(_QWORD *)&this[6].LockCount )
    {
      v16 = 0LL;
      v19 = this + 6;
      while ( *((CAudioStream **)&v19->DebugInfo->Type + v16) != v6 )
      {
        v18 = (unsigned int)(v18 + 1);
        v16 = (unsigned int)v18;
        if ( (unsigned __int64)(unsigned int)v18 >= *(_QWORD *)&this[6].LockCount )
          goto LABEL_28;
      }
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v19, v16, v18, v17);
    }
LABEL_28:
    v20 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v6 + 64LL);
    if ( v20 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v6);
    else
      ((void (__fastcall *)(CAudioStream *, __int64, __int64))v20)(v6, v16, v18);
    if ( (_BYTE)v26 )
      LeaveCriticalSection(v25);
    CAudioSession::PostStateCheckExpirationWork((struct _TP_WORK **)this);
  }
  return 0LL;
}
