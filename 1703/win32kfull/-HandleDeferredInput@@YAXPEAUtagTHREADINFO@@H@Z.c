/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00026B0
 * Callers:
 *     _SetInputServiceState @ 0x1C01080F0 (_SetInputServiceState.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01195D4 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CAD98 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 */

void __fastcall HandleDeferredInput(struct tagTHREADINFO *a1, int a2)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v7; // eax

  v2 = (__int64 **)*((_QWORD *)a1 + 48);
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x10000) != 0 && (struct tagTHREADINFO *)i[13] == a1 )
    {
      *(_DWORD *)(i[13] + 1096) &= ~0x4000000u;
      *((_DWORD *)i + 25) = *((_DWORD *)i + 25) & 0xFFFCFFFF | 0x20000;
      ++*((_DWORD *)v2 + 4);
      KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        a1,
        *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
        ((*((_DWORD *)i + 6) - 257) & 0xFFFFFFFB) == 0);
      if ( a2 )
      {
        if ( i == v2[6] )
          v2[6] = 0LL;
        DelQEntry(v2, i, 1LL);
      }
      else
      {
        WakeSomeone(v2, a1, *((unsigned int *)i + 6), i);
      }
      for ( j = *v2; j; j = (__int64 *)*j )
      {
        v7 = *((_DWORD *)j + 25);
        if ( (v7 & 0x40000) != 0 && ((struct tagTHREADINFO *)j[13] == a1 || *((_DWORD *)j + 24) == 4) )
        {
          *((_DWORD *)j + 25) = v7 & 0xFFFBFFFF;
          ++*((_DWORD *)v2 + 4);
          WakeSomeone(v2, a1, *((unsigned int *)j + 6), j);
        }
      }
      return;
    }
  }
}
