/*
 * XREFs of ?OnInputDisplayBindingChanged@Win32kInterop@@UEAAJIPEAUIDisplayBinding@@@Z @ 0x18000F290
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::OnInputDisplayBindingChanged(
        Win32kInterop *this,
        char a2,
        struct IDisplayBinding *a3)
{
  signed int v4; // ebx
  __int64 v5; // rcx
  int v6; // r9d

  if ( (a2 & 2) == 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(struct IDisplayBinding *))(*(_QWORD *)a3 + 32LL))(a3) == 1 )
  {
    if ( !*((_BYTE *)this + 40) )
    {
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        v4 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v4 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_15;
          v6 = 350;
          goto LABEL_14;
        }
      }
      *((_BYTE *)this + 40) = 1;
    }
  }
  else if ( *((_BYTE *)this + 40) )
  {
    if ( !(unsigned int)MITDisableMouseIntercept() )
    {
      v4 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( v4 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_15:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v6 = 361;
LABEL_14:
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, v4);
        goto LABEL_15;
      }
    }
    *((_BYTE *)this + 40) = 0;
  }
  return (unsigned int)v4;
}
