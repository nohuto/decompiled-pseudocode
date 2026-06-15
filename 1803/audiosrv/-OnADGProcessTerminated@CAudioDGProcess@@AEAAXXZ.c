/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18010784C
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1801079C0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  char *v5; // rcx
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  int v8; // [rsp+38h] [rbp-39h] BYREF
  DWORD ExitCode; // [rsp+3Ch] [rbp-35h] BYREF
  DWORD v10; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v12; // [rsp+50h] [rbp-21h]
  __int64 v13; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  const char *v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  DWORD *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]

  v13 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    if ( (unsigned int)dword_1801884D0 > 2 )
    {
      v15 = "CAudioDGProcess::OnADGProcessTerminated";
      v16 = 40;
      v17 = 0;
      v8 = 921;
      v18 = &v8;
      v19 = 4;
      v20 = 0;
      v10 = ExitCode;
      v21 = &v10;
      v22 = 4;
      v23 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v3, v4, 5u, &pData);
    }
    v5 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v5);
      *((_QWORD *)this + 11) = 0LL;
    }
    *((_DWORD *)this + 24) = 0;
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
    if ( v7 )
    {
      LOBYTE(v6) = 1;
      (**v7)(v7, v6);
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
