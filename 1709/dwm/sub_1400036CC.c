/*
 * XREFs of sub_1400036CC @ 0x1400036CC
 * Callers:
 *     wWinMainCRTStartup @ 0x140003930 (wWinMainCRTStartup.c)
 * Callees:
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 *     _XcptFilter_0 @ 0x140003FC8 (_XcptFilter_0.c)
 *     _amsg_exit_0 @ 0x140004069 (_amsg_exit_0.c)
 *     _IsNonwritableInCurrentImage @ 0x1400040D0 (_IsNonwritableInCurrentImage.c)
 *     _initterm_0 @ 0x140004220 (_initterm_0.c)
 *     _guard_dispatch_icall_nop @ 0x140006950 (_guard_dispatch_icall_nop.c)
 */

int sub_1400036CC()
{
  PVOID StackBase; // rbx
  int v1; // esi
  signed __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // eax
  int result; // eax
  wchar_t *v6; // rcx
  BOOL v7; // edx
  int wShowWindow; // r9d
  struct _STARTUPINFOW v9; // [rsp+40h] [rbp-78h] BYREF

  GetStartupInfoW(&v9);
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  v1 = 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)StackBase, 0LL);
    if ( !v2 )
      break;
    if ( (PVOID)v2 == StackBase )
    {
      v1 = 1;
      break;
    }
    Sleep(0x3E8u);
  }
  if ( _native_startup_state == 1 )
  {
    amsg_exit_0(31LL);
LABEL_18:
    if ( _native_startup_state == 1 )
    {
      initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
      _native_startup_state = 2;
    }
    if ( !v1 )
      _InterlockedExchange64(&_native_startup_lock, 0LL);
    if ( _dyn_tls_init_callback && (unsigned int)IsNonwritableInCurrentImage(&_dyn_tls_init_callback) )
      _guard_dispatch_icall_fptr();
    v6 = _wcmdln;
    if ( !_wcmdln )
      return 255;
    v7 = 0;
    while ( *v6 > 0x20u || *v6 && v7 )
    {
      if ( *v6 == 34 )
        v7 = !v7;
      ++v6;
    }
    while ( (unsigned __int16)(*v6 - 1) <= 0x1Fu )
      ++v6;
    wShowWindow = 10;
    if ( (v9.dwFlags & 1) != 0 )
      wShowWindow = v9.wShowWindow;
    result = wWinMain(&_ImageBase, 0LL, v6, wShowWindow);
    dword_14000F28C = result;
    if ( !dword_14000F2B0 )
      exit(result);
    if ( !dword_14000F290 )
    {
      _cexit();
      return dword_14000F28C;
    }
    return result;
  }
  if ( _native_startup_state )
  {
    dword_14000F290 = 1;
    goto LABEL_18;
  }
  _native_startup_state = 1;
  v3 = &_xi_a;
  v4 = 0;
  while ( v3 < &_xi_z )
  {
    if ( v4 )
      return 255;
    if ( *v3 )
      v4 = _guard_dispatch_icall_fptr();
    ++v3;
  }
  if ( !v4 )
    goto LABEL_18;
  return 255;
}
