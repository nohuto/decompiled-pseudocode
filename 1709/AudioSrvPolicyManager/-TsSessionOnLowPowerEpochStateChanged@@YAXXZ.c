/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18001DBFC
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180004A80 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x18001E868 (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnLowPowerEpochStateChanged(void)
{
  _QWORD *v0; // rax
  _DWORD *v1; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v0 = qword_18003AE48;
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
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids);
          }
          operator delete(v4, (const struct std::nothrow_t *)4);
        }
      }
      break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
