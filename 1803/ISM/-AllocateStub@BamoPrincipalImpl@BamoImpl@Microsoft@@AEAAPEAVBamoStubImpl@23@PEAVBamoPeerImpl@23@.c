/*
 * XREFs of ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@@Z @ 0x18001BBF0
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x18001BB4C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2)
{
  int v4; // eax
  struct Microsoft::BamoImpl::BamoStubImpl *v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BamoPeerImpl *, __int64 *))(*(_QWORD *)this + 64LL))(
         this,
         a2,
         &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F0,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18001BC9ALL);
  }
  v5 = (struct Microsoft::BamoImpl::BamoStubImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  *((_QWORD *)v5 + 3) = this;
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v5 + 5);
  *((_QWORD *)v5 + 5) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( v6 )
    (**v6)(v6);
  *((_QWORD *)v5 + 6) = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v5;
  *((_QWORD *)v5 + 7) = *((_QWORD *)a2 + 6);
  result = v5;
  *((_QWORD *)a2 + 6) = v5;
  return result;
}
