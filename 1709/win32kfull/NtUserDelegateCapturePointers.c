/*
 * XREFs of NtUserDelegateCapturePointers @ 0x1C01E3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01E2468 (-DelegateCapturePointersMitOff@@YAHIPEAI0@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01E2614 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
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
