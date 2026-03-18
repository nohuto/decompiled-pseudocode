/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C023A83C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // r8d
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp

  v5 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v7 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = a1 >> 16;
    v9 = gSharedInfo[1] + (unsigned int)(v7 * LODWORD(gSharedInfo[2]));
    v10 = 3 * ((__int64)(unsigned int)(v7 * LODWORD(gSharedInfo[2])) >> 5);
    if ( ((_WORD)v8 == *(_WORD *)(v9 + 26) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6))
      && *(_BYTE *)(v9 + 24) == 1 )
    {
      return *(_QWORD *)(gpKernelHandleTable + 8 * v10);
    }
  }
  return v5;
}
