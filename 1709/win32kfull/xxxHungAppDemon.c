/*
 * XREFs of xxxHungAppDemon @ 0x1C0088D20
 * Callers:
 *     <none>
 * Callees:
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C0088FCC (IdleTimerProc.c)
 *     zzzCalcStartCursorHide @ 0x1C0089210 (zzzCalcStartCursorHide.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 */

__int64 xxxHungAppDemon()
{
  __int64 result; // rax
  unsigned int v1; // edi
  struct tagVWPL *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= gtimeStartCursorHide )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( *(_QWORD *)(result + 16) )
    {
      v1 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = (__int64)gpvwplHungRedraw;
        if ( !gpvwplHungRedraw || *((_DWORD *)gpvwplHungRedraw + 3) )
          break;
        if ( v1 >= *(_DWORD *)gpvwplHungRedraw )
          goto LABEL_21;
        result = v1 + 1;
        if ( gpvwplHungRedraw[2 * v1 + 3] != v2 )
          result = v1;
        v1 = result;
        if ( (unsigned int)result >= *(_DWORD *)gpvwplHungRedraw )
        {
LABEL_21:
          v1 = 0;
          v2 = 0LL;
        }
        else
        {
          _mm_lfence();
          result = 2LL * (unsigned int)result;
          v2 = gpvwplHungRedraw[2 * v1 + 3];
        }
        if ( !v2 )
          break;
        if ( (unsigned int)IsHungWindow(v2) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v6[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          v5 = v6;
          *(_QWORD *)(ThreadWin32Thread + 392) = v6;
          v6[1] = v2;
          _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
          if ( (*((_BYTE *)v2 + 59) & 0x10) != 0 )
          {
            ClearHungFlag(v2, 784);
            ProcessHungWindow(v2);
          }
          if ( (*((_BYTE *)v2 + 59) & 8) != 0 )
          {
            ClearHungFlag(v2, 776);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v5, v4);
        }
      }
    }
  }
  return result;
}
