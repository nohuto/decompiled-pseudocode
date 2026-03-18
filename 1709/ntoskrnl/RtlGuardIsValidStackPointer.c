/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x14049DA80
 * Callers:
 *     KeVerifyContextRecord @ 0x14006A690 (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1, _QWORD *Teb)
{
  if ( !Teb )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
  }
  return a1 >= Teb[2] && a1 <= Teb[1];
}
