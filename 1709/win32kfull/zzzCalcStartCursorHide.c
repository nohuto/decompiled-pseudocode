/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C0089210
 * Callers:
 *     zzzWakeInputIdle @ 0x1C0048C68 (zzzWakeInputIdle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxGetInputEvent @ 0x1C0086730 (xxxGetInputEvent.c)
 *     xxxHungAppDemon @ 0x1C0088D20 (xxxHungAppDemon.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     zzzShowStartGlass @ 0x1C01B5830 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  struct _W32PROCESS **v3; // rdx
  struct _W32PROCESS *v4; // rcx
  int v6; // r9d
  unsigned int v7; // r10d
  struct _W32PROCESS *i; // rax

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_19;
      }
      *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
      gpwpCalcFirst = (struct _W32PROCESS *)a1;
    }
LABEL_19:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v2 + a2;
  }
  gtimeStartCursorHide = 0;
  v3 = &gpwpCalcFirst;
  v4 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v4 + 3);
      if ( (v6 & 6) != 4 )
        goto LABEL_11;
      v7 = *((_DWORD *)v4 + 6);
      if ( gtimeStartCursorHide < v7 )
        gtimeStartCursorHide = *((_DWORD *)v4 + 6);
      if ( (int)(v2 - v7) > 0 )
        break;
      v3 = (struct _W32PROCESS **)((char *)v4 + 32);
LABEL_12:
      v4 = *v3;
      if ( !*v3 )
      {
        if ( gtimeStartCursorHide > (unsigned int)v2 )
          return zzzUpdateCursorImage(v4, v3, v2);
        goto LABEL_3;
      }
    }
    *((_DWORD *)v4 + 3) = v6 & 0xFFFFFFFB;
LABEL_11:
    *v3 = (struct _W32PROCESS *)*((_QWORD *)v4 + 4);
    goto LABEL_12;
  }
LABEL_3:
  gtimeStartCursorHide = 0;
  return zzzUpdateCursorImage(v4, v3, v2);
}
