/*
 * XREFs of ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18008C550
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180095CF8 (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall CAudioSession::GetMeteringChannelCount(CAudioSession *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned __int64 i; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
  }
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v9 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      if ( (int)CAudioStream::GetMeteringChannelCount(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * i), &v10) >= 0
        && v10 > v5 )
      {
        v5 = v10;
      }
    }
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        v5);
    }
    *a2 = v5;
  }
  else
  {
    v4 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetMeteringChannelCount", 1485, -2147467261);
  }
  return v4;
}
