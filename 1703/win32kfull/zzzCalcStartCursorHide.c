/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C0049970
 * Callers:
 *     xxxHungAppDemon @ 0x1C0049F40 (xxxHungAppDemon.c)
 *     xxxGetInputEvent @ 0x1C004C770 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     zzzWakeInputIdle @ 0x1C005B6D8 (zzzWakeInputIdle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzShowStartGlass @ 0x1C01B2820 (zzzShowStartGlass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, int a2)
{
  unsigned __int64 v2; // r9
  struct _W32PROCESS *v3; // rcx
  struct _W32PROCESS **v4; // r8
  __int64 v5; // rdx
  unsigned int v7; // r11d
  struct _W32PROCESS *v8; // rax

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      v8 = gpwpCalcFirst;
      if ( gpwpCalcFirst )
      {
        while ( v8 != (struct _W32PROCESS *)a1 )
        {
          v8 = (struct _W32PROCESS *)*((_QWORD *)v8 + 4);
          if ( !v8 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        if ( v8 != (struct _W32PROCESS *)a1 )
        {
          *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
          gpwpCalcFirst = (struct _W32PROCESS *)a1;
        }
      }
    }
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v2 + a2;
  }
  v3 = gpwpCalcFirst;
  v4 = &gpwpCalcFirst;
  v5 = 0LL;
  gtimeStartCursorHide = 0;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      if ( (*((_DWORD *)v3 + 3) & 6) != 4 )
        goto LABEL_11;
      v7 = *((_DWORD *)v3 + 6);
      if ( (unsigned int)v5 < v7 )
        v5 = v7;
      if ( (int)(v2 - v7) > 0 )
        break;
      v4 = (struct _W32PROCESS **)((char *)v3 + 32);
LABEL_12:
      v3 = *v4;
      if ( !*v4 )
      {
        gtimeStartCursorHide = v5;
        if ( (unsigned int)v5 > (unsigned int)v2 )
          return zzzUpdateCursorImage(v3, v5);
        goto LABEL_3;
      }
    }
    *((_DWORD *)v3 + 3) &= ~4u;
LABEL_11:
    *v4 = (struct _W32PROCESS *)*((_QWORD *)v3 + 4);
    goto LABEL_12;
  }
LABEL_3:
  gtimeStartCursorHide = 0;
  return zzzUpdateCursorImage(v3, v5);
}
