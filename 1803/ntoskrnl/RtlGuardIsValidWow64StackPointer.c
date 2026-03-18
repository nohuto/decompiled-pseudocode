/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x140564704
 * Callers:
 *     KeVerifyContextRecord @ 0x1401322F4 (KeVerifyContextRecord.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1, __int64 Teb)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  if ( !Teb )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (__int64)KeGetCurrentThread()->Teb;
  }
  v2 = Teb + 0x2000;
  v3 = -Teb;
  return a1 >= *(_DWORD *)((v2 & -(__int64)(v3 != 0)) + 8) && a1 <= *(_DWORD *)((v2 & -(__int64)(v3 != 0)) + 4);
}
