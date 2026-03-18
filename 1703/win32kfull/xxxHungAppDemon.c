/*
 * XREFs of xxxHungAppDemon @ 0x1C0049F40
 * Callers:
 *     <none>
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0049970 (zzzCalcStartCursorHide.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C004A1EC (IdleTimerProc.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 */

__int64 xxxHungAppDemon()
{
  __int64 result; // rax
  unsigned int v1; // edi
  struct tagVWPL *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= gtimeStartCursorHide )
    zzzCalcStartCursorHide(0LL, 0);
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
        if ( (unsigned int)IsHungWindow(v2, gpvwplHungRedraw) )
        {
          v4 = gptiCurrent;
          v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v5;
          v5[1] = v2;
          ++*((_DWORD *)v2 + 2);
          if ( (*((_BYTE *)v2 + 59) & 0x10) != 0 )
          {
            ClearHungFlag(v2);
            ProcessHungWindow(v2);
          }
          if ( (*((_BYTE *)v2 + 59) & 8) != 0 )
          {
            ClearHungFlag(v2);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v4, v3);
        }
      }
    }
  }
  return result;
}
