/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800144B0 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18001DC20 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001FB34 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800232A8 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180024250 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180024280 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF__guid_ @ 0x1800888A8 (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r14d
  CAudioSession *v9; // rdi
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  RPC_STATUS v13; // eax
  RPC_STATUS v14; // eax
  __int64 (__fastcall *v15)(CPerStreamVolumeAudioSession *__hidden, unsigned int); // rax
  int v16; // eax
  struct _TP_TIMER *(__fastcall *v17)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  struct _TP_TIMER *Timer; // rax
  struct _TP_WORK *(__fastcall *v19)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  struct _TP_WORK *Work; // rax
  ATL::CAtlException *v22; // rbx
  ATL::CAtlException *v23; // rbx
  CVolumeStrip *v24; // rcx
  __int64 v25; // rdx
  signed int LastError; // eax
  signed int v27; // eax
  ATL::CAtlException *v28; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v29; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v31; // [rsp+50h] [rbp-38h]
  int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+98h] [rbp+10h]

  v6 = a4;
  v9 = this;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      53,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((_QWORD *)a3 + 9),
      a4);
  }
  *((_QWORD *)v9 + 109) = a2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)v9 + 792), a3);
  if ( v10 < 0 )
    goto LABEL_67;
  v11 = *((_QWORD *)v9 + 108);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 109) + 40LL))(*((_QWORD *)v9 + 109));
  *((_QWORD *)v9 + 126) = v11;
  *((_DWORD *)v9 + 254) = v12;
  *((_BYTE *)v9 + 374) = v6 & 1;
  if ( (v6 & 4) != 0 )
  {
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (char *)v9 + 392,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
        40LL);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v22 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _o__resetstkoflw();
      v33 = *(_DWORD *)v22;
      v10 = *(_DWORD *)v22;
      if ( v33 < 0 )
        goto LABEL_67;
      v9 = this;
      v6 = a4;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (char *)v9 + 400,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
        40LL);
    }
    catch ( ATL::CAtlException *v29 )
    {
      v23 = v29;
      if ( *(_DWORD *)v29 == -1073741571 )
        _o__resetstkoflw();
      v34 = *(_DWORD *)v23;
      v10 = *(_DWORD *)v23;
      if ( v34 < 0 )
        goto LABEL_67;
      v9 = this;
      v6 = a4;
    }
    *((_BYTE *)v9 + 373) = 1;
    *((_DWORD *)v9 + 96) = 5000;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)v9 + 392);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)v9 + 400);
  }
  *((_DWORD *)v9 + 154) = (v6 >> 5) & 1;
  *((_DWORD *)v9 + 94) = a5;
  *((_DWORD *)v9 + 95) = v6;
  *((_DWORD *)v9 + 87) = a6;
  v13 = UuidCreate((UUID *)((char *)v9 + 356));
  v10 = v13;
  if ( v13 )
  {
    if ( v13 > 0 )
      v10 = (unsigned __int16)v13 | 0x80070000;
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_32;
    }
    v25 = 54LL;
LABEL_66:
    WPP_SF_d(*((_QWORD *)v24 + 2), v25, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, (unsigned int)v10);
    goto LABEL_32;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      55LL,
      &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      (char *)v9 + 356);
  }
  v14 = UuidCreate((UUID *)((char *)v9 + 408));
  v10 = v14;
  if ( v14 )
  {
    if ( v14 > 0 )
      v10 = (unsigned __int16)v14 | 0x80070000;
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_32;
    }
    v25 = 56LL;
    goto LABEL_66;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      57LL,
      &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      (char *)v9 + 408);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 880);
  v31 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *((_DWORD *)v9 + 230) = 1065353216;
  if ( v31 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v31 = 0;
  }
  v10 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v9 + 78);
  if ( v10 < 0 )
    goto LABEL_67;
  v15 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, unsigned int))(*(_QWORD *)v9 + 208LL);
  v16 = v15 == CPerStreamVolumeAudioSession::CompleteConstruction
      ? CPerStreamVolumeAudioSession::CompleteConstruction(v9, v6)
      : v15(v9, v6);
  v10 = v16;
  if ( v16 < 0 )
    goto LABEL_67;
  v10 = (*(__int64 (__fastcall **)(_QWORD, CAudioSession *))(**((_QWORD **)v9 + 109) + 24LL))(*((_QWORD *)v9 + 109), v9);
  if ( v10 < 0 )
    goto LABEL_67;
  v17 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
  if ( v17 == CAudioThreadPool::CreateTimer )
    Timer = CAudioThreadPool::CreateTimer(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              v9);
  else
    Timer = v17(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              v9);
  *((_QWORD *)v9 + 92) = Timer;
  if ( !Timer )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_32;
    }
    v25 = 59LL;
    goto LABEL_66;
  }
  v19 = *(struct _TP_WORK *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
  if ( v19 == CAudioThreadPool::CreateWork )
    Work = CAudioThreadPool::CreateWork(
             ThreadPool,
             (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
             v9);
  else
    Work = v19(
             ThreadPool,
             (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::StateCheckExpiredCallback,
             v9);
  *((_QWORD *)v9 + 93) = Work;
  if ( Work )
  {
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)v9);
    goto LABEL_32;
  }
  v27 = GetLastError();
  v10 = v27;
  if ( v27 > 0 )
    v10 = (unsigned __int16)v27 | 0x80070000;
  v24 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v25 = 60LL;
    goto LABEL_66;
  }
LABEL_32:
  if ( v10 < 0 )
LABEL_67:
    AudSrvTraceLoggingErrorHelper("CAudioSession::FinishConstruction", 0x995u, v10);
  return (unsigned int)v10;
}
