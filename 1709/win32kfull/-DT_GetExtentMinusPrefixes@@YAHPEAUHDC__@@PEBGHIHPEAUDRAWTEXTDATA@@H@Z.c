/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B4DC (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C023B9A0 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     GetPrefixCount @ 0x1C023BD70 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // r14
  __int64 v15; // r8
  struct tagSIZE v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]

  v7 = a4;
  v8 = a3;
  v17 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v18 = ThreadWin32Thread;
  GetPrefixCount(a2, v8, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, v8, 0, v7, v15, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, v8, &v17);
  else
    GreGetTextExtentW(a1, a2, v8, &v17, 1);
  return (unsigned int)v17.cx;
}
