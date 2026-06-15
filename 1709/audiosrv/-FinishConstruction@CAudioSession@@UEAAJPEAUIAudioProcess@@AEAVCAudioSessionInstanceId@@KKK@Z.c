/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18001A000
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800148AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800148E0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018B30 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x18001F530 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x18001F560 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002D410 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FC84 (--$emplace_back@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18005E7E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF__guid_ @ 0x18006E318 (WPP_SF__guid_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18007581C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
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
  unsigned int v6; // r15d
  struct IAudioProcess *v8; // r14
  CAudioSession *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int v13; // eax
  LPWSTR *v14; // r12
  int cchWideChar; // ebx
  LPWSTR *v16; // rbx
  int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // eax
  HRESULT v20; // eax
  unsigned int v21; // ebx
  __int64 (__fastcall *v22)(CPerStreamVolumeAudioSession *__hidden, unsigned int); // rax
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  struct _TP_TIMER *(__fastcall *v27)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  struct _TP_TIMER *Timer; // rax
  const char *v29; // r9
  struct _TP_WORK *(__fastcall *v30)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  struct _TP_WORK *Work; // rax
  const char *v32; // r9
  const char *v33; // r9
  __int64 result; // rax
  ATL::CAtlException *v35; // rbx
  ATL::CAtlException *v36; // rbx
  unsigned int lpWideCharStr; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+30h] [rbp-68h]
  _QWORD v40[2]; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v41; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v42; // [rsp+50h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-40h] BYREF
  char v44; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v40[1] = -2LL;
  v6 = a4;
  v8 = a2;
  v9 = this;
  try
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        51,
        (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        *((_QWORD *)a3 + 9),
        a4);
    }
    v40[0] = v8;
    if ( v8 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 8LL))(v8);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
      (char *)v9 + 840,
      v40);
    if ( v40[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 16LL))(v40[0]);
    v10 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)v9 + 720), a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x91F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v10,
        lpWideCharStr);
      return v11;
    }
    v12 = *((_QWORD *)v9 + 99);
    v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 40LL))(v8);
    *((_QWORD *)v9 + 124) = v12;
    *((_DWORD *)v9 + 250) = v13;
    *((_BYTE *)v9 + 302) = v6 & 1;
    if ( (v6 & 4) != 0 )
    {
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (__int64 *)v9 + 40,
          (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
          0x28u);
      }
      catch ( ATL::CAtlException *v41 )
      {
        v35 = v41;
        if ( *(_DWORD *)v41 == -1073741571 )
          _o__resetstkoflw();
        v38 = *(_DWORD *)v35;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x92E,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v38,
            lpWideCharStr);
          return (unsigned int)v38;
        }
        v9 = this;
        v6 = a4;
        v8 = a2;
      }
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (__int64 *)v9 + 41,
          (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
          0x28u);
      }
      catch ( ATL::CAtlException *v42 )
      {
        v36 = v42;
        if ( *(_DWORD *)v42 == -1073741571 )
          _o__resetstkoflw();
        v39 = *(_DWORD *)v36;
        if ( v39 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x931,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v39,
            lpWideCharStr);
          return (unsigned int)v39;
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
      v14 = (LPWSTR *)((char *)v9 + 320);
      cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      if ( cchWideChar > 0 )
      {
        if ( ((1 - *((_DWORD *)*v14 - 2)) | (*((_DWORD *)*v14 - 3) - cchWideChar)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)v9 + 40, cchWideChar);
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, *v14, cchWideChar);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)v9 + 40, cchWideChar);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)v9 + 40);
      }
      v16 = (LPWSTR *)((char *)v9 + 328);
      v17 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      if ( v17 > 0 )
      {
        if ( ((1 - *((_DWORD *)*v16 - 2)) | (*((_DWORD *)*v16 - 3) - v17)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)v9 + 41, v17);
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, *v16, v17);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)v9 + 41, v17);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)v9 + 41);
      }
    }
    *((_DWORD *)v9 + 136) = (v6 >> 5) & 1;
    *((_DWORD *)v9 + 76) = a5;
    *((_DWORD *)v9 + 77) = v6;
    *((_DWORD *)v9 + 69) = a6;
    v18 = UuidCreate((UUID *)((char *)v9 + 284));
    if ( v18 )
    {
      result = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x945,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v18,
                 lpWideCharStr);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          52LL,
          &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          (char *)v9 + 284);
      }
      v19 = UuidCreate((UUID *)v9 + 21);
      if ( v19 )
      {
        result = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x948,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                   (const char *)v19,
                   lpWideCharStr);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            53LL,
            &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
            (char *)v9 + 336);
        }
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 864);
        v44 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        *((_DWORD *)v9 + 226) = 1065353216;
        if ( v44 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v44 = 0;
        }
        v20 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v9 + 69);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x950,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v20,
            lpWideCharStr);
          result = v21;
        }
        else
        {
          v22 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, unsigned int))(*(_QWORD *)v9 + 200LL);
          if ( v22 == CPerStreamVolumeAudioSession::CompleteConstruction )
            v23 = CPerStreamVolumeAudioSession::CompleteConstruction(v9, v6);
          else
            v23 = v22(v9, v6);
          v24 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x952,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v23,
              lpWideCharStr);
            result = v24;
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v8 + 24LL))(v8, v9);
            v26 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x955,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                (const char *)(unsigned int)v25,
                lpWideCharStr);
              result = v26;
            }
            else
            {
              v27 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
              if ( v27 == CAudioThreadPool::CreateTimer )
                Timer = CAudioThreadPool::CreateTimer(
                          ThreadPool,
                          (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
                          v9);
              else
                Timer = v27(
                          ThreadPool,
                          (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
                          v9);
              *((_QWORD *)v9 + 83) = Timer;
              if ( Timer )
              {
                v30 = *(struct _TP_WORK *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
                if ( v30 == CAudioThreadPool::CreateWork )
                  Work = CAudioThreadPool::CreateWork(
                           ThreadPool,
                           (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
                           v9);
                else
                  Work = v30(
                           ThreadPool,
                           (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
                           v9);
                *((_QWORD *)v9 + 84) = Work;
                if ( Work )
                {
                  CAudioSession::StartInactiveTimer((struct _TP_TIMER **)v9);
                  result = 0LL;
                }
                else
                {
                  result = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0x95C,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                             v32);
                }
              }
              else
              {
                result = wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x959,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v29);
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
                           (void *)0x965,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v33);
  }
  return result;
}
