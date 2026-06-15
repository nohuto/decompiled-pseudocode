/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180026F7C
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180008920 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x180027BDC (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnLowPowerEpochStateChanged(void)
{
  _QWORD *v0; // rax
  _DWORD *v1; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v0 = qword_18004F0E8;
  while ( v0 )
  {
    v1 = (_DWORD *)v0[2];
    v0 = (_QWORD *)*v0;
    if ( *v1 && v1[76] )
    {
      if ( v1[57] || g_bLowPowerEpoch )
      {
        ProcessHeap = GetProcessHeap();
        v4 = HeapAlloc(ProcessHeap, 0, 4uLL);
        if ( v4 )
          *v4 = *v1;
        else
          v4 = 0LL;
        if ( v4 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v3, v4) < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids);
          }
          operator delete(v4, (const struct std::nothrow_t *)4);
        }
      }
      break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
