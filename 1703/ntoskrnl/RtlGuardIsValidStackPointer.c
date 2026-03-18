/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x14053B230
 * Callers:
 *     KeVerifyContextRecord @ 0x1400FCA70 (KeVerifyContextRecord.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1, _QWORD *Teb)
{
  if ( !Teb )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
  }
  return a1 >= Teb[2] && a1 <= Teb[1];
}
