/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18001CBF0
 * Callers:
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800292E0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800119D4 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012A5C (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        struct CApplication *a2)
{
  _QWORD *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  USHORT v7; // dx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)a2 + 42) )
    goto LABEL_15;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v4 = 0;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v5 + 472) && *(_DWORD *)(v5 + 288) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 || (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
LABEL_15:
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 36;
      goto LABEL_19;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption((const wchar_t **)a2);
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 37;
LABEL_19:
      WPP_SF_S(v6[2], v7, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, *((const wchar_t **)a2 + 3));
    }
  }
  return 0LL;
}
