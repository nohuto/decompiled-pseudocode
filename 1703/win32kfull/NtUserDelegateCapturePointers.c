/*
 * XREFs of NtUserDelegateCapturePointers @ 0x1C01D7460
 * Callers:
 *     <none>
 * Callees:
 *     ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01D5C68 (-DelegateCapturePointersMitOff@@YAHIPEAI0@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01D5E3C (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 */

__int64 __fastcall NtUserDelegateCapturePointers(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 result; // rax

  if ( (gdwMitConfig & 4) != 0 )
    LODWORD(result) = DelegateCapturePointersMitOn(a1, a2, a3);
  else
    LODWORD(result) = DelegateCapturePointersMitOff(a1, a2, a3);
  return (int)result;
}
