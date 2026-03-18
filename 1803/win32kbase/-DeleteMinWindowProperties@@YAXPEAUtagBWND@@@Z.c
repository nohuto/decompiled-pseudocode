/*
 * XREFs of ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C00BC128
 * Callers:
 *     DestroyBaseWindow @ 0x1C00BC1B0 (DestroyBaseWindow.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DeleteMinWindowProperties(struct tagBWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx

  v3 = *((_QWORD *)a1 + 10);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 4);
    v5 = v3 + 8;
    if ( *(_DWORD *)(v3 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v5 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v5)(*(_QWORD *)v5);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2);
        v5 += 16LL;
        --v4;
      }
      while ( v4 );
      v3 = *((_QWORD *)a1 + 10);
    }
    Win32FreePool(v3);
    *((_QWORD *)a1 + 10) = 0LL;
  }
}
