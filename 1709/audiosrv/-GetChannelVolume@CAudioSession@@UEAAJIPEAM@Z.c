/*
 * XREFs of ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180071540
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioSession::GetChannelVolume(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  v5 = 0;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 < *((_DWORD *)this + 254) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = v3;
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        this,
        v8,
        *(float *)(*((_QWORD *)this + 128) + 4 * v3));
    }
    *a3 = *(float *)(*((_QWORD *)this + 128) + 4 * v3);
  }
  else
  {
    v5 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelVolume", 1133, -2147024809);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
