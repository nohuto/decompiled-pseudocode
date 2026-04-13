/*
 * XREFs of ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008A30C
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18008D070 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
        __int64 a1,
        HSTRING *a2,
        _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  UINT32 v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v15[1] = -2LL;
  v15[2] = a2;
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 128LL))(*a3, &v14);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v13 = 0LL;
  v5 = v14;
  v6 = -1LL;
  do
    ++v6;
  while ( aTileid[v6] );
  v7 = -1;
  if ( v6 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v7 = v6;
  WindowsCreateStringReference(L"TileID", v7, &hstringHeader, &string);
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, string, &v13);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  *a2 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v13)(
         v13,
         &GUID_ac144aa4_b4f1_4db6_b206_8a22c308db0a,
         v15);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = v15[0];
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 64LL))(v10, a2);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v11);
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return a2;
}
