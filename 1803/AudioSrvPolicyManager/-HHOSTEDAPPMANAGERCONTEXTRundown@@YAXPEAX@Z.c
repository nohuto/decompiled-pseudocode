/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x1800225C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180020444 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180020880 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  __int64 v2; // rdx
  CHostedAppInteractivityManager *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = PickerHostContextManager::s_PickerHostContextList;
  if ( PickerHostContextManager::s_PickerHostContextList )
  {
    while ( *(CPickerHostContext **)(v2 + 16) != this )
    {
      v2 = *(_QWORD *)v2;
      if ( !v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = 0LL;
  }
  if ( v2 )
  {
    if ( v2 == PickerHostContextManager::s_PickerHostContextList )
      PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v2;
    else
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    v3 = *(CHostedAppInteractivityManager **)(v2 + 8);
    if ( v2 == qword_18004E6F8 )
      qword_18004E6F8 = *(_QWORD *)(v2 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v3;
    *(_QWORD *)v2 = qword_18004E710;
    qword_18004E710 = v2;
    if ( !--qword_18004E700 )
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
               v3,
               *(const unsigned __int16 **)v5,
               *(_QWORD *)(v5 + 16),
               *(_DWORD *)(v5 + 8),
               0);
        if ( v7 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v7);
          }
          AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 288, v7);
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
