/*
 * XREFs of ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C019DB68
 * Callers:
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

void __fastcall UpdateMouseButtonTarget(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        __int64 *a5)
{
  __int64 v8; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  struct tagPOINT v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)DetermineInputTargetPrecedenceTransform((__int64)a1, v10) )
    {
      v8 = v10[0];
      *a4 = v11;
      if ( v8 )
        TransformVector(v8, (_DWORD)a4, (_DWORD)a4 + 4, 0, 1);
    }
    else if ( ((*((_BYTE *)a2 + 368) ^ *((_BYTE *)a1 + 368)) & 0xF) != 0 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
      PhysicalToLogicalDPIPoint(a4, &v11, MonitorFlagsFromWindow, 0LL);
    }
    *a5 = LOWORD(a4->x) | (LOWORD(a4->y) << 16);
  }
}
