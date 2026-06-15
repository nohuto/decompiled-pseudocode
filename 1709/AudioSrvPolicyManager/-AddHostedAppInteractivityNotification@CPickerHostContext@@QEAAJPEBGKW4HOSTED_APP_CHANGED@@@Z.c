/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180017058
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001715C (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800173AC (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 */

__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  int HostedAppInteractivity; // ebx
  struct CHostedAppInteractivity *v8; // rdx
  CHostedAppInteractivityManager *v9; // rcx
  int v10; // eax
  BOOL v11; // r9d
  int v12; // eax
  struct CHostedAppInteractivity *v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = 0LL;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(a1, a2, a3, &v14);
  if ( HostedAppInteractivity >= 0 )
  {
    if ( a4 == 1 )
    {
      v9 = (CHostedAppInteractivityManager *)*((unsigned int *)v14 + 3);
      *((_DWORD *)v14 + 3) = 0;
      v12 = (_DWORD)v9 != 0;
      v11 = 0;
LABEL_11:
      if ( v12 )
        HostedAppInteractivity = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(v9, a2, a3, v11);
LABEL_13:
      if ( HostedAppInteractivity >= 0 )
        return (unsigned int)HostedAppInteractivity;
      goto LABEL_14;
    }
    if ( (unsigned int)(a4 - 2) > 1 )
      goto LABEL_13;
    v8 = v14;
    v9 = (CHostedAppInteractivityManager *)*((unsigned int *)v14 + 3);
    if ( a4 == 2 )
    {
      v10 = (_DWORD)v9 + 1;
    }
    else
    {
      if ( !(_DWORD)v9 )
      {
LABEL_9:
        v11 = *((_DWORD *)v8 + 3) != 0;
        v12 = v11 ^ ((_DWORD)v9 != 0);
        goto LABEL_11;
      }
      v10 = (_DWORD)v9 - 1;
    }
    *((_DWORD *)v14 + 3) = v10;
    goto LABEL_9;
  }
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids,
      HostedAppInteractivity);
  }
  AudPolicyLogError("CPickerHostContext::AddHostedAppInteractivityNotification", 202, HostedAppInteractivity);
  return (unsigned int)HostedAppInteractivity;
}
