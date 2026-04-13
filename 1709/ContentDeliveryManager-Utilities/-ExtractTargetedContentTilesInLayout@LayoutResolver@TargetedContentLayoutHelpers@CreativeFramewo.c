/*
 * XREFs of ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18008D070
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18008A008 (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 *     ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008A30C (-GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180097570 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  HSTRING *NodeTileId; // rsi
  __int64 v14; // rcx
  char v15; // si
  _QWORD *v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-59h] BYREF
  HSTRING string; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-41h] BYREF
  HSTRING v21; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  __int64 v23; // [rsp+58h] [rbp-29h] BYREF
  _QWORD *v24; // [rsp+60h] [rbp-21h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-19h]
  __int64 v26; // [rsp+78h] [rbp-9h]
  __int64 *v27; // [rsp+80h] [rbp-1h]
  _QWORD v28[3]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD *v29; // [rsp+A0h] [rbp+1Fh]
  char v30[24]; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v26 = -2LL;
  LODWORD(v17) = 0;
  v2 = *(_QWORD *)this;
  v20 = 0LL;
  string = (HSTRING)L"Windows.Data.Xml.Dom.XmlDocument";
  v19 = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)&string);
  v4 = v19;
  v19 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = RoActivateInstance(*(_QWORD *)(v3 + 24), &v19);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
  v31 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v19)(
         v19,
         &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494,
         &v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  LODWORD(v17) = 3;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v7 = v22;
  v22 = 0LL;
  v20 = v7;
  v8 = (**v7)(v7, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, &v23);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL))(v23, v2);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v9);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v28[0] = off_1800CCC40;
  v28[1] = this;
  v29 = v28;
  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
    (__int64 *)&v20,
    &v24);
  v11 = v24;
  v12 = v25;
  if ( v24 != v25 )
  {
    v27 = &v17;
    do
    {
      NodeTileId = CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
                     v10,
                     &string,
                     v11);
      v14 = *v11;
      v17 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v21 = *NodeTileId;
      if ( !v29 )
        std::_Xbad_function_call();
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, HSTRING *))(*v29 + 16LL))(v29, &v17, &v21);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      WindowsDeleteString(string);
      string = 0LL;
      if ( !v15 )
        break;
      ++v11;
    }
    while ( v11 != v12 );
    v12 = v25;
    v11 = v24;
  }
  if ( v11 )
  {
    if ( v11 != v12 )
    {
      do
      {
        if ( *v11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 16LL))(*v11);
        ++v11;
      }
      while ( v11 != v12 );
      v11 = v24;
    }
    operator delete(v11);
  }
  if ( v29 )
  {
    v16 = v28;
    LOBYTE(v16) = v29 != v28;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v29 + 32LL))(v29, v16);
  }
  if ( v20 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
}
