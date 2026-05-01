/*
 * XREFs of ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A40E4
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1801A3380 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x1801A42B0 (-TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB2A0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKe.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  char *v15; // [rsp+80h] [rbp+18h]

  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x220,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_21;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 36);
  v15 = (char *)this + 288;
  if ( *((_BYTE *)this + 260) )
  {
    v4 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(*((_QWORD *)this + 12) + 16LL, &v14, &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      v7 = 549LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_19;
    }
    if ( *((_BYTE *)this + 261) )
    {
      v8 = *((_DWORD *)this + 67);
      v9 = 2;
      if ( v8 != 1 )
      {
        if ( v8 != 2 )
        {
          v3 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x233,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)0x8000FFFFLL);
          goto LABEL_19;
        }
        v9 = 3;
      }
      LOBYTE(v6) = *((_BYTE *)this + 209);
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int))(**((_QWORD **)this + 3) + 352LL))(
             *((_QWORD *)this + 3),
             v14,
             *((unsigned int *)this + 66),
             v6,
             1,
             v9);
      v3 = v5;
      if ( v5 < 0 )
      {
        v7 = 571LL;
        goto LABEL_17;
      }
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 336LL))(
             *((_QWORD *)this + 3),
             v14,
             *((unsigned int *)this + 66));
      v3 = v5;
      if ( v5 < 0 )
      {
        v7 = 575LL;
        goto LABEL_17;
      }
    }
  }
  *((_WORD *)this + 130) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  v3 = 0;
LABEL_19:
  if ( this != (KeyboardHosting::TabTipAdapter *)-288LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 36);
LABEL_21:
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v3;
}
