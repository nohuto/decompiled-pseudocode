/*
 * XREFs of ?AllocateStubThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180168590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct Microsoft::Bamo::BamoStub *v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = (*(__int64 (__fastcall **)(BamoImpl::BamoDataProviderRegistrarPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v11,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 2) + 24LL));
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v6 + 40LL))(
         v6,
         *((_QWORD *)a2 + 2),
         &v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x41B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  *a3 = v12;
  return 0LL;
}
