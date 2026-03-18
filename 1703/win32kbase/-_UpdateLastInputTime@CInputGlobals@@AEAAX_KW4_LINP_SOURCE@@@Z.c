/*
 * XREFs of ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C004949C
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00496E0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 * Callees:
 *     Template_qhq @ 0x1C00DC790 (Template_qhq.c)
 */

char __fastcall CInputGlobals::_UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  unsigned __int128 v5; // rax

  v3 = 0;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 > 0 && (a3 <= 4 || a3 == 8 || a3 == 10 || a3 > 11 && (a3 <= 13 || a3 == 15)) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x2000000000008000LL) != 0 )
  {
    LOBYTE(v5) = byte_1C0186D98 - 1;
    if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u && (qword_1C0186D80 & 0x2000000000008000LL) != 0 )
    {
      LOBYTE(v5) = 0;
      if ( (qword_1C0186D88 & 0x2000000000008000LL) == qword_1C0186D88 && giPowerOffTimeOutMs > 0 )
      {
        v5 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        if ( *((_QWORD *)&v5 + 1) - a2 > (unsigned __int64)giPowerOffTimeOutMs )
        {
          LOBYTE(v5) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          {
            LOBYTE(v3) = gProtocolType == 0;
            LOBYTE(v5) = Template_qhq(
                           giPowerOffTimeOutMs,
                           (unsigned int)&DisplayTimeoutResetEvent,
                           a2,
                           v3,
                           gProtocolType == 0,
                           giPowerOffTimeOutMs);
          }
        }
      }
    }
  }
  return v5;
}
