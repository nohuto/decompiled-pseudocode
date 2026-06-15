/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180009550
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x1800091C0 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18004BC88 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  unsigned __int64 v4; // rax
  float Wiper; // xmm0_4
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( a2 )
  {
    v4 = *((unsigned int *)this + 30);
    if ( v4 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v4));
    *a2 = Wiper;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
        this,
        *((_DWORD *)this + 30),
        Wiper);
    }
    v6 = 0;
  }
  else
  {
    v6 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 0x1C1u, -2147467261);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
