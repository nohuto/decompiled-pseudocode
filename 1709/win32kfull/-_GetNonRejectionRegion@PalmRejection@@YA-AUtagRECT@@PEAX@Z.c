/*
 * XREFs of ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01E052C
 * Callers:
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C01E0594 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     GetUserHandedness @ 0x1C0125620 (GetUserHandedness.c)
 */

struct tagRECT *__fastcall PalmRejection::_GetNonRejectionRegion(
        PalmRejection *this,
        struct tagRECT *__return_ptr retstr,
        void *a3)
{
  int UserHandedness; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  bool v7; // zf
  int v8; // eax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  GetPointerDeviceRects((__int64)retstr, this, 0LL);
  UserHandedness = GetUserHandedness();
  v5 = gPalmRejectHEdgeThr;
  v6 = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) += 1 - v5;
  if ( UserHandedness == 1 )
    v6 = gPalmRejectVEdgeThr;
  v7 = UserHandedness == 2;
  v8 = *((_DWORD *)this + 2);
  *(_DWORD *)this = v6;
  if ( v7 )
    v8 -= v5;
  *((_DWORD *)this + 2) = v8 + 1;
  return (struct tagRECT *)this;
}
