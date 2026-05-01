/*
 * XREFs of ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18011E7B4
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180137D58 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEBG@Z @ 0x1801295EC (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewEventDispatcher::ViewPropertyChanged(RTL_SRWLOCK *this, int a2, const unsigned __int16 *a3)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  PVOID v7; // r15
  char v8; // r12
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v10; // rcx
  int v11; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v20[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  const unsigned __int16 *v23; // [rsp+90h] [rbp+18h] BYREF
  void *v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = a3;
  v20[1] = -2LL;
  try
  {
    v22 = 0LL;
    v13 = 0LL;
    v20[0] = 0LL;
    v5 = this + 37;
    AcquireSRWLockShared(this + 37);
    v24 = v5;
    *(_QWORD *)v19 = 0LL;
    v7 = 0LL;
    v8 = 1;
    while ( v7 < this[47].Ptr )
    {
      v6 = *((_QWORD *)this[46].Ptr + (_QWORD)v7);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 576LL))(v6) == a2 )
        goto LABEL_6;
      v7 = (char *)v7 + 1;
    }
    v8 = 0;
    v7 = 0LL;
LABEL_6:
    if ( v8 )
    {
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[46].Ptr;
      v10 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = (**Ptr[(_QWORD)v7])(Ptr[(_QWORD)v7], &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v22);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x482,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v22, v20);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x483,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v13 = v20[0];
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
    if ( v13 )
    {
      *(_QWORD *)v19 = 0LL;
      v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
              v19,
              &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x48B,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      v24 = 0LL;
      v15 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v13 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v24);
      if ( v15 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x48E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v15);
      (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, v22, *(_QWORD *)v19);
      v16 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v18 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  catch ( ... )
  {
  }
}
