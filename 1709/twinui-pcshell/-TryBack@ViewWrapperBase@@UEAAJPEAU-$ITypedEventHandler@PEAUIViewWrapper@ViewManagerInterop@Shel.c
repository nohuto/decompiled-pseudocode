/*
 * XREFs of ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x180140240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::TryBack(__int64 a1, struct IUnknown *a2)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 112LL))(a1 - 8) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
  v5 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 168), &SRWLock);
    if ( *(_QWORD *)(a1 + 184) )
    {
      if ( *(_BYTE *)(a1 + 452) )
      {
        v7 = -2147483638;
        v8 = 1496LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)v7);
LABEL_25:
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a1 + 272) == 4 && *(_DWORD *)(a1 + 276) == 4 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 104LL))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL));
        v7 = v9;
        if ( v9 >= 0 )
        {
          *(_BYTE *)(a1 + 452) = 1;
          v10 = *(_QWORD *)(a1 + 456);
          if ( v10 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          v11 = v5;
          v5 = 0LL;
          v14 = 0LL;
          v12 = *(_QWORD *)(a1 + 456);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          *(_QWORD *)(a1 + 456) = v11;
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          v7 = 0;
          goto LABEL_27;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5E7,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_25;
      }
      v8 = 1508LL;
    }
    else
    {
      v8 = 1493LL;
    }
    v7 = -2147019873;
    goto LABEL_24;
  }
  v6 = AgileGitPtr::Initialize((AgileGitPtr *)&v14, &GUID_067c572c_3d80_58c9_807a_311aafdc58b6, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v5 = v14;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5D0,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)(unsigned int)v6);
  v5 = v14;
LABEL_27:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
