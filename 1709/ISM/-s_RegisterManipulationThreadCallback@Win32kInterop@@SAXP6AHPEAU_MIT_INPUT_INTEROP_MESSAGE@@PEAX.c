/*
 * XREFs of ?s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x18000EAC0
 * Callers:
 *     RegisterManipulationThread @ 0x180005900 (RegisterManipulationThread.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     CreateEventForWin32kInteropInitialization @ 0x18000EA50 (CreateEventForWin32kInteropInitialization.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180010E88 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::s_RegisterManipulationThreadCallback(
        int (*a1)(struct _MIT_INPUT_INTEROP_MESSAGE *, void *),
        void *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  signed int LastError; // ebx
  HANDLE EventForWin32kInteropInitialization; // rdi
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  _QWORD v10[9]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  Win32kInterop::s_pfnMTCallback = a1;
  if ( gbIsRunningWithCShell )
    return;
  v11 = 0LL;
  v3 = CoreUICreate(&v11);
  if ( v3 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 113, v3);
    goto LABEL_5;
  }
  LastError = 0;
  EventForWin32kInteropInitialization = CreateEventForWin32kInteropInitialization();
  if ( EventForWin32kInteropInitialization
    || ((int)GetLastError() > 0
      ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
      : (LastError = GetLastError()),
        LastError >= 0) )
  {
    if ( !WaitForSingleObject(EventForWin32kInteropInitialization, 0xEA60u)
      || ((int)GetLastError() > 0
        ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
        : (LastError = GetLastError()),
          LastError >= 0) )
    {
      CloseHandle(EventForWin32kInteropInitialization);
      goto LABEL_24;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 235;
      goto LABEL_15;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 229;
LABEL_15:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v8, LastError);
  }
LABEL_24:
  if ( LastError < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 117, LastError);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v10[0] = off_1800D3340;
  v10[1] = a2;
  v10[7] = v10;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)Win32kInterop::s_pInterop + 344, &v11, 7LL, v10);
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
