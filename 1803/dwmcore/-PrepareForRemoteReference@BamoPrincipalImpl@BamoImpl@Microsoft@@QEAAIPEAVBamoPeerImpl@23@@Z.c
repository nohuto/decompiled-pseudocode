/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x1801543E8
 * Callers:
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@@Z @ 0x18015340C (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
        i && *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) != *((_DWORD *)a2 + 9);
        i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
  {
    ;
  }
  if ( !i )
    i = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(this, a2);
  if ( !*((_BYTE *)i + 32) )
  {
    *((_BYTE *)i + 32) = 1;
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, _QWORD, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 56LL))(
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 48LL),
      i);
    v4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)i + 40LL))(i);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v4,
        v6);
      __debugbreak();
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)i + 4);
  return *((unsigned int *)this + 6);
}
