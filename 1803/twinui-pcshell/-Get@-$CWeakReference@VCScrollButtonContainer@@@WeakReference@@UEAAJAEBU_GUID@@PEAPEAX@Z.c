/*
 * XREFs of ?Get@?$CWeakReference@VCScrollButtonContainer@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180298750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakReference::CWeakReference<CScrollButtonContainer>::Get(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 16);
  if ( !v1 )
    return 2147943568LL;
  v3 = (**v1)(v1);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v3);
  return v4;
}
