/*
 * XREFs of KiMcheckAlternateReturn @ 0x14020E930
 * Callers:
 *     KxMcheckAlternateReturn @ 0x14018F800 (KxMcheckAlternateReturn.c)
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x140762DF0 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x140762FB4 (WheaTerminateProcess.c)
 */

__int64 __fastcall KiMcheckAlternateReturn(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*a1 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    WheaAttemptPhysicalPageOffline(*((_QWORD *)a1 + 1) >> 12, 0LL, a3);
  }
  result = *a1;
  if ( (result & 8) != 0 )
    return WheaTerminateProcess();
  return result;
}
