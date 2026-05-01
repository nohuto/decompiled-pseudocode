/*
 * XREFs of ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180199404
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1801999E8 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::SetHostedPos(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrame *a3,
        const struct tagRECT *a4)
{
  struct IApplicationFrame *v5; // r10
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // kr00_8
  __int64 v11; // kr08_8
  int v12; // eax
  struct IApplicationFrame *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationFrame *v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+50h] [rbp+18h] BYREF
  int v18; // [rsp+54h] [rbp+1Ch]

  v5 = a3;
  v16 = 0LL;
  if ( !a3 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrame **))(*(_QWORD *)a2 + 32LL))(
           a2,
           &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 176LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_11;
    }
    v5 = v16;
  }
  v10 = a4->right - a4->left;
  v17 = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
  v11 = a4->bottom - a4->top;
  v18 = (HIDWORD(v11) ^ v11) - HIDWORD(v11);
  v12 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, int *, _QWORD))(*(_QWORD *)v5 + 184LL))(v5, &v17, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, const struct tagRECT *))(*(_QWORD *)a2 + 64LL))(
         a2,
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 182LL;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_11:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v8;
}
