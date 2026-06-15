/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x18008AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x18007BEA0 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rsi
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+38h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  char v10; // [rsp+48h] [rbp-40h]
  LPCRITICAL_SECTION v11; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+58h] [rbp-30h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v11 = (LPCRITICAL_SECTION)(a1 + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&v11);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xADu, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
  }
  v5 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v5) = v5 - 1;
    if ( (int)v5 < 0 )
      break;
    if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 128LL) )
    {
      if ( v2 == -1 )
        goto LABEL_19;
      if ( v2 == 1 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 40LL) )
          goto LABEL_19;
      }
      if ( !v2 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 41LL) )
        {
LABEL_19:
          lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 112);
          v10 = 0;
          ATL::CCritSecLock::Lock(&lpCriticalSection);
          v4 = 0;
          try
          {
            if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
              (_QWORD *)(v3 + 152),
              (_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5));
          }
          catch ( ATL::CAtlException *v8 )
          {
            v7 = v8;
            if ( *(_DWORD *)v8 == -1073741571 )
              _o__resetstkoflw();
            v4 = *(_DWORD *)v7;
            if ( *(int *)v7 < 0
              && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xAEu,
                (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
                0LL);
            }
            v2 = a2;
            v3 = a1;
          }
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
            (_QWORD *)(v3 + 80),
            (int)v5);
          if ( v10 )
          {
            LeaveCriticalSection(lpCriticalSection);
            v10 = 0;
          }
        }
      }
    }
  }
  if ( v12 )
    LeaveCriticalSection(v11);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
