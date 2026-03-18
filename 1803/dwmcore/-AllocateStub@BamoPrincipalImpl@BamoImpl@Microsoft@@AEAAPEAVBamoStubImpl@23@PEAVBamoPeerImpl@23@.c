/*
 * XREFs of ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@@Z @ 0x18015340C
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x1801543E8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180152FF0 (--4-$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BamoPeerImpl *, __int64 *))(*(_QWORD *)this + 64LL))(
         this,
         a2,
         &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v4,
      v7);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  *(_QWORD *)(v5 + 24) = this;
  wil::com_ptr_t<Microsoft::BamoImpl::BamoPeerImpl,wil::err_returncode_policy>::operator=(
    (void (__fastcall ****)(_QWORD))(v5 + 40),
    (__int64)a2);
  result = (struct Microsoft::BamoImpl::BamoStubImpl *)v5;
  *(_QWORD *)(v5 + 48) = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v5;
  *(_QWORD *)(v5 + 56) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = v5;
  return result;
}
