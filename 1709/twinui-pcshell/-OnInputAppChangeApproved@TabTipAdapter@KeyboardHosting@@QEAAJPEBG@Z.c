/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510
 * Callers:
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x1801A3550 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x1801A44B0 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        unsigned __int16 *a2,
        __int64 a3)
{
  void **v4; // rdi
  void **v5; // rax
  const char *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // r10
  int v11; // eax
  _WORD *v12; // rax
  void **v13; // r9
  unsigned __int64 v14; // rdx
  char *v15; // rsi
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  void *Src[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  std::wstring::wstring((unsigned __int64 *)Src, a2, a3);
  v4 = (void **)((char *)this + 216);
  v5 = Src;
  if ( v22 >= 8 )
    v5 = (void **)Src[0];
  v6 = (char *)this + 216;
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v6 = (const char *)*v4;
  v7 = *((_QWORD *)this + 29);
  v8 = v7;
  v9 = v21;
  if ( v21 < v7 )
    v8 = v21;
  if ( v8 )
  {
    v6 -= (__int64)v5;
    while ( 1 )
    {
      v10 = *(_WORD *)((char *)v5 + (_QWORD)v6);
      if ( v10 != *(_WORD *)v5 )
        break;
      v5 = (void **)((char *)v5 + 2);
      if ( !--v8 )
        goto LABEL_13;
    }
    v11 = v10 < *(_WORD *)v5 ? -1 : 1;
  }
  else
  {
LABEL_13:
    v11 = 0;
  }
  if ( !v11 && v7 >= v21 && v7 <= v21 )
    goto LABEL_32;
  try
  {
    *((_QWORD *)this + 29) = 0LL;
    v12 = (_WORD *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v12 = *v4;
    *v12 = 0;
    if ( v4 != Src )
    {
      v13 = Src;
      if ( v22 >= 8 )
        v13 = (void **)Src[0];
      v14 = v21;
      if ( v21 > *((_QWORD *)this + 30) )
      {
        std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
          (unsigned __int64 *)this + 27,
          v21,
          v9,
          v13);
      }
      else
      {
        v15 = (char *)this + 216;
        if ( *((_QWORD *)this + 30) >= 8uLL )
          v15 = (char *)*v4;
        *((_QWORD *)this + 29) = v21;
        v16 = 2 * v14;
        memmove(v15, v13, 2 * v14);
        *(_WORD *)&v15[v16] = 0;
      }
    }
  }
  catch ( ... )
  {
    v18 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2D2,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            v6);
    goto LABEL_33;
  }
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v4 = (void **)*v4;
  v17 = TouchKeyboardExperienceManager::OnInputAppChangeApproved(
          *((TouchKeyboardExperienceManager **)this + 7),
          (unsigned __int16 *)v4);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2D3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v17);
  else
LABEL_32:
    v18 = 0;
LABEL_33:
  std::wstring::~wstring((unsigned __int64 *)Src);
  return v18;
}
