/*
 * XREFs of KeRundownSecureProcess @ 0x14024062C
 * Callers:
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140718D54 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 720) )
    return VslRundownSecureProcess();
  return result;
}
