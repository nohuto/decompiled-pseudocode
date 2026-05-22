/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x180013EC8
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x180013FBC (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180013420 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(Win32kInterop *this, unsigned int a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  _DWORD *v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx

  if ( !Win32kInterop::IsDeviceAttached(this, a2, 0) )
    return;
  InputETW::Win32kInterop::ProcessDeviceRemoval(a2);
  if ( a2 == *((_DWORD *)this + 20) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
LABEL_6:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return;
  }
  v4 = 0;
  if ( !*((_DWORD *)this + 18) )
    goto LABEL_6;
  v5 = *((_QWORD *)this + 8);
  while ( *(_DWORD *)(v5 + 16LL * v4) != a2 )
  {
    if ( ++v4 >= *((_DWORD *)this + 18) )
      goto LABEL_6;
  }
  v6 = *(_DWORD **)(v5 + 16LL * v4 + 8);
  if ( (*(int (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7), v6) < 0 )
    goto LABEL_6;
  v7 = 0;
  if ( !*((_DWORD *)this + 18) )
    goto LABEL_6;
  v8 = *((_QWORD *)this + 8);
  while ( *(_DWORD *)(v8 + 16LL * v7) != *v6 )
  {
    if ( ++v7 >= *((_DWORD *)this + 18) )
      goto LABEL_6;
  }
  v9 = 2LL * v7;
  *(_DWORD *)(v8 + 8 * v9) = *((_DWORD *)this + 20);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9 + 8) = 0LL;
  --*((_DWORD *)this + 19);
  operator delete(v6);
}
