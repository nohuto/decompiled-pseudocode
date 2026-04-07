/*
 * XREFs of ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180007880
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180001998 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___ @ 0x18000CA78 (CTransitionVisualController--ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___.c)
 */

void __fastcall CTransitionVisualController::GetOwnedInclusiveClipRect(
        CTransitionVisualController *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct tagRECT **v5; // [rsp+38h] [rbp+10h] BYREF
  struct tagRECT *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a3 = a2[3];
  v4 = *((_QWORD *)this + 12);
  if ( v4 != -1 || (unsigned int)GetDesktopID(1LL, &v4) )
  {
    LOBYTE(a3) = 1;
    v5 = &v6;
    CTransitionVisualController::ForEachOwnedWindow__lambda_22fca495aa2a21adbf46ac02ecb94f06___(a2, &v5, a3);
  }
}
