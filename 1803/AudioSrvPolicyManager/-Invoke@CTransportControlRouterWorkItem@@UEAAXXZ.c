/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800292E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18001CBF0 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransportControlRouterWorkItem::Invoke(const wchar_t **this)
{
  DWORD v2; // esi
  const wchar_t *v3; // rbp
  const wchar_t *v4; // rdi
  struct CApplication *v5; // rbx
  _QWORD *v6; // rcx
  struct CApplication *v7; // rdx
  CApplicationManager *v8; // rcx
  int active; // eax
  int v10; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  struct TSSession *v13; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, this[2]);
  }
  v2 = *((_DWORD *)this + 2);
  v3 = this[3];
  v4 = this[2];
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !v4 )
    goto LABEL_21;
  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(v2, 0, 0LL, &v13) )
  {
    v6 = (_QWORD *)*((_QWORD *)v13 + 13);
    while ( v6 )
    {
      v7 = (struct CApplication *)v6[2];
      v6 = (_QWORD *)*v6;
      if ( *((const wchar_t **)v7 + 74) == v3 )
      {
        v5 = v7;
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( v5 )
  {
    active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v8, v5);
    v10 = active;
    if ( active < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, active);
      }
      AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1599, v10);
    }
  }
  else
  {
LABEL_21:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v4);
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
