/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C008B970
 * Callers:
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C008A3AC (DecomposeWindowIfNeeded.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v10, 0, 0x3CuLL);
    v10[0] = 3932180;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741846;
    *(_QWORD *)&v10[11] = a2;
    v10[13] = a3;
    v10[14] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
