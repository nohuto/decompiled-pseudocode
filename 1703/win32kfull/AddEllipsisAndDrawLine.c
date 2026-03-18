/*
 * XREFs of AddEllipsisAndDrawLine @ 0x1C0239ACC
 * Callers:
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     DT_DrawJustifiedLine @ 0x1C0239CDC (DT_DrawJustifiedLine.c)
 *     NeedsEndEllipsis @ 0x1C023A4F0 (NeedsEndEllipsis.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(HDC a1, __int64 a2, void *a3, unsigned int a4, int a5, __int64 a6)
{
  char *v8; // rsi
  char *v9; // rbp
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD v14[4]; // [rsp+50h] [rbp-178h] BYREF
  char v15; // [rsp+70h] [rbp-158h] BYREF

  v8 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(a1, (unsigned __int16 *)a3, a5, a6) )
  {
    if ( (int)(a4 + 4) > 128 )
    {
      result = UserRtlAllocMem(2 * (a4 + 4));
      v8 = (char *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v14, (__int64)Win32FreePool);
      v9 = v8;
    }
    else
    {
      v9 = &v15;
    }
    memmove(v9, a3, 2LL * (int)a4);
    v11 = a4 + 3;
    *(_QWORD *)&v9[2 * a4] = 0x2E002E002ELL;
    a4 += 3;
  }
  else
  {
    v11 = a4;
  }
  DT_DrawJustifiedLine(a1, a5, a6);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v14[0];
    UserRtlFreeMem(v8);
    return a4;
  }
  return v11;
}
