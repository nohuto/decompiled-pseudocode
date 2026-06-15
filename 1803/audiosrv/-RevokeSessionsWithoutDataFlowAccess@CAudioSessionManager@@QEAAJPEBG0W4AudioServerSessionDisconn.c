/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800B3574
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800B51FC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A6C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800AB208 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800B1A48 (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  const unsigned __int16 *v5; // rdi
  const unsigned __int16 *v6; // rsi
  __int64 *v7; // r12
  CAudioSession **NextValue; // rax
  __int64 v9; // rdx
  CAudioSession *v10; // r13
  int OwningProcesses; // eax
  _QWORD *v12; // rdi
  __int64 *k; // rbx
  __int64 *v14; // rsi
  _QWORD *v15; // r14
  __int64 v16; // rdi
  unsigned int v17; // ebx
  const WCHAR *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 *j; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v25; // [rsp+30h] [rbp-20h]
  void *v26[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 i; // [rsp+90h] [rbp+40h] BYREF
  const unsigned __int16 *v30; // [rsp+98h] [rbp+48h]
  const unsigned __int16 *v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v30 = a2;
  v5 = a3;
  v6 = a2;
  v7 = (__int64 *)(a1 + 64);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(v7);
        i;
        v5 = v31 )
  {
    NextValue = (CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                    (__int64)v7,
                                    &i);
    v10 = *NextValue;
    if ( *NextValue && (unsigned int)CAudioSession::MatchesParameters(*NextValue, v9, v6, v5) )
    {
      *(_OWORD *)v26 = 0LL;
      v27 = 0LL;
      OwningProcesses = CAudioSession::GetOwningProcesses((__int64)v10, (__int64)v26);
      if ( OwningProcesses >= 0 )
      {
        v14 = (__int64 *)v26[0];
        v15 = v26[0];
        if ( v26[0] != v26[1] )
        {
          while ( 1 )
          {
            a5 = 0;
            v16 = *v15;
            v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 40LL))(*v15);
            v18 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
            v19 = CAudioSessionManager::CapabilityAccessCheck(v18, v17, &a5);
            if ( v19 < 0 )
              break;
            if ( !a5 )
              goto LABEL_15;
            if ( ++v15 == v26[1] )
              goto LABEL_17;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1875LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v19);
LABEL_15:
          LOBYTE(v20) = 1;
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*((_QWORD *)v10 + 2) + 32LL))(
                  (__int64)v10 + 16,
                  0LL,
                  v20);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1879LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v21);
        }
LABEL_17:
        if ( v14 )
        {
          for ( j = v14; j != v26[1]; ++j )
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
          std::_Deallocate(v14, (v27 - (__int64)v14) >> 3, 8uLL);
        }
        v6 = v30;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1866LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)OwningProcesses);
        v12 = v26[0];
        if ( v26[0] )
        {
          for ( k = (__int64 *)v26[0]; k != v26[1]; ++k )
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(k);
          std::_Deallocate(v12, (v27 - (__int64)v12) >> 3, 8uLL);
        }
      }
    }
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
