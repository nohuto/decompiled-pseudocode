/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00D7760
 * Callers:
 *     xxxClientShutdown @ 0x1C00D76D8 (xxxClientShutdown.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DestroyWindowsTimers @ 0x1C00D78A4 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  __int64 v5; // r15
  int v6; // r13d
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rcx
  BOOL v10; // edi
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (unsigned __int64 *)((char *)a1 + 32);
  v5 = a3 & 0x108;
  v6 = a2;
  while ( 1 )
  {
    if ( *v4 == 1 )
      return 1LL;
    LOBYTE(a2) = 1;
    v7 = HMValidateHandleNoSecure(*v4, a2, a3, a4);
    if ( v7 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v12;
      v12[1] = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( v6 == 17 )
      {
        v10 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v7) != 0;
      }
      else
      {
        xxxSendMessage(v7);
        v10 = 1;
        if ( v5 == 264 )
          DestroyWindowsTimers(v7);
      }
      ThreadUnlock1(ThreadWin32Thread, v8);
      if ( !v10 )
        break;
    }
    ++v4;
  }
  return 3LL;
}
