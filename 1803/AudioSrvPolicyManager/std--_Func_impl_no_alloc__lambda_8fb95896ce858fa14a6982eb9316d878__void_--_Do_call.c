/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Do_call @ 0x18000AB60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18001037C (WPP_SF_Sd.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180013110 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r14
  CApplicationManager *v3; // rsi
  struct CApplication *v4; // rdi
  BOOL v5; // ebp
  int v6; // ecx
  bool v7; // sf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_BYTE *)(a1 + 16);
  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(struct CApplication **)(v1 + 280);
  if ( v4
    || (CApplicationManager::Register(v3, (struct CProcess *)v1), (v4 = *(struct CApplication **)(v1 + 280)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), v2);
    }
    v5 = *((_DWORD *)v4 + 42) != 0;
    if ( !*(_DWORD *)(v1 + 472) )
    {
      v6 = v2 != 0 ? 1 : -1;
      v7 = v6 + *(_DWORD *)(v1 + 556) < 0;
      *(_DWORD *)(v1 + 556) += v6;
      if ( v7 )
        *(_DWORD *)(v1 + 556) = 0;
      else
        CApplication::VoipCallStateChanged(*(CApplication **)(v1 + 280), v2 != 0 ? 1 : -1);
    }
    if ( v5 != (*((_DWORD *)v4 + 42) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(v3, v4);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
