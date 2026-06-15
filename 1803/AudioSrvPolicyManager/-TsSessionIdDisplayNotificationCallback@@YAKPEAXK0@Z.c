/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180026C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     WPP_SF_ds @ 0x180023D18 (WPP_SF_ds.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x180027BDC (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  DWORD v3; // esi
  signed int v4; // edi
  int v6; // eax
  const char *v7; // rdx
  __int64 v8; // r8
  const char *v9; // rax
  int v10; // r8d
  int v11; // eax
  int v12; // ecx
  HANDLE ProcessHeap; // rax
  struct TSSession *v14; // rax
  __int64 v15; // rcx
  struct TSSession *v16; // rbx
  struct TSSession *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)a1;
  v4 = 0;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    v6 = TsSessionFromSessionId(v3, 0, 0LL, &v18);
    if ( v6 )
    {
      v4 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        v4 = v6;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        if ( a3[5] == 2 )
        {
          v9 = "Dim";
        }
        else
        {
          v7 = "On";
          v9 = "Off";
          if ( a3[5] == 1 )
            v9 = "On";
        }
        WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v7, v8, v3, v9);
      }
      v10 = a3[5];
      v11 = v10 != 0;
      v12 = *((_DWORD *)v18 + 57);
      *((_DWORD *)v18 + 57) = v11;
      if ( v12 != v11 && (v10 || g_bLowPowerEpoch) )
      {
        ProcessHeap = GetProcessHeap();
        v14 = (struct TSSession *)HeapAlloc(ProcessHeap, 0, 4uLL);
        v18 = v14;
        v16 = v14;
        if ( v14 )
          *(_DWORD *)v14 = v3;
        else
          v16 = 0LL;
        if ( v16 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v15, v16) < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids);
          }
          operator delete(v16, (const struct std::nothrow_t *)4);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, v4);
    }
    AudPolicyLogError("TsSessionIdDisplayNotificationCallback", 2118, v4);
  }
  return 0LL;
}
