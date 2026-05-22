/*
 * XREFs of ?UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180030738
 * Callers:
 *     ?UpdatePausedRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180030160 (-UpdatePausedRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBam.c)
 *     ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800307D0 (-SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCa.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCache(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int16 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v8[1] = *((unsigned int *)this + 6);
    v7 = *((unsigned __int8 *)this + 41);
    v8[0] = v3;
    v6 = 1;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v8, 2LL, 6LL, v6, &unk_1800F9668, v7);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      v5 = wil::verify_hresult<long>(v4);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8BC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
        (const char *)v5);
      JUMPOUT(0x1800307CELL);
    }
  }
}
