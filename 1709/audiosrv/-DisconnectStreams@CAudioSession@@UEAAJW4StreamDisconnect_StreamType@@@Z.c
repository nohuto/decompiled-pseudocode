/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x180071080
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180030184 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180070DD8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rsi
  _BYTE *v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-58h] BYREF
  char v11; // [rsp+48h] [rbp-50h]
  LPCRITICAL_SECTION v12; // [rsp+50h] [rbp-48h] BYREF
  char v13; // [rsp+58h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v12 = (LPCRITICAL_SECTION)(a1 + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&v12);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xA6u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, 0LL);
  }
  v5 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v5) = v5 - 1;
    if ( (int)v5 < 0 )
      break;
    if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v6 = *(_BYTE **)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5);
    if ( !v6[128] )
    {
      if ( v2 == -1 )
        goto LABEL_19;
      if ( v2 == 1 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( v6[40] )
          goto LABEL_19;
      }
      if ( !v2 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( v6[41] )
        {
LABEL_19:
          lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 112);
          v11 = 0;
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
          catch ( ATL::CAtlException *v9 )
          {
            v8 = v9;
            if ( *(_DWORD *)v9 == -1073741571 )
              _o__resetstkoflw();
            v4 = *(_DWORD *)v8;
            if ( *(int *)v8 < 0
              && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xA7u,
                (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
                0LL);
            }
            v2 = a2;
            v3 = a1;
          }
          ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt((_QWORD *)(v3 + 80), (int)v5);
          if ( v11 )
          {
            LeaveCriticalSection(lpCriticalSection);
            v11 = 0;
          }
        }
      }
    }
  }
  if ( v13 )
    LeaveCriticalSection(v12);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
