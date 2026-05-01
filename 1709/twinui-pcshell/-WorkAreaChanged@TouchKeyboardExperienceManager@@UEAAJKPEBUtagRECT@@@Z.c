/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18019B950
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019ABC0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1801AB300 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU-$IVectorVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 63);
  if ( !v3 )
    return 0LL;
  *((struct tagRECT *)this + 19) = *a3;
  v12 = 0LL;
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(*(_QWORD *)(v3 + 96) + 16LL, a3, &v12, &v11, -2LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 896LL;
    goto LABEL_4;
  }
  if ( v11 == 3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 24) + 360LL))(*(_QWORD *)(v3 + 24), v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 900LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
      v7 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      goto LABEL_12;
    }
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v5 = 0;
LABEL_12:
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x37E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  return 0LL;
}
