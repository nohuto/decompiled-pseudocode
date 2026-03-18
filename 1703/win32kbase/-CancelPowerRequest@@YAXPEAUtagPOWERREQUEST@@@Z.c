/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00D6170
 * Callers:
 *     CleanupPowerRequestList @ 0x1C0063C90 (CleanupPowerRequestList.c)
 * Callees:
 *     EtwTraceCompletePowerRequest @ 0x1C0064D00 (EtwTraceCompletePowerRequest.c)
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1, __int64 a2, __int64 a3)
{
  *((_DWORD *)a1 + 14) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_xq(a1, &CanceledPowerRequest, a3, a1, -1073741536);
  if ( *((_QWORD *)a1 + 8) )
  {
    EtwTraceCompletePowerRequest((__int64)a1, *((_DWORD *)a1 + 14), a3);
    Win32FreePool((__int64)a1);
  }
  else
  {
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  }
}
