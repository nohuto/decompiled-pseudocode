/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047130
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00473CC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01311E4 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 * Callees:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C004704C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        int a6,
        __int64 a7,
        char a8)
{
  char v9; // r9
  _WORD *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 result; // rax
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v14, &v15);
  a4->x += v14;
  a4->y += v15;
  v9 = gptInd;
  v10 = gpsi;
  v11 = 3LL * (unsigned int)gptInd;
  *((_DWORD *)&gaptMouse + 2 * v11) = LOWORD(a4->x) | ((unsigned __int16)(*((_WORD *)gpsi + 1096) - 1) << 16);
  v12 = a6;
  *((_DWORD *)&gaptMouse + 2 * v11 + 1) = LOWORD(a4->y) | ((unsigned __int16)(v10[1098] - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v11 + 2) = v12;
  *((_QWORD *)&gaptMouse + v11 + 2) = a7;
  result = (v9 + 1) & 0x3F;
  gptInd = (v9 + 1) & 0x3F;
  return result;
}
