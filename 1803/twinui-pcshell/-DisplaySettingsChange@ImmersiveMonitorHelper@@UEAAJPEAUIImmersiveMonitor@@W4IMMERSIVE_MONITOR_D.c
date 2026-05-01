/*
 * XREFs of ?DisplaySettingsChange@ImmersiveMonitorHelper@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022ACA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::DisplaySettingsChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 (__fastcall **v7)(); // rdi

  if ( *(_DWORD *)(a1 + 64) && (a3 & 0x27) != 0 )
  {
    v5 = 0;
    v6 = a1 - 24;
    v7 = off_180337D50;
    do
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))*v7)(v6, a2, a3) )
        break;
      ++v5;
      ++v7;
    }
    while ( v5 < 4 );
  }
  return 0LL;
}
