/*
 * XREFs of ?__abi_winrt_cast_use_helper@@YAPE$AAVObject@Platform@@_NPEAXAEBU_GUID@@PEAU__abi_IUnknown@@@Z @ 0x18014737C
 * Callers:
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_cast_use_helper(
        char a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int v7; // eax
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( a4 )
    return a4;
  v8 = 0LL;
  if ( a2 )
  {
    v7 = (**a2)(a2, a3, &v8);
    if ( !a1 || !v7 )
    {
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      return v8;
    }
  }
  return v4;
}
