/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800D9518
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800D9740 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     McTemplateU0q @ 0x1800D9A8C (McTemplateU0q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  CAudioDGProcess *v3; // rcx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  char *v6; // rcx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  DWORD v11; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v17; // [rsp+98h] [rbp+27h]
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]
  DWORD *v20; // [rsp+A8h] [rbp+37h]
  int v21; // [rsp+B0h] [rbp+3Fh]
  int v22; // [rsp+B4h] [rbp+43h]

  v14 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_c059856c368f347c07e9a39e19191005_Traceguids,
      *((_QWORD *)this + 11));
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_c059856c368f347c07e9a39e19191005_Traceguids,
        ExitCode);
    }
    if ( (unsigned int)dword_18014A3F0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::OnADGProcessTerminated");
      v10 = 1051;
      v17 = &v10;
      v18 = 4;
      v19 = 0;
      v11 = ExitCode;
      v20 = &v11;
      v21 = 4;
      v22 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v4, v5, 5u, &pData);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      McTemplateU0q(v3, &EVT_AUDIOSRV_FAIL_AUDIODG_CRASHED, ExitCode);
    ShipAssert(90114LL, ExitCode);
    v6 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v6);
      *((_QWORD *)this + 11) = 0LL;
    }
    *((_DWORD *)this + 24) = 0;
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_c059856c368f347c07e9a39e19191005_Traceguids);
    }
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
    if ( v8 )
    {
      LOBYTE(v7) = 1;
      (**v8)(v8, v7);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
