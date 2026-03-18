/*
 * XREFs of DT_DrawStr @ 0x1C0239DA0
 * Callers:
 *     DT_DrawJustifiedLine @ 0x1C0239CDC (DT_DrawJustifiedLine.c)
 * Callees:
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0200C88 (xxxClientLpkDrawTextEx.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C0239ED0 (DT_GetExtentMinusPrefixes.c)
 */

__int64 __fastcall DT_DrawStr(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  unsigned int v13; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-48h]

  v13 = a2 - 1;
  if ( (GreGetLayout(a1) & 1) == 0 )
    v13 = a2;
  if ( *(_DWORD *)(a8 + 60) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    result = CALL_LPK(ThreadWin32Thread);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v13, a3, a4, a5, a6, a7, a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v16 = a5;
      (*(void (__fastcall **)(HDC, _QWORD, _QWORD, WCHAR *))(a8 + 48))(a1, v13, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v16, a8, a9) - *(_DWORD *)(a8 + 56);
  }
  return result;
}
