/*
 * XREFs of ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008DAE4
 * Callers:
 *     ?AddDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008BB10 (-AddDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18008DA50 (-CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x18001BB4C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::AddDataSource(
        BamoImpl::BamoDataProviderStubImpl *this,
        struct BamoDataSourcePrincipal *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // r8d
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL) + 40LL) )
  {
    if ( a2 )
    {
      v7 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoDataSourcePrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
      v8 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v7,
             *((struct Microsoft::BamoImpl::BamoPeerImpl **)this + 5));
      v2 = *((_QWORD *)this + 5);
      v6 = v8;
    }
    else
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
    if ( *((_BYTE *)this + 32) && *(_QWORD *)(v9 + 40) )
    {
      v10 = *((_QWORD *)this + 3);
      v11 = *(_QWORD *)(v9 + 48);
      v13[0] = *(unsigned int *)(v2 + 36);
      v13[1] = *(unsigned int *)(v10 + 24);
      return CoreUICallSend(v11, v13, 2LL, 1LL, 0, &unk_1800FE145, v6);
    }
    v4 = -2018375675;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
      (const char *)0x87B20805LL);
    v5 = 472LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 464LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
    (const char *)v4);
  return v4;
}
