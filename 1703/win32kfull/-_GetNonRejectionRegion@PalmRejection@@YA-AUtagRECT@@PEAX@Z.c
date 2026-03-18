/*
 * XREFs of ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01D40B0
 * Callers:
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C01D4120 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 *     GetUserHandedness @ 0x1C011B5E0 (GetUserHandedness.c)
 */

struct tagRECT *__fastcall PalmRejection::_GetNonRejectionRegion(
        PalmRejection *this,
        struct _LIST_ENTRY *__return_ptr retstr,
        void *a3)
{
  unsigned int v4; // ebx
  int UserHandedness; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  bool v8; // zf
  int v9; // eax

  v4 = 0;
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = 0;
  GetPointerDeviceRects(retstr, this, 0LL);
  UserHandedness = GetUserHandedness();
  v6 = gPalmRejectHEdgeThr;
  v7 = 1 - gPalmRejectHEdgeThr;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) += v7;
  if ( UserHandedness == 1 )
    v4 = gPalmRejectVEdgeThr;
  v8 = UserHandedness == 2;
  v9 = *((_DWORD *)this + 2);
  *(_DWORD *)this = v4;
  if ( v8 )
    v9 -= v6;
  *((_DWORD *)this + 2) = v9 + 1;
  return (struct tagRECT *)this;
}
