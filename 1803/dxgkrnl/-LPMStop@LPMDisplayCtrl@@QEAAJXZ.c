/*
 * XREFs of ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A82A8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C01A7B00 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01A816C (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C01A7970 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::LPMStop(PFILE_OBJECT *FileObject)
{
  _BYTE InputBuffer[24]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v4; // [rsp+58h] [rbp-10h]
  int v5; // [rsp+70h] [rbp+8h] BYREF
  char v6; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_DWORD *)FileObject + 8) )
    return 3221225659LL;
  v4 = 0LL;
  InputBuffer[0] = 0;
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212010, InputBuffer, 0x20u, &v6, 4u, 0LL);
  v5 = 0;
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212018, &v5, 4u, 0LL, 0, 0LL);
  *((_DWORD *)FileObject + 9) = 0;
  qword_1C007AED8 = 0LL;
  return 0LL;
}
