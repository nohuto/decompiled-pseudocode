/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800713C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(const wchar_t **this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this[99]);
  }
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)v4 == *((_DWORD *)this + 254) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = 0LL;
      v8 = v4;
      do
      {
        a3[v7 / 2] = *(float *)&this[128][v7];
        v7 += 2LL;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetAllVolumes", 1245, -2147024809);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
