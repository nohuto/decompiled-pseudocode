/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18023F720
 * Callers:
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C740 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180178A08 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023BFD4 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023CC54 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18023CDE4 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180241BC8 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18024305C (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        TouchKeyboardExperienceManager *this,
        unsigned __int16 *a2)
{
  struct KBViewInfo **v4; // rdi
  struct KBViewInfo **v5; // r14
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rsi
  __int64 v10; // rdi
  std::_Ref_count_base *v11; // rcx
  const unsigned __int16 *v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  _QWORD *v15; // rdx
  int ModalExperienceAsync; // eax
  unsigned int v17; // ebx
  _QWORD v18[2]; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-188h]
  unsigned __int64 v20; // [rsp+48h] [rbp-180h]
  _QWORD v21[40]; // [rsp+50h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"InputAppActivationRequested");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v21);
  if ( !*((_QWORD *)this + 62) )
    goto LABEL_16;
  v4 = (struct KBViewInfo **)*((_QWORD *)this + 53);
  v5 = (struct KBViewInfo **)*((_QWORD *)this + 54);
  while ( v4 != v5 )
  {
    v6 = TouchKeyboardExperienceManager::DismissView(this, *v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v21);
      return v7;
    }
    v4 += 2;
  }
  v9 = *((_QWORD *)this + 54);
  v10 = *((_QWORD *)this + 53);
  if ( v10 != v9 )
  {
    do
    {
      v11 = *(std::_Ref_count_base **)(v10 + 8);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      v10 += 16LL;
    }
    while ( v10 != v9 );
    v10 = *((_QWORD *)this + 53);
  }
  *((_QWORD *)this + 54) = v10;
  v12 = (const unsigned __int16 *)((char *)this + 480);
  if ( *((_QWORD *)this + 63) >= 8uLL )
    v12 = *(const unsigned __int16 **)v12;
  v13 = TouchKeyboardExperienceManager::TerminateInputApplication(this, v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v21);
    return v14;
  }
  else
  {
LABEL_16:
    std::wstring::wstring(v18, a2);
    if ( !v19 )
      goto LABEL_21;
    v15 = v18;
    if ( v20 >= 8 )
      v15 = (_QWORD *)v18[0];
    std::wstring::append((const void **)this + 60, v15, v19);
    ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(this);
    v17 = ModalExperienceAsync;
    if ( ModalExperienceAsync < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::_Tidy_deallocate((__int64)v18);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v21);
      return v17;
    }
    else
    {
LABEL_21:
      std::wstring::_Tidy_deallocate((__int64)v18);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v21,
        0LL);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v21);
      return 0LL;
    }
  }
}
