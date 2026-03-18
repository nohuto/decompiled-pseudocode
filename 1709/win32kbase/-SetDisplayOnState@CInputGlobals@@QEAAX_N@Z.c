/*
 * XREFs of ?SetDisplayOnState@CInputGlobals@@QEAAX_N@Z @ 0x1C0129F80
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::SetDisplayOnState(CInputGlobals *this, char a2)
{
  RIMLockExclusive((__int64)this);
  *((_BYTE *)this + 98) = a2;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
