/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0022E14 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00A1234 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E6BB0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // esi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned int)a2;
  v5 = a3;
  v7 = D3DKMDT_VPPR_ROTATE90;
  if ( (_DWORD)a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 133) )
      return 1LL;
  }
  else
  {
    if ( !(_DWORD)a3 )
      goto LABEL_12;
    if ( (_DWORD)a3 != 2 )
    {
      v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v10 + 24) = 6417LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( v5 )
    goto LABEL_6;
LABEL_12:
  if ( !*(_BYTE *)(a1 + 133) )
    return 1LL;
LABEL_6:
  v8 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(v8 + 3208 * v4 + 1000) != 1 )
  {
    switch ( *(_DWORD *)(v8 + 3208 * v4 + 1000) )
    {
      case 2:
        goto LABEL_8;
      case 3:
        v7 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_8;
      case 4:
        v7 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_8;
    }
    v11 = WdLogNewEntry5_WdError(v8, (unsigned int)(*(_DWORD *)(v8 + 3208 * v4 + 1000) - 3));
    *(_QWORD *)(v11 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 3208 * v4 + 1000);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v11);
  }
  v7 = D3DKMDT_VPPR_IDENTITY;
LABEL_8:
  if ( v5 != 1
    && (int)DmmEnumClientVidPnPathTargetsFromSource(*(DXGADAPTER **)(a1 + 16), (unsigned int)v4, 0LL, &v12) >= 0 )
  {
    return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v7, v12);
  }
  return (unsigned int)v7;
}
