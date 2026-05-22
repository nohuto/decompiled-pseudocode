/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x18001B230
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18001B528 (-OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        Microsoft::BamoImpl::BamoPeerImpl *a3,
        char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  const char *v15; // r9
  int v16; // ebp
  const char *v17; // r9
  Microsoft::BamoImpl::BamoPeerImpl *v18; // rcx
  Microsoft::BamoImpl::BamoPeerImpl *i; // rax
  __int64 v20; // rdx
  const char *v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = *((_QWORD *)this + 1);
  v8 = 0LL;
  if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
  {
    v8 = v7;
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  v9 = *((_QWORD *)this + 1);
  Microsoft::BamoImpl::BamoPeerImpl::OnDisconnected(a3, 0);
  v10 = *((_QWORD *)a3 + 2);
  v11 = *(_QWORD *)(v9 + 16);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
  v14 = 0LL;
  if ( !*(_DWORD *)(v12 + 140) )
  {
    v14 = v12;
    if ( *(_DWORD *)(v12 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v15);
      __debugbreak();
    }
    *(_DWORD *)(v14 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 96));
  }
  LOBYTE(v13) = a4;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v10, v13);
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 96));
    *(_DWORD *)(v14 + 136) = GetCurrentThreadId();
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46C,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v18 = 0LL;
  for ( i = *(Microsoft::BamoImpl::BamoPeerImpl **)(v9 + 72); i; i = (Microsoft::BamoImpl::BamoPeerImpl *)*((_QWORD *)i + 7) )
  {
    if ( i == a3 )
    {
      v20 = *((_QWORD *)a3 + 7);
      if ( v18 )
        *((_QWORD *)v18 + 7) = v20;
      else
        *(_QWORD *)(v9 + 72) = v20;
      *((_QWORD *)a3 + 7) = 0LL;
      break;
    }
    v18 = i;
  }
  if ( !i )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4EC,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v17);
    goto LABEL_26;
  }
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BamoPeerImpl *))a3)(a3);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 136) == GetCurrentThreadId() )
    {
      *(_DWORD *)(v8 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
      return 0LL;
    }
LABEL_26:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v21);
    JUMPOUT(0x18001B414LL);
  }
  return 0LL;
}
