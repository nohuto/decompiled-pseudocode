/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0007524
 * Callers:
 *     _SetInputServiceState @ 0x1C0111F70 (_SetInputServiceState.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0124768 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CF124 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 */

void __fastcall HandleDeferredInput(struct tagTHREADINFO *a1, int a2)
{
  __int64 v2; // rdi
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v7; // eax

  v2 = *((_QWORD *)a1 + 51);
  for ( i = *(__int64 **)(v2 + 24); i; i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x10000) != 0 && (struct tagTHREADINFO *)i[13] == a1 )
    {
      *(_DWORD *)(i[13] + 1184) &= ~0x10000000u;
      *((_DWORD *)i + 25) = *((_DWORD *)i + 25) & 0xFFFCFFFF | 0x20000;
      ++*(_DWORD *)(v2 + 40);
      KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        a1,
        *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
        ((*((_DWORD *)i + 6) - 257) & 0xFFFFFFFB) == 0);
      if ( a2 )
      {
        if ( i == *(__int64 **)(v2 + 80) )
          *(_QWORD *)(v2 + 80) = 0LL;
        DelQEntry(v2 + 24, i, 1LL);
      }
      else
      {
        WakeSomeone(v2, a1, *((unsigned int *)i + 6), i);
      }
      for ( j = *(__int64 **)(v2 + 24); j; j = (__int64 *)*j )
      {
        v7 = *((_DWORD *)j + 25);
        if ( (v7 & 0x40000) != 0 && ((struct tagTHREADINFO *)j[13] == a1 || *((_DWORD *)j + 24) == 4) )
        {
          *((_DWORD *)j + 25) = v7 & 0xFFFBFFFF;
          ++*(_DWORD *)(v2 + 40);
          WakeSomeone(v2, a1, *((unsigned int *)j + 6), j);
        }
      }
      return;
    }
  }
}
