/*
 * XREFs of ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009A678
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x180098D10 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800973BC (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 *     ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800976C4 (-GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A45F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  HSTRING *NodeTileId; // rsi
  __int64 v17; // rcx
  char v18; // si
  _QWORD *v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // [rsp+28h] [rbp-59h] BYREF
  HSTRING string; // [rsp+30h] [rbp-51h] BYREF
  __int64 v23; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-41h] BYREF
  HSTRING v25; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  _QWORD *v28; // [rsp+60h] [rbp-21h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-19h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  __int64 *v31; // [rsp+80h] [rbp-1h]
  _QWORD v32[3]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD *v33; // [rsp+A0h] [rbp+1Fh]
  char v34[24]; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v30 = -2LL;
  LODWORD(v21) = 0;
  v2 = *(_QWORD *)this;
  v24 = 0LL;
  string = (HSTRING)L"Windows.Data.Xml.Dom.XmlDocument";
  v23 = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v34, (const WCHAR **)&string);
  v4 = v23;
  v23 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = RoActivateInstance(*(_QWORD *)(v3 + 24), &v23);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    goto LABEL_34;
  }
  v35 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v23)(
         v23,
         &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494,
         &v26);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_36;
  }
  LODWORD(v21) = 3;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v8 = v26;
  v26 = 0LL;
  v24 = v8;
  v9 = (**v8)(v8, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, &v27);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_35;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, v2);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v11);
LABEL_37:
    std::_Xbad_function_call();
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v32[0] = off_1800DBEB8;
  v32[1] = this;
  v33 = v32;
  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
    (__int64 *)&v24,
    &v28);
  v14 = v28;
  v15 = v29;
  if ( v28 != v29 )
  {
    v31 = &v21;
    do
    {
      NodeTileId = CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
                     v13,
                     &string,
                     v14);
      v17 = *v14;
      v21 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v25 = *NodeTileId;
      if ( !v33 )
        goto LABEL_37;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, HSTRING *))(*v33 + 16LL))(v33, &v21, &v25);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      WindowsDeleteString(string);
      string = 0LL;
      if ( !v18 )
        break;
      ++v14;
    }
    while ( v14 != v15 );
    v14 = v28;
  }
  if ( v14 )
  {
    v19 = v29;
    if ( v14 != v29 )
    {
      do
      {
        if ( *v14 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 16LL))(*v14);
        ++v14;
      }
      while ( v14 != v19 );
      v14 = v28;
    }
    operator delete(v14);
  }
  if ( v33 )
  {
    v20 = v32;
    LOBYTE(v20) = v33 != v32;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v33 + 32LL))(v33, v20);
  }
  if ( v24 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
}
