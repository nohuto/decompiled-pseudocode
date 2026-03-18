/*
 * XREFs of ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180154050 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x1801543E8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  void **v5; // r13
  unsigned int v6; // r14d
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD); // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall **v17)(_QWORD); // rsi
  struct Microsoft::BamoImpl::BamoConnectionImpl *v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  int v21; // esi
  __int64 (__fastcall **v22)(_QWORD); // rdi
  __int64 v23; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v24; // rax
  unsigned int v25; // eax
  int v27; // [rsp+20h] [rbp-30h]
  __int64 (__fastcall ***v28)(_QWORD); // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v32; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  v6 = 0;
  v32 = 0LL;
  *a5 = 0LL;
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 24LL))(
          this,
          &v29);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3FE,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v27);
    __debugbreak();
  }
  v12 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  v28 = v12;
  v13 = (Microsoft::BamoImpl::BamoImplObject *)v12[3];
  v14 = *((_QWORD *)this + 8);
  v12[3] = (__int64 (__fastcall **)(_QWORD))v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v12 = v28;
  }
  if ( v13 )
    Microsoft::BamoImpl::BamoImplObject::Release(v13);
  *((_DWORD *)v12 + 8) = a2;
  *((_DWORD *)v12 + 9) = a3;
  *((_DWORD *)v12 + 10) = a4;
  v15 = v32;
  v32 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = *((_QWORD *)this + 2);
  v17 = v12[2];
  v18 = (struct Microsoft::BamoImpl::BamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v30,
    v18);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall **)(_QWORD), void ***, __int64 *))(*(_QWORD *)v16 + 8LL))(
          v16,
          v17,
          &a5,
          &v32);
  v20 = v30;
  v21 = v19;
  if ( v30 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 96));
    *(_DWORD *)(v20 + 136) = GetCurrentThreadId();
  }
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x408,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v21,
      v27);
    __debugbreak();
  }
  if ( (_BYTE)a5 )
  {
    v22 = *v12;
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64))v22[10])(v12, v23);
    if ( v32 )
    {
      v24 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v25 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v24,
              (struct Microsoft::BamoImpl::BamoPeerImpl *)v12);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v12)[6])(v12, v25);
    }
    v12[7] = (__int64 (__fastcall **)(_QWORD))*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v12;
    *v5 = v12;
    v28 = 0LL;
  }
  else
  {
    v6 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x411,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v32);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v28);
  return v6;
}
