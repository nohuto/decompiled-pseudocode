/*
 * XREFs of KeRundownSecureProcess @ 0x1401FD188
 * Callers:
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  return VslRundownSecureProcess(*(_QWORD *)(a1 + 720));
}
