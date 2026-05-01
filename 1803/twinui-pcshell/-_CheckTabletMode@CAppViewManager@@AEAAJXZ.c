/*
 * XREFs of ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x1801258B8
 * Callers:
 *     ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18011F660 (-DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z.c)
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppViewManager::_CheckTabletMode(IUnknown **this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  bool v6; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+48h] [rbp+10h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         this[15],
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 934LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return v3;
  }
  v2 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 938LL;
    goto LABEL_5;
  }
  v6 = v8 != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v6 ? 0x8007139F : 0;
}
