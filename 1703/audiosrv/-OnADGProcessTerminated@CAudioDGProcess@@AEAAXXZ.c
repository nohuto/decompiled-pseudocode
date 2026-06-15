/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800CD47C
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800CD6A0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     Template_q @ 0x18002F3A4 (Template_q.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  CVolumeStrip *v3; // rcx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  char *v6; // rcx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h] BYREF
  DWORD v11; // [rsp+40h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-39h] BYREF
  char v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+7h] BYREF
  int *v17; // [rsp+98h] [rbp+17h]
  int v18; // [rsp+A0h] [rbp+1Fh]
  int v19; // [rsp+A4h] [rbp+23h]
  DWORD *v20; // [rsp+A8h] [rbp+27h]
  int v21; // [rsp+B0h] [rbp+2Fh]
  int v22; // [rsp+B4h] [rbp+33h]

  v14 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      *((_QWORD *)this + 11));
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        ExitCode);
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::OnADGProcessTerminated");
      v10 = 1047;
      v17 = &v10;
      v18 = 4;
      v19 = 0;
      v11 = ExitCode;
      v20 = &v11;
      v21 = 4;
      v22 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v4, v5, 5u, &pData);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      Template_q((__int64)v3, &EVT_AUDIOSRV_FAIL_AUDIODG_CRASHED, ExitCode);
    ShipAssert(90114LL, ExitCode);
    v6 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v6);
      *((_QWORD *)this + 11) = 0LL;
    }
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
    }
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
    if ( v8 )
    {
      LOBYTE(v7) = 1;
      (**v8)(v8, v7);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
