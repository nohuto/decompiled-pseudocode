/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000EC74
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18000AFA8 (--0Win32kInterop@@QEAA@XZ.c)
 *     CreateEventForWin32kInteropInitialization @ 0x18000EA50 (CreateEventForWin32kInteropInitialization.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000EED8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  signed int LastError; // ebx
  Win32kInterop *v7; // rdi
  int v8; // r9d
  Win32kInterop *v9; // rax
  __int64 v10; // rcx
  Win32kInterop *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  HANDLE EventForWin32kInteropInitialization; // rax
  __int64 v15; // rcx
  int v16; // r9d

  LastError = 0;
  v7 = 0LL;
  if ( a1 )
  {
    if ( !a2 )
    {
      LastError = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)LastError;
      v8 = 174;
      goto LABEL_4;
    }
    if ( !a3 )
    {
      LastError = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)LastError;
      v8 = 175;
      goto LABEL_4;
    }
    if ( !Win32kInterop::s_pInterop )
    {
      v9 = (Win32kInterop *)malloc(0x1D8uLL);
      v11 = v9;
      if ( v9 )
        memset(v9, 0, 0x1D8uLL);
      if ( v11 )
        v7 = Win32kInterop::Win32kInterop(v11);
      else
        v7 = 0LL;
      if ( !v7 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 183, 14);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v12 = Win32kInterop::Initialize(v7, a1, a2);
      LastError = v12;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 186, v12);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      Win32kInterop::s_pInterop = v7;
      EventForWin32kInteropInitialization = CreateEventForWin32kInteropInitialization();
      Win32kInterop::s_hInteropInitializedEvent = EventForWin32kInteropInitialization;
      if ( !EventForWin32kInteropInitialization )
      {
        if ( (int)GetLastError() > 0 )
          LastError = (unsigned __int16)GetLastError() | 0x80070000;
        else
          LastError = GetLastError();
        if ( LastError < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_46:
            if ( LastError < 0 && v7 )
              (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 4) + 24LL))((__int64)v7 + 32, 1LL);
            return (unsigned int)LastError;
          }
          v16 = 196;
LABEL_36:
          McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, LastError);
          goto LABEL_46;
        }
        EventForWin32kInteropInitialization = Win32kInterop::s_hInteropInitializedEvent;
      }
      if ( !SetEvent(EventForWin32kInteropInitialization) )
      {
        LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( LastError < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_46;
          v16 = 201;
          goto LABEL_36;
        }
      }
    }
    *a3 = Win32kInterop::s_pInterop;
    goto LABEL_46;
  }
  LastError = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 173;
LABEL_4:
    McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v8, 87);
  }
  return (unsigned int)LastError;
}
