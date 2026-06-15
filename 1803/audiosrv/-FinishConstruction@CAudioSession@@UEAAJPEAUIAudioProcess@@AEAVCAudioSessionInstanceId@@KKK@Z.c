/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180034D70
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x180005958 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800179F4 (--$emplace_back@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180031D94 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180034298 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180035E60 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180035E80 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF__guid_ @ 0x1800A6728 (WPP_SF__guid_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  struct IAudioProcess *v8; // r14
  CAudioSession *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  HRESULT v16; // eax
  unsigned int v17; // ebx
  __int64 (__fastcall *v18)(CPerStreamVolumeAudioSession *__hidden, unsigned int); // rax
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  struct _TP_TIMER *(__fastcall *v23)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  struct _TP_TIMER *Timer; // rax
  const char *v25; // r9
  struct _TP_WORK *(__fastcall *v26)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  struct _TP_WORK *Work; // rax
  const char *v28; // r9
  const char *v29; // r9
  __int64 result; // rax
  ATL::CAtlException *v31; // rbx
  ATL::CAtlException *v32; // rbx
  unsigned int v33; // [rsp+20h] [rbp-78h]
  int v34; // [rsp+30h] [rbp-68h]
  int v35; // [rsp+30h] [rbp-68h]
  char *v36[2]; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v37; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v38; // [rsp+50h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-40h] BYREF
  char v40; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v36[1] = (char *)-2LL;
  v6 = a4;
  v8 = a2;
  v9 = this;
  try
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41,
        (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)a3 + 9),
        a4);
    }
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v36, (__int64)v8);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
      (char **)v9 + 97,
      v36);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v36);
    *((_BYTE *)v9 + 800) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 96LL))(v8) != 0;
    v10 = CAudioSessionInstanceId::Copy((const void **)v9 + 82, (char **)a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F5,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v10,
        v33);
      return v11;
    }
    v12 = *((_QWORD *)v9 + 91);
    v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 40LL))(v8);
    *((_QWORD *)v9 + 117) = v12;
    *((_DWORD *)v9 + 236) = v13;
    *((_BYTE *)v9 + 302) = v6 & 1;
    if ( (v6 & 4) != 0 )
    {
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (const void **)v9 + 40,
          (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
          40LL);
      }
      catch ( ATL::CAtlException *v37 )
      {
        v31 = v37;
        if ( *(_DWORD *)v37 == -1073741571 )
          _o__resetstkoflw();
        v34 = *(_DWORD *)v31;
        if ( v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x804,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v34,
            v33);
          return (unsigned int)v34;
        }
        v9 = this;
        v6 = a4;
        v8 = a2;
      }
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (const void **)v9 + 41,
          (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
          40LL);
      }
      catch ( ATL::CAtlException *v38 )
      {
        v32 = v38;
        if ( *(_DWORD *)v38 == -1073741571 )
          _o__resetstkoflw();
        v35 = *(_DWORD *)v32;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x807,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v35,
            v33);
          return (unsigned int)v35;
        }
        v9 = this;
        v6 = a4;
        v8 = a2;
      }
      *((_BYTE *)v9 + 301) = 1;
      *((_DWORD *)v9 + 78) = 5000;
    }
    else
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((WCHAR **)v9 + 40);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((WCHAR **)v9 + 41);
    }
    *((_DWORD *)v9 + 120) = (v6 >> 5) & 1;
    *((_DWORD *)v9 + 76) = a5;
    *((_DWORD *)v9 + 77) = v6;
    *((_DWORD *)v9 + 69) = a6;
    v14 = UuidCreate((UUID *)((char *)v9 + 284));
    if ( v14 )
    {
      result = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x81B,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v14,
                 v33);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          42LL,
          &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          (char *)v9 + 284);
      }
      v15 = UuidCreate((UUID *)v9 + 21);
      if ( v15 )
      {
        result = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x81E,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                   (const char *)v15,
                   v33);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43LL,
            &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
            (char *)v9 + 336);
        }
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 808);
        v40 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        *((_DWORD *)v9 + 212) = 1065353216;
        if ( v40 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v40 = 0;
        }
        v16 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v9 + 61);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x826,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v16,
            v33);
          result = v17;
        }
        else
        {
          v18 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, unsigned int))(*(_QWORD *)v9 + 208LL);
          if ( v18 == CPerStreamVolumeAudioSession::CompleteConstruction )
            v19 = CPerStreamVolumeAudioSession::CompleteConstruction(v9, v6);
          else
            v19 = v18(v9, v6);
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x828,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v19,
              v33);
            result = v20;
          }
          else
          {
            v21 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v8 + 24LL))(v8, v9);
            v22 = v21;
            if ( v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x82B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                (const char *)(unsigned int)v21,
                v33);
              result = v22;
            }
            else
            {
              v23 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
              if ( v23 == CAudioThreadPool::CreateTimer )
                Timer = CAudioThreadPool::CreateTimer(
                          ThreadPool,
                          (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
                          v9);
              else
                Timer = v23(
                          ThreadPool,
                          (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
                          v9);
              *((_QWORD *)v9 + 75) = Timer;
              if ( Timer )
              {
                v26 = *(struct _TP_WORK *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
                if ( v26 == CAudioThreadPool::CreateWork )
                  Work = CAudioThreadPool::CreateWork(
                           ThreadPool,
                           (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
                           v9);
                else
                  Work = v26(
                           ThreadPool,
                           (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
                           v9);
                *((_QWORD *)v9 + 76) = Work;
                if ( Work )
                {
                  CAudioSession::StartInactiveTimer((struct _TP_TIMER **)v9);
                  result = 0LL;
                }
                else
                {
                  result = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0x832,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                             v28);
                }
              }
              else
              {
                result = wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x82F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v25);
              }
            }
          }
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x83B,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v29);
  }
  return result;
}
