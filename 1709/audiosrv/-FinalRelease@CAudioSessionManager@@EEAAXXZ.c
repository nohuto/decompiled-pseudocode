/*
 * XREFs of ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180079880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180031A6C (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800712B8 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x180079290 (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18007A8B0 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManager::FinalRelease(CAudioSessionManager *this)
{
  CAudioSessionManager *v1; // rbx
  int v2; // edi
  __int64 StartPosition; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  CAudioSession **v6; // rax
  _QWORD *v7; // rax
  ATL::CAtlException *v8; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v10; // [rsp+38h] [rbp-40h]
  void *v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
  }
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)v1 + 7);
    if ( !StartPosition )
      break;
    v5 = *(_QWORD *)(StartPosition + 80);
    v16 = v5;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      v4,
      StartPosition);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 184LL))(v5, (__int64)v1 - 8);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v5 + 184LL))(
      v5,
      g_PolicyEventsHandler);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v5 + 184LL))(
      v5,
      g_TelephonyControlEventsHandler);
    try
    {
      ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v11, &v16);
    }
    catch ( ATL::CAtlException *v8 )
    {
      if ( *(_DWORD *)v8 == -1073741571 )
        _o__resetstkoflw();
      v2 = 0;
      v1 = this;
      continue;
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v2 < (int)v12 )
  {
    v6 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v11, v2);
    CAudioSession::ForceExpire(*v6);
    v7 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v11, v2);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
    ++v2;
  }
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v11);
}
