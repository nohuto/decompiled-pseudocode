/*
 * XREFs of ?AllocateStubThunk@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180067290
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x18000AD04 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyControllerServerPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoEdgyControllerServerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  struct Microsoft::Bamo::BamoStub *v12; // [rsp+58h] [rbp+10h] BYREF

  v6 = (*(__int64 (__fastcall **)(BamoImpl::BamoEdgyControllerServerPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v11,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 2) + 24LL));
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v6 + 40LL))(
         v6,
         *((_QWORD *)a2 + 2),
         &v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1562,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180067341LL);
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
