/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180013740
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18000F304 (--0Win32kInterop@@QEAA@XZ.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180013860 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  Win32kInterop *v6; // rdi
  int v7; // ebx
  struct Win32kInterop *v8; // rax
  Win32kInterop *v9; // rax
  Win32kInterop *v10; // rbx

  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-2147024809;
  v7 = 0;
  if ( !a2 || !a3 )
    return (unsigned int)-2147024809;
  v8 = Win32kInterop::s_pInterop;
  if ( Win32kInterop::s_pInterop )
    goto LABEL_20;
  v9 = (Win32kInterop *)malloc(0x9E8uLL);
  v10 = v9;
  if ( v9 )
    memset_0(v9, 0, 0x9E8uLL);
  if ( v10 )
    v6 = Win32kInterop::Win32kInterop(v10);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = Win32kInterop::Initialize(v6, a1, a2);
    if ( v7 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
LABEL_21:
      if ( v7 >= 0 )
        return (unsigned int)v7;
      goto LABEL_22;
    }
    v8 = v6;
    Win32kInterop::s_pInterop = v6;
LABEL_20:
    *a3 = v8;
    goto LABEL_21;
  }
  v7 = -2147024882;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_22:
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v6 + 3) + 24LL))((__int64)v6 + 24, 1LL);
  return (unsigned int)v7;
}
