/*
 * XREFs of ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008E1AC
 * Callers:
 *     ?SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z @ 0x18008CD80 (-SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z.c)
 *     ?SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008DE90 (-SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCache(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int16 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v7 = *((_DWORD *)this + 10);
    v3 = *((unsigned int *)this + 6);
    v8[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v8[1] = v3;
    v6 = 9;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v8, 2LL, 5LL, v6, &unk_1800FE145, v7);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      v5 = wil::verify_hresult<long>(v4);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7CA,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)v5);
      JUMPOUT(0x18008E242LL);
    }
  }
}
