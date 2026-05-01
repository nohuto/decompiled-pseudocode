/*
 * XREFs of ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18019BCA4
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18019C780 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::DismissView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15[1] = -2LL;
  if ( *((_QWORD *)a2 + 1) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 32LL))(*((_QWORD *)this + 52));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AB,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = *((_QWORD *)a2 + 1);
    if ( v4 )
    {
      *((_QWORD *)a2 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  v5 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_21;
  v15[0] = 0LL;
  if ( (**v5)(v5, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, v15) < 0 || !*((_QWORD *)a2 + 3) )
  {
LABEL_12:
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 336LL))(*(_QWORD *)a2, 0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 952LL;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v15[0];
    if ( v15[0] )
    {
      v15[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
LABEL_21:
    *((_BYTE *)a2 + 32) = 1;
    v13 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(0LL, 0);
    v14 = v13;
    if ( v13 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3BF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15[0] + 88LL))(v15[0], *((_QWORD *)a2 + 3));
  v7 = v6;
  if ( v6 >= 0 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    goto LABEL_12;
  }
  v8 = 948LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  v9 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
