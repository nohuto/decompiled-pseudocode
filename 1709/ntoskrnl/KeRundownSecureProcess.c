/*
 * XREFs of KeRundownSecureProcess @ 0x140202FB4
 * Callers:
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x1406B4124 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 720) )
    return VslRundownSecureProcess();
  return result;
}
