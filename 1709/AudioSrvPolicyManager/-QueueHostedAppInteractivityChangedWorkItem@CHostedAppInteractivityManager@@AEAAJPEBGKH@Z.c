/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800176CC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800173AC (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x1800178E4 (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001FED4 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  struct HostedAppStateChangedContext *v7; // rbx
  struct HostedAppStateChangedContext *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = 0;
  if ( g_ApplicationManager )
  {
    v5 = HostedAppStateChangedContext::CreateInstance(a2, a3, a4, &v9);
    v7 = v9;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(v6, v9);
      if ( v4 >= 0 )
        v7 = 0LL;
    }
    if ( v7 )
    {
      if ( *(_QWORD *)v7 )
      {
        CoTaskMemFree(*(LPVOID *)v7);
        *(_QWORD *)v7 = 0LL;
      }
      operator delete(v7, (const struct std::nothrow_t *)0x10);
    }
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v4);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem", 504, v4);
    }
  }
  return (unsigned int)v4;
}
