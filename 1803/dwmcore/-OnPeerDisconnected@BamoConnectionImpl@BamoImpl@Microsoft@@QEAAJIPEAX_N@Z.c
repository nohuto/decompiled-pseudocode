/*
 * XREFs of ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x1801541E0 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153BEC (-OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        __int64 a2,
        Microsoft::BamoImpl::BamoPeerImpl *a3,
        const char *a4)
{
  char v5; // si
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct Microsoft::BamoImpl::BamoConnectionImpl *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rbx
  int v14; // edi
  Microsoft::BamoImpl::BamoPeerImpl *v15; // rax
  Microsoft::BamoImpl::BamoPeerImpl *v16; // rcx
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char)a4;
  Microsoft::BamoImpl::BamoPeerImpl::OnDisconnected(a3, 0, (__int64)a3, a4);
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)a3 + 2);
  v9 = (struct Microsoft::BamoImpl::BamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v21, v9);
  LOBYTE(v10) = v5;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v8, v10);
  v13 = v21;
  v14 = v11;
  if ( v21 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 96));
    *(_DWORD *)(v13 + 136) = GetCurrentThreadId();
  }
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x46C,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v19);
    __debugbreak();
  }
  v15 = (Microsoft::BamoImpl::BamoPeerImpl *)*((_QWORD *)this + 9);
  v16 = 0LL;
  while ( 1 )
  {
    if ( !v15 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4EC,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v12);
      __debugbreak();
    }
    if ( v15 == a3 )
      break;
    v16 = v15;
    v15 = (Microsoft::BamoImpl::BamoPeerImpl *)*((_QWORD *)v15 + 7);
  }
  v17 = *((_QWORD *)a3 + 7);
  if ( v16 )
    *((_QWORD *)v16 + 7) = v17;
  else
    *((_QWORD *)this + 9) = v17;
  *((_QWORD *)a3 + 7) = 0LL;
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BamoPeerImpl *))a3)(a3);
  return 0LL;
}
