/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18008F2B0
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x18008F410 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ValidateAudioLevel @ 0x180090594 (ValidateAudioLevel.c)
 *     WPP_SF_dS @ 0x180090990 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4)
{
  __int64 v5; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-18h] BYREF
  char v16; // [rsp+48h] [rbp-10h]

  v5 = a2;
  v8 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      a2,
      *((_QWORD *)this + 108));
  }
  v9 = 0LL;
  if ( (_DWORD)v5 )
  {
    while ( (unsigned __int8)ValidateAudioLevel(v9) )
    {
      v9 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v9 >= (unsigned int)v5 )
        goto LABEL_8;
    }
    v8 = -2147024809;
    goto LABEL_11;
  }
LABEL_8:
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 880);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)v5 != *((_DWORD *)this + 258) )
  {
    v8 = -2147024809;
    if ( v16 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_11:
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetAllVolumes", 1373, -2147024809);
    return v8;
  }
  if ( (_DWORD)v5 )
  {
    v11 = 0LL;
    v12 = v5;
    do
    {
      *(float *)(v11 * 4 + *((_QWORD *)this + 130)) = a3[v11];
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v14) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v14,
    0LL);
  return v8;
}
