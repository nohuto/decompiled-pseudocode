/*
 * XREFs of ntdll_8 @ 0x18007DD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall ntdll_8(void (__fastcall *a1)(__int64), __int64 a2, _ACTIVATION_CONTEXT *a3)
{
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  _BYTE v8[56]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 72LL;
  v7 = 1;
  memset(v8, 0, sizeof(v8));
  if ( a3 == (_ACTIVATION_CONTEXT *)-1LL )
  {
    a1(a2);
  }
  else
  {
    RtlActivateActivationContextUnsafeFast((__int64)&v6, (__int64)a3);
    a1(a2);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v6);
    RtlReleaseActivationContext(a3);
  }
}
