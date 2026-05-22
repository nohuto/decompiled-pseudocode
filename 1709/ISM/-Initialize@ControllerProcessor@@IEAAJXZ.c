/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003DEA0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003C07C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x18003E72C (-GetDisplayInformation@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800418B4 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180041990 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x1800425A0 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C0560 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int DisplayInformation; // eax
  __int64 v11; // rcx
  int v12; // r9d
  HMONITOR v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  ControllerNavigationManager *Instance; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // [rsp+28h] [rbp-29h]
  __int64 v30; // [rsp+40h] [rbp-11h] BYREF
  __int128 v31; // [rsp+48h] [rbp-9h] BYREF
  __int128 v32; // [rsp+58h] [rbp+7h]
  int v33; // [rsp+68h] [rbp+17h]
  char v34; // [rsp+6Ch] [rbp+1Bh]
  __int64 v35; // [rsp+70h] [rbp+1Fh]
  struct tagRECT v36; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v35 = -2LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = -1;
  v34 = 1;
  v2 = CoreUICreate(&v30);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_60;
    v5 = 236;
    goto LABEL_4;
  }
  v6 = v30;
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v6 + 120LL))(
         v6,
         ControllerProcessor::OnAutoRepeatTimerStatic,
         this,
         (char *)this + 280);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 241;
LABEL_4:
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 12, v5, v2);
      goto LABEL_60;
    }
    goto LABEL_60;
  }
  *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) |= 0x86u;
  *(_QWORD *)&v31 = *((_QWORD *)this + 4);
  *(_QWORD *)&v32 = this;
  *((_QWORD *)&v31 + 1) = *((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 30);
  if ( v8 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v2 = CreateChildInputProcessor(4, &v31, (__int64)this + 240);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v9 = *((_QWORD *)this + 31);
    if ( v9 )
    {
      *((_QWORD *)this + 31) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v2 = CreateChildInputProcessor(128, &v31, (__int64)this + 248);
    v4 = v2;
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 262;
        goto LABEL_4;
      }
      goto LABEL_60;
    }
    DisplayInformation = ControllerProcessor::GetDisplayInformation(this);
    if ( DisplayInformation >= 0 )
    {
      *((_DWORD *)this + 308) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
      *((_DWORD *)this + 309) = 8;
      *(_QWORD *)&v36.left = 0LL;
      v36.right = *((_DWORD *)this + 83);
      v36.bottom = *((_DWORD *)this + 84);
      if ( *((_DWORD *)this + 100) != 5 )
      {
        ManipulationInjector::EndManipulation((ControllerProcessor *)((char *)this + 400), 0);
        *((_DWORD *)this + 100) = 5;
        *(_QWORD *)((char *)this + 1132) = 0LL;
      }
      if ( *((_DWORD *)this + 122) )
      {
        v14 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x5A8, v15, (const char *)v14, v29);
        __debugbreak();
      }
      *((_DWORD *)this + 101) = 2;
      ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 400), v13, &v36);
      *((_QWORD *)this + 149) = ((unsigned __int64)this + 56) & -(__int64)(this != 0LL);
      *((_DWORD *)this + 81) = *((_DWORD *)this + 83) / 2;
      *((_DWORD *)this + 82) = *((_DWORD *)this + 84) / 2;
      v16 = v30;
      v17 = *((_QWORD *)this + 36);
      if ( v17 )
      {
        *((_QWORD *)this + 36) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v16 + 120LL))(
                             v16,
                             ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic,
                             this,
                             (char *)this + 288);
      if ( DisplayInformation >= 0 )
      {
        v18 = v30;
        v19 = *((_QWORD *)this + 503);
        if ( v19 )
        {
          *((_QWORD *)this + 503) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v18 + 120LL))(
                               v18,
                               lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_,
                               this,
                               (char *)this + 4024);
        if ( DisplayInformation >= 0 )
        {
          v20 = v30;
          v21 = *((_QWORD *)this + 504);
          if ( v21 )
          {
            *((_QWORD *)this + 504) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          DisplayInformation = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), ControllerProcessor *, char *))(*(_QWORD *)v20 + 120LL))(
                                 v20,
                                 lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_,
                                 this,
                                 (char *)this + 4032);
          v4 = DisplayInformation;
          if ( DisplayInformation >= 0 )
          {
            Instance = ControllerNavigationManager::GetInstance();
            if ( Instance
              && (DisplayInformation = ControllerNavigationManager::RegisterControllerProcessor(
                                         Instance,
                                         **((_DWORD **)this + 4),
                                         this),
                  v4 = DisplayInformation,
                  DisplayInformation < 0) )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_57;
              v12 = 306;
            }
            else
            {
              ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
              v23 = *((_QWORD *)this + 511);
              if ( v23 )
              {
                *((_QWORD *)this + 511) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
              }
              RegistryWatcher::Create(
                v23,
                L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
                this,
                lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
                (struct RegistryWatcher **)this + 511);
              if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
                goto LABEL_60;
              ControllerProcessor::UpdateControllerNavigationMode(this);
              v24 = *((_QWORD *)this + 512);
              if ( v24 )
              {
                *((_QWORD *)this + 512) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
              }
              RegistryWatcher::Create(
                v24,
                L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
                this,
                lambda_2185fa630517e7c889a7a0a7e3b7459d_::_lambda_invoker_cdecl_,
                (struct RegistryWatcher **)this + 512);
              v26 = *((_QWORD *)this + 513);
              if ( v26 )
              {
                *((_QWORD *)this + 513) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              }
              DisplayInformation = ViewMenuChordedKeyHandler::Create(v26, this, v25, (char *)this + 4104);
              v4 = DisplayInformation;
              if ( DisplayInformation >= 0 )
                goto LABEL_60;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              {
LABEL_57:
                if ( IsDebuggerPresent() )
                  __debugbreak();
                __fastfail(7u);
              }
              v12 = 343;
            }
          }
          else
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_57;
            v12 = 301;
          }
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_57;
          v12 = 293;
        }
      }
      else
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_57;
        v12 = 285;
      }
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_57;
      v12 = 264;
    }
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 12, v12, DisplayInformation);
    goto LABEL_57;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 257;
    goto LABEL_4;
  }
LABEL_60:
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v4;
}
