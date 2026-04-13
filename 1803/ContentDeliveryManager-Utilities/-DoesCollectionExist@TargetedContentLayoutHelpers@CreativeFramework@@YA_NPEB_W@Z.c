/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x180098704
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x180098D10 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082C00 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  bool v14; // bl
  bool v16[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  int v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v21[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v21[1] = (const WCHAR *)-2LL;
  v21[0] = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v20);
  v2 = v20;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, v21);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool *))(*(_QWORD *)v2 + 80LL))(v2, *(_QWORD *)(v3 + 24), v16);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v4);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v9);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v5 = !v16[0];
  if ( !v16[0] )
    goto LABEL_13;
  v17 = 0LL;
  v6 = v20;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, v21);
  v8 = v17;
  v17 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 56LL))(v6, *(_QWORD *)(v7 + 24), &v17);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_17;
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 104LL))(v17, &v19);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_18;
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v18);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800988ECLL);
  }
  v16[0] = v18 != 0;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v5 = !v16[0];
LABEL_13:
  v14 = !v5;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v14;
}
