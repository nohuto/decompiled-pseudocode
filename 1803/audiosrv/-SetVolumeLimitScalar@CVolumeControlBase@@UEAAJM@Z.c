/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800A4760
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800A480C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetVolumeLimitScalar(CVolumeControlBase *this, float a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v3 = 0;
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_DWORD *)this + 31) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v4 >= *((_QWORD *)this + 12) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = CVolumeUnit::SetVolumeLimitScalar((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v4), a2);
      v3 = v5;
      if ( v5 < 0 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 31) )
        goto LABEL_5;
    }
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetVolumeLimitScalar", 872, v5);
  }
LABEL_5:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
