/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0045418
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rdx

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 88LL) <= v2[22] && v3[24] >= v2[24] && v3[23] <= v2[23] && v3[25] >= v2[25];
}
