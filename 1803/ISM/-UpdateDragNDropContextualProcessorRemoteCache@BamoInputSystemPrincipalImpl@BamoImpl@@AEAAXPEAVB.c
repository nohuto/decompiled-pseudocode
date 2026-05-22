/*
 * XREFs of ?UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002206C
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180021E10 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?UpdateDragNDropContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180022050 (-UpdateDragNDropContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x18001BB4C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragNDropContextualProcessorRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rbx
  struct Microsoft::BamoImpl::BamoPeerImpl *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
      v8 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      v9 = (struct Microsoft::BamoImpl::BamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v6 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v8, v9);
    }
    else
    {
      v6 = 0;
    }
    v10 = *((unsigned int *)this + 6);
    v14[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v11 = *(_QWORD *)(v4 + 48);
    v14[1] = v10;
    v12 = CoreUICallSend(
            v11,
            v14,
            2LL,
            22LL,
            0,
            &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_jksxHZtrc6wMaeXIMuhxle7o0U8_BamoGroup$8f28419c,
            v6);
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2018375675 )
    {
      v13 = wil::verify_hresult<long>(v12);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FEA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
        (const char *)v13);
      JUMPOUT(0x180022174LL);
    }
  }
}
