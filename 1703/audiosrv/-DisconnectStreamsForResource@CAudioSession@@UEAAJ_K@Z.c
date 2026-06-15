/*
 * XREFs of ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18008B200
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180025524 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x18007BEA0 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ?Add@?$CAtlArray@PEAXV?$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z @ 0x18008A06C (-Add@-$CAtlArray@PEAXV-$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSession::DisconnectStreamsForResource(CAudioSession *this, __int64 a2)
{
  CAudioSession *v2; // rdi
  int v3; // r15d
  int i; // r14d
  __int64 v5; // rcx
  int j; // r14d
  __int64 v7; // rcx
  int v8; // ecx
  bool v9; // zf
  unsigned int v10; // r12d
  unsigned __int64 k; // r14
  __int64 *v12; // r15
  unsigned __int64 m; // r14
  __int64 *v15; // r15
  unsigned __int64 n; // rdi
  int *v19; // rbx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  BOOL v22; // [rsp+30h] [rbp-E8h]
  LPCRITICAL_SECTION v23; // [rsp+38h] [rbp-E0h] BYREF
  char v24; // [rsp+40h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-C8h] BYREF
  char v26; // [rsp+58h] [rbp-C0h]
  void *Block; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  int v30; // [rsp+78h] [rbp-A0h]
  HANDLE *lpHandles; // [rsp+80h] [rbp-98h] BYREF
  DWORD nCount[2]; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  int v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  ATL::CAtlException *v36; // [rsp+A8h] [rbp-70h] BYREF
  ATL::CAtlException *v37; // [rsp+B0h] [rbp-68h] BYREF
  ATL::CAtlException *v38; // [rsp+B8h] [rbp-60h] BYREF
  ATL::CAtlException *v39; // [rsp+C0h] [rbp-58h] BYREF
  ATL::CAtlException *v40; // [rsp+C8h] [rbp-50h] BYREF
  ATL::CAtlException *v41; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+20h] BYREF

  v35 = -2LL;
  v2 = this;
  Block = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  lpHandles = 0LL;
  *(_QWORD *)nCount = 0LL;
  v33 = 0LL;
  v34 = 0;
  v3 = 0;
  v22 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAFu, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
  }
  v23 = (LPCRITICAL_SECTION)((char *)v2 + 256);
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  for ( i = *((_QWORD *)v2 + 38) - 1; ; --i )
  {
    LODWORD(v49) = i;
    if ( i < 0 )
      break;
    if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
      ATL::AtlThrowImpl(-2147024809);
    v5 = *(_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, a2) )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 112);
      v26 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      try
      {
        if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          (_QWORD *)v2 + 19,
          (_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i));
      }
      catch ( ATL::CAtlException *v36 )
      {
        v19 = (int *)v36;
        if ( *(_DWORD *)v36 == -1073741571 )
          _o__resetstkoflw();
        if ( *v19 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xB0u,
              (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
              0LL);
          }
          v2 = this;
          v3 = 0;
          i = (int)v49;
          goto LABEL_22;
        }
        v2 = this;
        v3 = 0;
        i = (int)v49;
      }
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((_QWORD *)v2 + 37, i);
LABEL_22:
      if ( v26 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v26 = 0;
      }
      continue;
    }
  }
  if ( v24 )
    LeaveCriticalSection(v23);
  v23 = (LPCRITICAL_SECTION)((char *)v2 + 32);
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  for ( j = *((_QWORD *)v2 + 11) - 1; j >= 0; --j )
  {
    if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v7 = *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, a2) )
    {
      if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v8 = v3 + 1;
      if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j) + 400LL) )
        v8 = v3;
      v3 = v8;
      LODWORD(v49) = v8;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 112);
      v26 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      try
      {
        if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          (_QWORD *)v2 + 19,
          (_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j));
      }
      catch ( ATL::CAtlException *v37 )
      {
        if ( *(_DWORD *)v37 == -1073741571 )
          _o__resetstkoflw();
        v2 = this;
        v3 = (int)v49;
      }
      if ( v26 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v26 = 0;
      }
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((_QWORD *)v2 + 10, j);
    }
  }
  v9 = *((_DWORD *)v2 + 82) == v3;
  *((_DWORD *)v2 + 82) -= v3;
  if ( v9 )
    v22 = v3 != 0;
  if ( v24 )
    LeaveCriticalSection(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v2 - 2) + 96LL))((__int64)v2 - 16, 0LL);
  v10 = CAudioSession::DisconnectStreamList((CAudioSession *)((char *)v2 - 16));
  v23 = (LPCRITICAL_SECTION)((char *)v2 + 112);
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  for ( k = 0LL; k < *((_QWORD *)v2 + 20); ++k )
  {
    v12 = *(__int64 **)(*((_QWORD *)v2 + 19) + 8 * k);
    v49 = v12;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v49);
    }
    catch ( ATL::CAtlException *v38 )
    {
      if ( *(_DWORD *)v38 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v12 = v49;
    }
    v10 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v12[64]);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v20 = v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v10 = *(_DWORD *)v20;
      v12 = v49;
    }
    (*(void (__fastcall **)(__int64 *))(*v12 + 64))(v12);
  }
  if ( v24 )
    LeaveCriticalSection(v23);
  v23 = (LPCRITICAL_SECTION)((char *)v2 + 184);
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  for ( m = 0LL; m < *((_QWORD *)v2 + 29); ++m )
  {
    v15 = *(__int64 **)(*((_QWORD *)v2 + 28) + 8 * m);
    v49 = v15;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v49);
    }
    catch ( ATL::CAtlException *v40 )
    {
      if ( *(_DWORD *)v40 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v15 = v49;
    }
    v10 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v15[64]);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v21 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v10 = *(_DWORD *)v21;
      v15 = v49;
    }
    (*(void (__fastcall **)(__int64 *))(*v15 + 64))(v15);
  }
  if ( v24 )
    LeaveCriticalSection(v23);
  if ( *(_QWORD *)nCount )
    WaitForMultipleObjectsEx(nCount[0], lpHandles, 1, 0x3E8u, 0);
  for ( n = 0LL; n < v28; ++n )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + n) + 72LL))(*((_QWORD *)Block + n));
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  v28 = 0LL;
  v29 = 0LL;
  if ( lpHandles )
    free(lpHandles);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(&Block);
  return v10;
}
