/*
 * XREFs of ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C013B8FC
 * Callers:
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0139A88 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::SuppressContactForMultiFingerTap(CPTPEngine *this, const struct CContactState *a2)
{
  return (*(_DWORD *)a2 & 0x80u) != 0 && (*(_DWORD *)a2 & 0x800000) != 0
      || *((_DWORD *)this + 774) > *((_DWORD *)a2 + 33);
}
