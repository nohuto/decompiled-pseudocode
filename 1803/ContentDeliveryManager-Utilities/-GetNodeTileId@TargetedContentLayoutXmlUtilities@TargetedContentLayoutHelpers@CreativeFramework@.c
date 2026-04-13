/*
 * XREFs of ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800976C4
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009A678 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17[1] = -2LL;
  v17[2] = a2;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 128LL))(*a3, &v16);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  v15 = 0LL;
  v5 = v16;
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
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, string, &v15);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  *a2 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(
          v15,
          &GUID_ac144aa4_b4f1_4db6_b206_8a22c308db0a,
          v17);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v10);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v11 = v17[0];
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 64LL))(v11, a2);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_20;
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return a2;
}
