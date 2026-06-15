/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800A1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 31) )
  {
    v6 = -2147024809;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevelScalar", 482, v6);
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_5;
  }
  if ( v3 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  *a3 = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v3));
  v6 = 0;
LABEL_9:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
