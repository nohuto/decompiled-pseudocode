/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C001C6B0
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C001C558 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v10 + 2, 0, 0x3AuLL);
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
