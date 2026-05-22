/*
 * XREFs of ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18001AC68
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18001B150 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x18001BB4C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  signed __int32 v15; // edx
  bool v16; // sf
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  const char *v23; // r9
  int v24; // r14d
  unsigned int v25; // edi
  __int64 v26; // rbx
  __int64 v27; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v28; // rax
  unsigned int v29; // eax
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h]
  __int64 v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v36; // [rsp+90h] [rbp+30h] BYREF

  v34 = -2LL;
  *a5 = 0LL;
  v31 = 0LL;
  v9 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 24LL))(
         this,
         &v32);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3FE,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  v12 = (void (__fastcall ***)(_QWORD))v10;
  v13 = *((_QWORD *)this + 8);
  v14 = *(volatile signed __int32 **)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v13;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v12 = (void (__fastcall ***)(_QWORD))v10;
  }
  if ( v14 )
  {
    v15 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    v16 = v15 - 1 < 0;
    v17 = (unsigned int)(v15 - 1);
    if ( v16 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        (const char *)retaddr);
      __debugbreak();
    }
    if ( !(_DWORD)v17 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v14 + 16LL))(
        v14,
        v17,
        v11,
        retaddr);
    v12 = (void (__fastcall ***)(_QWORD))v10;
  }
  *(_DWORD *)(v10 + 32) = a2;
  *(_DWORD *)(v10 + 36) = a3;
  *(_DWORD *)(v10 + 40) = a4;
  v18 = v31;
  v31 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = *(_QWORD *)(v10 + 16);
  v20 = *((_QWORD *)this + 2);
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
  v22 = 0LL;
  v33 = 0LL;
  if ( !*(_DWORD *)(v21 + 140) )
  {
    v22 = v21;
    v33 = v21;
    if ( *(_DWORD *)(v21 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v23);
      __debugbreak();
    }
    *(_DWORD *)(v22 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v22 + 96));
  }
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64 *))(*(_QWORD *)v20 + 8LL))(v20, v19, &v36, &v31);
  if ( v22 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v22 + 96));
    *(_DWORD *)(v22 + 136) = GetCurrentThreadId();
  }
  if ( v24 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x408,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v24);
    JUMPOUT(0x18001AF2CLL);
  }
  if ( v36 )
  {
    v26 = *(_QWORD *)v10;
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    (*(void (__fastcall **)(__int64, __int64))(v26 + 80))(v10, v27);
    if ( v31 )
    {
      v28 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
      v29 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v28,
              (struct Microsoft::BamoImpl::BamoPeerImpl *)v10);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, v29);
    }
    *(_QWORD *)(v10 + 56) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v10;
    v12 = 0LL;
    *a5 = (void *)v10;
    v25 = 0;
  }
  else
  {
    v25 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x411,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)0x87B2080CLL);
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  if ( v12 )
    (**v12)(v12);
  return v25;
}
