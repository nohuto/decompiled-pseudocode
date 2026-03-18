/*
 * XREFs of ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00162E8
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0015FC8 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 */

void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  __int16 v6; // r9
  int v7; // r10d
  char v8; // r8
  __int64 v9; // rax

  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  v6 = *((_WORD *)a2 + 1);
  v7 = (*((_DWORD *)a2 + 14) >> 4) & 1;
  v8 = v7 | 2;
  v9 = *((unsigned int *)a2 + 5);
  if ( (v6 & 0x80u) == 0 )
    v8 = v7;
  if ( (v6 & 1) != 0 )
    CMouseProcessor::GetMouseCoordinateAbsolute(
      (__int64)this,
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      v6,
      a3,
      a4,
      *((_QWORD *)a2 + 5),
      v9,
      v8);
  else
    CMouseProcessor::GetMouseCoordinateRelative(
      this,
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      a3,
      a4,
      *((_QWORD *)a2 + 5),
      v9,
      v8);
}
