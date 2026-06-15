/*
 * XREFs of ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180007E44
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007DC4 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180007FD0 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002AD30 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18002B454 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180107BA4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CAudioDGProcess::DoShutdownADG(HANDLE *this, __int64 a2, const GUID *a3, const GUID *a4)
{
  struct _TP_WAIT *v5; // rdx
  char *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // eax
  void *v9; // rdx
  UINT32 cData; // [rsp+20h] [rbp-A8h]
  int ADGProcessBindingHandle; // [rsp+30h] [rbp-98h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE v14; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-80h] BYREF
  CLIENT_CALL_RETURN v16; // [rsp+50h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]
  RPC_BINDING_HANDLE *p_ADGProcessBindingHandle; // [rsp+90h] [rbp-38h]
  __int64 v21; // [rsp+98h] [rbp-30h]
  int *v22; // [rsp+A0h] [rbp-28h]
  __int64 v23; // [rsp+A8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  Binding = this;
  ADGProcessBindingHandle = 0;
  v14 = 0LL;
  if ( !this[11] )
  {
LABEL_13:
    v7 = (char *)this[14];
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v7);
      this[14] = 0LL;
    }
    goto LABEL_15;
  }
  v5 = (struct _TP_WAIT *)this[15];
  if ( v5 )
  {
    if ( *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *))(*(_QWORD *)ThreadPool + 96LL) == CAudioThreadPool::CloseWait )
      CAudioThreadPool::CloseWait(ThreadPool, v5);
    else
      _guard_dispatch_icall_fptr();
    this[15] = 0LL;
  }
  ADGProcessBindingHandle = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)this, &v15);
  if ( ADGProcessBindingHandle < 0 )
    goto LABEL_10;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v14);
  if ( ADGProcessBindingHandle >= 0 )
  {
    v16.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, v14).Pointer;
    ADGProcessBindingHandle = (int)v16.Pointer;
    if ( SLODWORD(v16.Simple) < 0
      && (unsigned int)dword_1801884D0 > 2
      && TlgKeywordOn((TraceLoggingHProvider)&dword_1801884D0, 1uLL) )
    {
      v18 = (const char *)(this + 12);
      v19 = 4LL;
      p_ADGProcessBindingHandle = (RPC_BINDING_HANDLE *)&ADGProcessBindingHandle;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_180149509, a3, a4, 4u, &pData);
    }
    if ( ADGProcessBindingHandle >= 0
      || ADGProcessBindingHandle == -2147023170
      || ADGProcessBindingHandle == -2147023174 )
    {
LABEL_10:
      WaitForSingleObjectEx(this[11], 0xFFFFFFFF, 0);
      v6 = (char *)this[11];
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v6);
        this[11] = 0LL;
      }
      *((_DWORD *)this + 24) = 0;
      *((_BYTE *)this + 101) = 1;
      *((_DWORD *)this + 34) = GetTickCount();
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( v14 )
  {
    Binding = v14;
    v8 = RpcBindingFree(&Binding);
    if ( v8 )
      wil::details::in1diag3::_Log_Win32(retaddr, v9, (unsigned int)a3, (const char *)v8, cData);
  }
  if ( ADGProcessBindingHandle < 0 && (unsigned int)dword_1801884D0 > 2 )
  {
    v18 = "CAudioDGProcess::DoShutdownADG";
    v19 = 31LL;
    LODWORD(Binding) = 821;
    p_ADGProcessBindingHandle = &Binding;
    v21 = 4LL;
    v22 = &ADGProcessBindingHandle;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, a3, a4, 5u, &pData);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
