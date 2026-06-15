/*
 * XREFs of ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800B6294
 * Callers:
 *     ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x1800C25D0 (-SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     ValidateAudioLevel @ 0x1800ADE1C (ValidateAudioLevel.c)
 */

__int64 __fastcall CAudioStream::SetAllInitialStreamVolumes(CAudioStream *this, __int64 a2, float *a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // edx
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  char *v13; // rcx
  signed __int64 v14; // rsi

  v5 = (unsigned int)a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x22u,
      (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      this,
      a2);
  }
  if ( (_DWORD)v5 == *((_DWORD *)this + 23) )
  {
    if ( (_DWORD)v5 )
    {
      v10 = a3;
      do
      {
        if ( !ValidateAudioLevel(*v10) )
        {
          v8 = 1531;
          goto LABEL_7;
        }
        v10 = (float *)(v11 + 4);
      }
      while ( v12 + 1 < (unsigned int)v5 );
      v13 = (char *)*((_QWORD *)this + 14);
      a2 = v5;
      v14 = (char *)a3 - v13;
      do
      {
        *(_DWORD *)v13 = *(_DWORD *)&v13[v14];
        v13 += 4;
        --a2;
      }
      while ( a2 );
    }
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CAudioStream *, __int64, __int64))(*(_QWORD *)this + 120LL))(this, a2, a4);
    return 0LL;
  }
  else
  {
    v8 = 1523;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllInitialStreamVolumes", v8, -2147024809);
    return 2147942487LL;
  }
}
