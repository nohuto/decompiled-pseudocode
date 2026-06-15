/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001FCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180014268 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransportControlRouterWorkItem::Invoke(const wchar_t **this)
{
  DWORD v2; // ebp
  const wchar_t *v3; // rsi
  struct CApplication *v4; // rdi
  _QWORD *v5; // rbx
  struct CApplication *v6; // rbp
  CApplicationManager *v7; // rcx
  int active; // eax
  int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  struct TSSession *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, this[2]);
  }
  v2 = *((_DWORD *)this + 2);
  v3 = this[2];
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !v3 )
    goto LABEL_21;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(v2, 0, 0LL, &v12) )
  {
    v5 = (_QWORD *)*((_QWORD *)v12 + 13);
    while ( v5 )
    {
      v6 = (struct CApplication *)v5[2];
      v5 = (_QWORD *)*v5;
      if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v6 + 3), v3) )
      {
        v4 = v6;
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( v4 )
  {
    active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v7, v4);
    v9 = active;
    if ( active < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, active);
      }
      AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1620, v9);
    }
  }
  else
  {
LABEL_21:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v3);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
