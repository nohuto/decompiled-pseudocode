/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C023A900
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbp

  v5 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v7 = (unsigned __int16)a1;
  v8 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = gSharedInfo[1];
    v9 = v8 + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v10 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v9 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v9 + 25) & 1) == 0
      && *(_BYTE *)(v9 + 24) == 11 )
    {
      v5 = *(_QWORD *)(gpKernelHandleTable + 8 * v10);
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v7, v6) + 464) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v5;
  return v5;
}
