/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00074AC (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00F5C4C (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00AC358 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v6 = D3DKMDT_VPPR_ROTATE90;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 132) )
      return 1LL;
  }
  else
  {
    if ( !a3 )
      goto LABEL_3;
    if ( a3 != 2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v9 + 24) = 7066LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( !a3 )
  {
LABEL_3:
    if ( *(_BYTE *)(a1 + 132) )
      goto LABEL_4;
    return 1LL;
  }
LABEL_4:
  v7 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(v7 + 3760 * v3 + 1040) != 1 )
  {
    switch ( *(_DWORD *)(v7 + 3760 * v3 + 1040) )
    {
      case 2:
        goto LABEL_6;
      case 3:
        v6 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_6;
      case 4:
        v6 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_6;
    }
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 3760 * v3 + 1040);
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v10);
  }
  v6 = D3DKMDT_VPPR_IDENTITY;
LABEL_6:
  if ( a3 != 1 && (int)DmmEnumClientVidPnPathTargetsFromSource(*(void *const *)(a1 + 16), v3, 0LL, &v11) >= 0 )
    return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v6, v11);
  return (unsigned int)v6;
}
