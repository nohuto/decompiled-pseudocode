/*
 * XREFs of ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x1800B1F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800053B8 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800A9500 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800B1698 (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800B3414 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManager::FinalRelease(CAudioSessionManager *this)
{
  CAudioSessionManager *v1; // rbx
  int v2; // edi
  __int64 StartPosition; // rax
  __int64 v4; // r14
  CAudioSession **v5; // rax
  _QWORD *v6; // rax
  ATL::CAtlException *v7; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-40h]
  void *v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+88h] [rbp+10h] BYREF

  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
  }
  v2 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition((__int64 *)v1 + 7);
    if ( !StartPosition )
      break;
    v4 = *(_QWORD *)(StartPosition + 80);
    v15 = v4;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      (char *)v1 + 56,
      StartPosition);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 192LL))(v4, (__int64)v1 - 8);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v4 + 192LL))(
      v4,
      g_PolicyEventsHandler);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v4 + 192LL))(
      v4,
      g_TelephonyControlEventsHandler);
    try
    {
      ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v10, &v15);
    }
    catch ( ATL::CAtlException *v7 )
    {
      if ( *(_DWORD *)v7 == -1073741571 )
        _o__resetstkoflw();
      v2 = 0;
      v1 = this;
      continue;
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v2 < (int)v11 )
  {
    v5 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v10, v2);
    CAudioSession::ForceExpire(*v5);
    v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v10, v2);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    ++v2;
  }
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v10);
}
