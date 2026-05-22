/*
 * XREFs of ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AC844 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AD3EC (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800ACC54 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800AD6DC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800ADEDC (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800ADF7C (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800AE140 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x1800AE2EC (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 *     ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800AE46C (-ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ.c)
 */

void __fastcall ManipulationInjector::StartManipulation(__int64 a1, int a2, POINT a3, unsigned int a4)
{
  struct tagRECT *v8; // rbp
  const char *v9; // r9
  void *v10; // rcx
  bool v11; // zf
  struct tagPOINT *v12; // r14
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  bool v17; // r8
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // edx
  ManipulationInjector *v22; // rcx
  unsigned int v23; // eax
  struct tagRECT v24; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) == 128 )
    ManipulationInjector::EndManipulationInternal((ManipulationInjector *)a1, 0, 1);
  if ( (unsigned int)(a2 - 1) > 0x7F
    || (v8 = (struct tagRECT *)(a1 + 64), !PtInRect((const RECT *)(a1 + 64), a3))
    || *(_DWORD *)(a1 + 88) )
  {
    v23 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)v23);
    JUMPOUT(0x1800ACB78LL);
  }
  v10 = *(void **)(a1 + 784);
  if ( v10 && !ResetEvent(v10) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x178,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v9);
    __debugbreak();
  }
  v11 = *(_DWORD *)(a1 + 48) == 0;
  v12 = (struct tagPOINT *)(a1 + 80);
  *(POINT *)(a1 + 80) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 740) = 0;
  if ( !v11 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x181,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v9);
    __debugbreak();
  }
  v13 = a2 - 1;
  if ( !v13 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_PAN\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v18 = *(_DWORD *)(a1 + 16);
    goto LABEL_30;
  }
  v14 = v13 - 15;
  if ( !v14 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_INCREASING\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v19 = *(_DWORD *)(a1 + 24);
    goto LABEL_23;
  }
  v15 = v14 - 16;
  if ( !v15 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_DECREASING\n");
    ManipulationInjector::ValidateInjectionRectForPanZoom((ManipulationInjector *)a1);
    v19 = *(_DWORD *)(a1 + 32);
LABEL_23:
    v20 = *(_DWORD *)(a1 + 16) + v19;
    v24 = *v8;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v24, v20);
    ManipulationInjector::AddZoomContacts((ManipulationInjector *)a1, a4);
    goto LABEL_32;
  }
  v16 = v15 - 32;
  if ( v16 )
  {
    if ( v16 != 64 )
      goto LABEL_32;
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_HOVER\n");
    v24 = *v8;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v24, 0);
    v17 = 1;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("INTERACTION_TYPE_DRAG\n");
  v18 = 0;
LABEL_30:
  v24 = *v8;
  ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v24, v18);
  v17 = 0;
LABEL_31:
  ManipulationInjector::AddContact((ManipulationInjector *)a1, *v12, v17, a4);
LABEL_32:
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("StartManipulation (%d, %d)\n", v12->x, *(_DWORD *)(a1 + 84));
  ManipulationInjector::InjectAndScrub((ManipulationInjector *)a1);
  if ( ((*(_DWORD *)(a1 + 88) - 16) & 0xFFFFFFEF) == 0 )
  {
    ManipulationInjector::UpdateZoomContactsForThreshold((ManipulationInjector *)a1, v21);
    ManipulationInjector::InjectAndScrub(v22);
  }
}
