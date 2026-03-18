/*
 * XREFs of ?FixupTPPointerFlags@CPTPEngine@@AEAAXPEAIH@Z @ 0x1C0135DA8
 * Callers:
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::FixupTPPointerFlags(CPTPEngine *this, unsigned int *a2, int a3)
{
  if ( (*a2 & 0x40000) == 0 )
  {
    if ( a3 )
      *a2 = *a2 & 0xFFFCFFFF | 0x10000;
    *a2 |= 0x14u;
  }
  *a2 &= ~0x2000000u;
}
