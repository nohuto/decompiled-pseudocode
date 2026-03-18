/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C02391A8
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 *v5; // rsi

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v4 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v5 = (__int64 *)(gpKernelHandleTable
                   + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5));
    if ( (WORD1(a1) == *(_WORD *)(v4 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL, gpsi, (unsigned __int16)a1, v3))
      && (*(_BYTE *)(v4 + 25) & 1) == 0
      && *(_BYTE *)(v4 + 24) == 11 )
    {
      v2 = *v5;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v2;
  return v2;
}
