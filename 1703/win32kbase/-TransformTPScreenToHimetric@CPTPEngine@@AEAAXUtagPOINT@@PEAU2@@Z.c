/*
 * XREFs of ?TransformTPScreenToHimetric@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C01385D0
 * Callers:
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 */

void __fastcall CPTPEngine::TransformTPScreenToHimetric(CPTPEngine *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  LONG y; // rbx^4

  y = a2.y;
  a3->x = EngMulDiv(
            a2.x - *((_DWORD *)this + 16),
            *((_DWORD *)this + 22),
            *((_DWORD *)this + 18) - *((_DWORD *)this + 16));
  a3->y = EngMulDiv(y - *((_DWORD *)this + 17), *((_DWORD *)this + 23), *((_DWORD *)this + 19) - *((_DWORD *)this + 17));
}
