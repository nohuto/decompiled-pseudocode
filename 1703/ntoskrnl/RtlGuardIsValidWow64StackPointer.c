/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x14042413C
 * Callers:
 *     KeVerifyContextRecord @ 0x1400FCA70 (KeVerifyContextRecord.c)
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1, void *Teb)
{
  if ( !Teb )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
  }
  return a1 >= *(_DWORD *)((((unsigned __int64)Teb + 0x2000) & -(__int64)(Teb != 0LL)) + 8)
      && a1 <= *(_DWORD *)((((unsigned __int64)Teb + 0x2000) & -(__int64)(Teb != 0LL)) + 4);
}
