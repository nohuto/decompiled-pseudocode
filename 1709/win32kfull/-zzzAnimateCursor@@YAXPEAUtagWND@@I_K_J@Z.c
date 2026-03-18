/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00874F0
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0104EC0 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     SetDeepDelayableVisRITTimer @ 0x1C0087684 (SetDeepDelayableVisRITTimer.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C0089620 (FixupCursorForMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // r10d
  int v15; // r8d
  int v16; // eax
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v5 = v4;
  if ( v4 && (*(_DWORD *)(v4 + 80) & 8) != 0 && *(_QWORD *)(v4 + 112) )
  {
    if ( !gdwLastAniTick
      || (v6 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - 100 * *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL * *(int *)(v4 + 120)) / 6u
             - gdwLastAniTick,
          v6 < 0) )
    {
      v6 = 0;
    }
    v7 = 0;
    v8 = *(_DWORD *)(v4 + 120) + 1;
    if ( v8 < *(_DWORD *)(v5 + 92) )
      v7 = v8;
    *(_DWORD *)(v5 + 120) = v7;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v17[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v17;
    v17[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    if ( a3 )
      zzzUpdateCursorImage();
    v11 = *(_QWORD *)(v5 + 112);
    v12 = (unsigned int)(100 * *(_DWORD *)(v11 + 4LL * v7));
    LODWORD(v10) = (2863311531u * (unsigned __int64)(unsigned int)v12) >> 32;
    v13 = (unsigned int)v12 / 6;
    if ( (int)((unsigned int)v12 / 6) <= v6 )
    {
      v14 = *(_DWORD *)(v5 + 92);
      v15 = *(_DWORD *)(v5 + 120);
      do
      {
        v16 = v15 + 1;
        v6 -= v13;
        v15 = 0;
        if ( v16 < v14 )
          v15 = v16;
        *(_DWORD *)(v5 + 120) = v15;
        v12 = (unsigned int)(100 * *(_DWORD *)(v11 + 4LL * v15));
        LODWORD(v10) = (2863311531u * (unsigned __int64)(unsigned int)v12) >> 32;
        v13 = (unsigned int)v12 / 6;
      }
      while ( (int)((unsigned int)v12 / 6) <= v6 );
    }
    ThreadUnlock1(v12, v10);
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v6;
    gtmridAniCursor = SetDeepDelayableVisRITTimer((unsigned int)gdwLastAniTick, v13 - v6);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
