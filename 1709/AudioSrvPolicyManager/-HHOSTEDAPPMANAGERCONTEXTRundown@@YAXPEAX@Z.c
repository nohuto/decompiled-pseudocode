/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180018FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016F9C (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800173AC (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  CHostedAppInteractivityManager *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = PickerHostContextManager::s_PickerHostContextList;
  if ( PickerHostContextManager::s_PickerHostContextList )
  {
    while ( *(CPickerHostContext **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = 0LL;
  }
  if ( v3 )
  {
    if ( v3 == PickerHostContextManager::s_PickerHostContextList )
    {
      PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v3;
    }
    else
    {
      v2 = *(CHostedAppInteractivityManager **)(v3 + 8);
      *(_QWORD *)v2 = *(_QWORD *)v3;
    }
    if ( v3 == qword_18003A580 )
    {
      qword_18003A580 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v2 = *(CHostedAppInteractivityManager **)v3;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    }
    *(_QWORD *)v3 = qword_18003A598;
    qword_18003A598 = v3;
    if ( !--qword_18003A588 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
    v4 = *(_QWORD **)this;
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v5 + 12) = 0;
      if ( v6 )
      {
        v7 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
               v2,
               *(const unsigned __int16 **)v5,
               *(_DWORD *)(v5 + 8),
               0);
        if ( v7 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v7);
          }
          AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 283, v7);
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
