/*
 * XREFs of ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C01381E8
 * Callers:
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::SuppressContactForMultiFingerTap(CPTPEngine *this, const struct CContactState *a2)
{
  return (*(_DWORD *)a2 & 0x100) != 0 && (*(_DWORD *)a2 & 0x1000000) != 0;
}
