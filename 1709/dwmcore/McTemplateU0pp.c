/*
 * XREFs of McTemplateU0pp @ 0x18016A584
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800912CC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9094 (-PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?PostScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801A91D4 (-PostScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230 (-PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?PreScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@AEBUtagRECT@@@Z @ 0x1801A9380 (-PreScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0pp(__int64 a1, EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-48h] BYREF
  va_list v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  va_list v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(v4, va);
  v6 = 0;
  v5 = 8;
  va_copy(v7, va1);
  v9 = 0;
  v8 = 8;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, 3u, &v3);
}
