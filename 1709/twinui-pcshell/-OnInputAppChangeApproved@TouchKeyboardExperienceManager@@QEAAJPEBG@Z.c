/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8
 * Callers:
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800C0724 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C0724.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18019BCA4 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18019BE38 (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C124 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x18019E4AC (-_Destroy@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18019FBC0 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        TouchKeyboardExperienceManager *this,
        unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct KBViewInfo **v6; // rbx
  struct KBViewInfo **v7; // rdi
  int v8; // eax
  unsigned int v9; // r15d
  const unsigned __int16 *v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  void **v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdi
  int ModalExperienceAsync; // eax
  unsigned int v21; // ebx
  void *Src[2]; // [rsp+40h] [rbp-198h] BYREF
  __int64 v23; // [rsp+50h] [rbp-188h]
  unsigned __int64 v24; // [rsp+58h] [rbp-180h]
  _QWORD v25[4]; // [rsp+60h] [rbp-178h] BYREF
  int v26; // [rsp+80h] [rbp-158h]
  int *v27; // [rsp+88h] [rbp-150h]
  int *v28; // [rsp+90h] [rbp-148h]
  int v29; // [rsp+98h] [rbp-140h] BYREF
  char v30; // [rsp+9Ch] [rbp-13Ch]
  int v31; // [rsp+C0h] [rbp-118h] BYREF
  const char *v32; // [rsp+C8h] [rbp-110h]
  __int64 v33; // [rsp+D0h] [rbp-108h]
  char v34; // [rsp+D8h] [rbp-100h]
  __int64 v35; // [rsp+E0h] [rbp-F8h]
  _BYTE v36[144]; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+178h] [rbp-60h]
  __int64 v38; // [rsp+180h] [rbp-58h]
  __int64 v39; // [rsp+188h] [rbp-50h]
  __int64 v40; // [rsp+190h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v25[1] = 0LL;
  v25[2] = v25;
  v25[3] = 0LL;
  v26 = 0;
  v27 = &v31;
  v28 = &v29;
  v29 = 0;
  v30 = 0;
  v34 = 0;
  v31 = 0;
  v32 = "InputAppActivationRequested";
  v33 = 0LL;
  v35 = 1LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(v36, 0, sizeof(v36));
  v39 = 0LL;
  v40 = 0LL;
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v25);
  if ( !*((_QWORD *)this + 58) )
    goto LABEL_11;
  v6 = (struct KBViewInfo **)*((_QWORD *)this + 49);
  v7 = (struct KBViewInfo **)*((_QWORD *)this + 50);
  while ( v6 != v7 )
  {
    v8 = TouchKeyboardExperienceManager::DismissView(this, *v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x91,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v25);
      return v9;
    }
    v6 += 2;
  }
  std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(v4, *((_QWORD *)this + 49), *((_QWORD *)this + 50));
  *((_QWORD *)this + 50) = *((_QWORD *)this + 49);
  v11 = (const unsigned __int16 *)((char *)this + 448);
  if ( *((_QWORD *)this + 59) >= 8uLL )
    v11 = *(const unsigned __int16 **)v11;
  v12 = TouchKeyboardExperienceManager::TerminateInputApplication(this, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x95,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v25);
    return v13;
  }
  else
  {
LABEL_11:
    std::wstring::wstring((unsigned __int64 *)Src, a2, v5);
    v15 = v23;
    if ( !v23 )
      goto LABEL_21;
    v16 = (_QWORD *)((char *)this + 448);
    v17 = Src;
    if ( v24 >= 8 )
      v17 = (void **)Src[0];
    v18 = *((_QWORD *)this + 58);
    if ( v23 > (unsigned __int64)(*((_QWORD *)this + 59) - v18) )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        (_QWORD *)this + 56,
        v23,
        v14,
        v17,
        v23);
    }
    else
    {
      v19 = v23 + v18;
      *((_QWORD *)this + 58) = v23 + v18;
      if ( *((_QWORD *)this + 59) >= 8uLL )
        v16 = (_QWORD *)*v16;
      memmove((char *)v16 + 2 * v18, v17, 2 * v15);
      *((_WORD *)v16 + v19) = 0;
    }
    ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(this);
    v21 = ModalExperienceAsync;
    if ( ModalExperienceAsync < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::~wstring((unsigned __int64 *)Src);
      v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v25);
      return v21;
    }
    else
    {
LABEL_21:
      std::wstring::~wstring((unsigned __int64 *)Src);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v25,
        0LL);
      v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v25);
      return 0LL;
    }
  }
}
