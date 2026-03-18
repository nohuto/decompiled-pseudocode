/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B204
 * Callers:
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B414 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C023B9A0 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        HDC a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  unsigned __int16 *v7; // r14
  unsigned __int16 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int16 *v10; // rbp
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 ThreadWin32Thread; // rax
  int v19; // [rsp+30h] [rbp-198h]
  int v20; // [rsp+40h] [rbp-188h] BYREF
  int v21; // [rsp+48h] [rbp-180h]
  _QWORD v22[4]; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int16 v23; // [rsp+70h] [rbp-158h] BYREF

  v7 = a3;
  v21 = a2;
  v8 = 0LL;
  v20 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(a1, v7, &v20, a6, a5, a6, v19) )
  {
    v9 = v20;
    if ( v20 + 4 > 128 )
    {
      result = UserRtlAllocMem((unsigned int)(2 * (v20 + 4)));
      v8 = (unsigned __int16 *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v22, (__int64)Win32FreePool, v12);
      v10 = v8;
    }
    else
    {
      v10 = &v23;
    }
    v13 = v9;
    memmove(v10, v7, 2 * v9);
    v14 = v9 + 3;
    *(_QWORD *)&v10[v13] = 0x2E002E002ELL;
    v7 = v10;
    v20 = v14;
  }
  else
  {
    v14 = v20;
  }
  DT_DrawJustifiedLine(a1, v21, v7, v14, a5, a6, v19);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
    UserRtlFreeMem(v8);
    return (unsigned int)v20;
  }
  return v14;
}
