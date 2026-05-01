/*
 * XREFs of ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x1800F3B34
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18010CB38 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEBG@Z @ 0x1800FE8E4 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewEventDispatcher::ViewPropertyChanged(RTL_SRWLOCK *this, int a2, const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  char *v6; // r12
  int v7; // edi
  char *i; // r14
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rcx
  int v11; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v13; // rsi
  int v14; // eax
  int v15; // eax
  PSRWLOCK v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v23; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  v23 = a3;
  v20[1] = -2LL;
  try
  {
    v22 = 0LL;
    v13 = 0LL;
    v20[0] = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 28, &SRWLock);
    *(_QWORD *)v19 = 0LL;
    v6 = 0LL;
    for ( i = 0LL; i < this[38].Ptr; ++i )
    {
      v5 = *((_QWORD *)this[37].Ptr + (_QWORD)i);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 576LL))(v5) == a2 )
      {
        v6 = i;
        v7 = 0;
        goto LABEL_7;
      }
    }
    v7 = -2147319765;
LABEL_7:
    if ( v7 >= 0 )
    {
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[37].Ptr;
      v10 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = (**Ptr[(_QWORD)v6])(Ptr[(_QWORD)v6], &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v22);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x47C,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v22, v20);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x47D,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v13 = v20[0];
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( v13 )
    {
      *(_QWORD *)v19 = 0LL;
      v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
              v19,
              &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x485,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      SRWLock = 0LL;
      v15 = AgileGitPtr::CopyLocal(
              (AgileGitPtr *)(v13 + 32),
              &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
              (void **)&SRWLock);
      if ( v15 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x488,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v15);
      (*((void (__fastcall **)(PSRWLOCK, __int64, _QWORD))SRWLock->Ptr + 3))(SRWLock, v22, *(_QWORD *)v19);
      v16 = SRWLock;
      if ( SRWLock )
      {
        SRWLock = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v16->Ptr + 2))(v16);
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
