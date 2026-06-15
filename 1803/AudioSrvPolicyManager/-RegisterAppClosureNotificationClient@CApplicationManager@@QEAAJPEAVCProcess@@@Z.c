/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001AD08
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x1800221C0 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = CApplicationManager::Register(v3, a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v4);
    }
    AudPolicyLogError("CApplicationManager::RegisterAppClosureNotificationClient", 740, v4);
  }
  else
  {
    *((_DWORD *)a2 + 129) = 1;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
