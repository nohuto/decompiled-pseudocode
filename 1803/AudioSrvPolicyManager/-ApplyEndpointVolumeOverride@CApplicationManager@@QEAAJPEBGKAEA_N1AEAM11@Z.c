/*
 * XREFs of ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001E90C
 * Callers:
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023788 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_dS @ 0x18001A1A8 (WPP_SF_dS.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        bool *a4,
        bool *a5,
        float *a6,
        bool *a7,
        bool *a8)
{
  bool *v11; // rsi
  bool *v12; // r14
  int v13; // eax
  signed int v14; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v17; // [rsp+50h] [rbp-28h]
  struct TSSession *v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, a3, a2);
  }
  v18 = 0LL;
  *a4 = 0;
  v11 = a5;
  *a5 = 0;
  v12 = a7;
  *a7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, a3, a2);
  }
  v13 = TsSessionFromSessionId(a3, 1, 0LL, &v18);
  if ( v13 )
  {
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, bool *, bool *, float *, bool *, bool *))(**((_QWORD **)v18 + 30) + 32LL))(
            *((_QWORD *)v18 + 30),
            a2,
            a4,
            v11,
            a6,
            v12,
            a8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, v14);
    }
    AudPolicyLogError("TsSessionIdAddEndpointVolumeReference", 2185, v14);
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
