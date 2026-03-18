/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C02390F4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = a1 >> 16;
    v7 = gSharedInfo[1] + (unsigned int)(v5 * LODWORD(gSharedInfo[2]));
    v8 = gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v5 * LODWORD(gSharedInfo[2])) >> 5);
    if ( ((_WORD)v6 == *(_WORD *)(v7 + 26)
       || (_WORD)v6 == 0xFFFF
       || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v3, gpsi, v5, v4))
      && *(_BYTE *)(v7 + 24) == 1 )
    {
      return *(_QWORD *)v8;
    }
  }
  return v2;
}
