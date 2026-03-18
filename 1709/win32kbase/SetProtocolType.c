/*
 * XREFs of SetProtocolType @ 0x1C0078110
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011690 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     RetrieveCurrentDisplayState @ 0x1C00A6628 (RetrieveCurrentDisplayState.c)
 */

__int64 __fastcall SetProtocolType(__int16 a1)
{
  __int64 result; // rax

  if ( !gProtocolType && gSqmIsOptedIn )
    result = SqmPowerState();
  gProtocolType = a1;
  if ( !a1 )
  {
    RetrieveCurrentDisplayState();
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C0190FDC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
