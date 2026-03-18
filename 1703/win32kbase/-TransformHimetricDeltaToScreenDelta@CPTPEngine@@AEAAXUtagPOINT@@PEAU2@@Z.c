/*
 * XREFs of ?TransformHimetricDeltaToScreenDelta@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C0138574
 * Callers:
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 */

void __fastcall CPTPEngine::TransformHimetricDeltaToScreenDelta(
        CPTPEngine *this,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  INT y; // rbx^4
  INT v6; // eax
  INT v7; // edx
  INT v8; // r8d

  y = a2.y;
  v6 = EngMulDiv(a2.x, *((_DWORD *)this + 18) - *((_DWORD *)this + 16), *((_DWORD *)this + 22));
  v7 = *((_DWORD *)this + 19) - *((_DWORD *)this + 17);
  v8 = *((_DWORD *)this + 23);
  a3->x = v6;
  a3->y = EngMulDiv(y, v7, v8);
}
