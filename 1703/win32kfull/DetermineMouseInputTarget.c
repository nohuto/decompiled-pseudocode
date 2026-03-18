/*
 * XREFs of DetermineMouseInputTarget @ 0x1C005F7F4
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C005F6F0 (EditionMouseSpeedHitTest.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01065A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

__int64 __fastcall DetermineMouseInputTarget(
        struct tagPOINT *a1,
        struct _SUBPIXELS *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6)
{
  int v6; // esi
  int v7; // edi
  __int64 v8; // rbx
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = (int)a2;
  v7 = (int)a1;
  if ( (a6 & 1) != 0 )
    return xxxSpeedHitTest(a5, 4u, a1, a2, 0LL, 0LL);
  if ( gspwndMouseOwner )
  {
    PhysicalToLogicalDPIPointWithHitTest(a1, a1, a2);
    return gspwndMouseOwner;
  }
  else
  {
    v8 = gspwndInternalCapture;
    if ( !gspwndInternalCapture )
      return xxxSpeedHitTest(a5, 4u, a1, a2, 0LL, 0LL);
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent)
      && (unsigned int)DetermineInputTargetPrecedenceTransform(v10, v11) )
    {
      if ( v11[0] )
      {
        TransformVector(v11[0], v7, v7 + 4, v6, 1);
        v8 = gspwndInternalCapture;
      }
    }
    return *(_QWORD *)v8;
  }
}
