/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800A92D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180098038 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800980EC (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800A9038 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 v3; // rsi
  unsigned int v4; // r14d
  int v5; // edi
  _QWORD *v6; // rax
  ATL::CAtlException *v8; // rbx
  _QWORD *v9; // [rsp+38h] [rbp-70h]
  ATL::CAtlException *v10; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-58h] BYREF
  char v12; // [rsp+58h] [rbp-50h]
  LPCRITICAL_SECTION v13; // [rsp+60h] [rbp-48h] BYREF
  char v14; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v13 = (LPCRITICAL_SECTION)(a1 + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&v13);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x8Eu, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, 0LL);
  }
  v5 = *(_DWORD *)(v3 + 88);
  while ( --v5 >= 0 )
  {
    v9 = (_QWORD *)(v3 + 80);
    if ( !*(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                  (_QWORD *)(v3 + 80),
                                  v5)
                   + 128LL)
      && (v2 == -1
       || v2 == 1
       && *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                  (_QWORD *)(v3 + 80),
                                  v5)
                   + 48LL)
       || !v2
       && *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                  (_QWORD *)(v3 + 80),
                                  v5)
                   + 49LL)) )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 112);
      v12 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v4 = 0;
      try
      {
        v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                         (_QWORD *)(v3 + 80),
                         v5);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v3 + 152), v6);
      }
      catch ( ATL::CAtlException *v10 )
      {
        v8 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        v17 = *(_DWORD *)v8;
        v4 = *(_DWORD *)v8;
        if ( v17 < 0
          && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            143,
            (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
            0,
            v17);
        }
        v2 = a2;
        v3 = a1;
      }
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v9, v5);
      if ( v12 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v12 = 0;
      }
    }
  }
  if ( v14 )
    LeaveCriticalSection(v13);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
