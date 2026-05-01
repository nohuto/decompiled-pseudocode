/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1801A5518
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180199AE0 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A4018 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180199D34 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1801A432C (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1801A746C (-StartActivity@OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A82CC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A8AD4 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A8BE4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801A9804 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB2A0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKe.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2)
{
  unsigned int ValueW; // eax
  unsigned int v5; // eax
  char v6; // al
  int IsReady; // eax
  unsigned int v8; // edi
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  RTL_SRWLOCK *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int pdwType; // [rsp+28h] [rbp-E0h]
  unsigned int pdwTypea; // [rsp+28h] [rbp-E0h]
  __int64 pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  _QWORD v27[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+88h] [rbp-80h]
  int *v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-68h] BYREF
  char v32; // [rsp+A4h] [rbp-64h]
  int v33; // [rsp+C8h] [rbp-40h] BYREF
  const char *v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  char v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  _BYTE v38[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v39; // [rsp+180h] [rbp+78h]
  __int64 v40; // [rsp+188h] [rbp+80h]
  __int64 v41; // [rsp+190h] [rbp+88h]
  __int64 v42; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v26 = -2LL;
  if ( !byte_1802BAB71 )
  {
    LODWORD(pvData) = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\TabletTip\\1.7",
               L"DisableNewKeyboardExperience",
               0x10u,
               0LL,
               &pvData,
               pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x267,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)ValueW,
        pdwType);
      goto LABEL_8;
    }
    if ( (_DWORD)pvData == 1 )
    {
      byte_1802BAB70 = 1;
    }
    else
    {
      if ( (_DWORD)pvData )
      {
LABEL_8:
        v5 = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\TabletTip\\1.7",
               L"DisableNewKeyboardExperience",
               0x10u,
               0LL,
               &pvData,
               pcbData);
        if ( v5 )
        {
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0x279,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)v5,
            pdwTypea);
        }
        else
        {
          v6 = byte_1802BAB70;
          if ( (_DWORD)pvData == 1 )
            v6 = 1;
          byte_1802BAB70 = v6;
        }
        goto LABEL_13;
      }
      byte_1802BAB70 = 0;
    }
LABEL_13:
    byte_1802BAB71 = 1;
  }
  if ( !byte_1802BAB70 )
  {
    *(_DWORD *)(a1 + 272) = 4;
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((TouchKeyboardExperienceManager **)a1);
    v8 = IsReady;
    if ( IsReady < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3A5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return v8;
    }
    v10 = 2;
    if ( a2 != 1 )
    {
      v11 = 0;
      if ( a2 == 2 )
        v11 = 3;
      v10 = v11;
    }
    v27[1] = 0LL;
    v27[2] = v27;
    v27[3] = 0LL;
    v28 = 0;
    v29 = &v33;
    v30 = &v31;
    v31 = 0;
    v32 = 0;
    v36 = 0;
    v33 = 0;
    v34 = "OnShellHotKeyActivity";
    v35 = 0LL;
    v37 = 1LL;
    v39 = 0LL;
    v40 = 0LL;
    memset(v38, 0, sizeof(v38));
    v41 = 0LL;
    v42 = 0LL;
    v27[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::StartActivity(v27, v10);
    if ( !v10 )
    {
      v8 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
LABEL_48:
      v27[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v27);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v27);
      return v8;
    }
    pvData = 0LL;
    if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 56)) == 1 )
    {
      if ( *(_BYTE *)(a1 + 210) || !*(_BYTE *)(a1 + 209) )
      {
        v18 = pvData;
        if ( pvData )
        {
          pvData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v13 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
                *(_QWORD *)(a1 + 96) + 16LL,
                &pvData,
                pcbData);
        v8 = v13;
        if ( v13 < 0 )
        {
          v14 = 959LL;
          goto LABEL_45;
        }
        LOBYTE(v19) = *(_BYTE *)(a1 + 209);
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, unsigned int))(**(_QWORD **)(a1 + 24)
                                                                                             + 352LL))(
                *(_QWORD *)(a1 + 24),
                pvData,
                *(unsigned int *)(a1 + 272),
                v19,
                1,
                v10);
        v8 = v13;
        if ( v13 < 0 )
        {
          v14 = 967LL;
          goto LABEL_45;
        }
        goto LABEL_54;
      }
      v13 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)a1, v12, 1);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 973LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v13);
LABEL_46:
        v20 = pvData;
        if ( pvData )
        {
          pvData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_48;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 288));
      *(_QWORD *)pcbData = a1 + 288;
      if ( *(_BYTE *)(a1 + 260) )
      {
        *(_WORD *)(a1 + 260) = 0;
        *(_QWORD *)(a1 + 264) = 0LL;
      }
      *(_WORD *)(a1 + 260) = 257;
      *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 272);
      *(_DWORD *)(a1 + 268) = a2;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88));
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 989LL;
        goto LABEL_35;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 80LL))(
              *(_QWORD *)(a1 + 88),
              500000LL,
              0LL);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 991LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v15);
        if ( a1 != -288 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 288));
        goto LABEL_46;
      }
      if ( a1 == -288 )
        goto LABEL_54;
      v17 = (RTL_SRWLOCK *)(a1 + 288);
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 280));
      if ( *(_BYTE *)(a1 + 248) )
      {
        *(_WORD *)(a1 + 248) = 0;
        *(_QWORD *)(a1 + 252) = 0LL;
      }
      *(_WORD *)(a1 + 248) = 257;
      *(_DWORD *)(a1 + 252) = *(_DWORD *)(a1 + 272);
      *(_DWORD *)(a1 + 256) = a2;
      if ( a1 == -280 )
        goto LABEL_54;
      v17 = (RTL_SRWLOCK *)(a1 + 280);
    }
    ReleaseSRWLockExclusive(v17);
LABEL_54:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
    v21 = pvData;
    if ( pvData )
    {
      pvData = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v27[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v27);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v27);
  }
  return 0LL;
}
