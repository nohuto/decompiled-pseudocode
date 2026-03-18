/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0027F38 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C01715F0 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 * Callees:
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00D6A90 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E1C30 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
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
      goto LABEL_12;
    if ( a3 != 2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v9 + 24) = 7080LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( a3 )
    goto LABEL_6;
LABEL_12:
  if ( !*(_BYTE *)(a1 + 132) )
    return 1LL;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(v7 + 3760 * v3 + 1040) != 1 )
  {
    switch ( *(_DWORD *)(v7 + 3760 * v3 + 1040) )
    {
      case 2:
        goto LABEL_8;
      case 3:
        v6 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_8;
      case 4:
        v6 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_8;
    }
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 3760 * v3 + 1040);
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v10);
  }
  v6 = D3DKMDT_VPPR_IDENTITY;
LABEL_8:
  if ( a3 != 1 && (int)DmmEnumClientVidPnPathTargetsFromSource(*(DXGADAPTER **)(a1 + 16), v3, 0LL, &v11) >= 0 )
    return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v6, v11);
  return (unsigned int)v6;
}
