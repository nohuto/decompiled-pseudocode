/*
 * XREFs of WPP_SF_L @ 0x1C0004B8C
 * Callers:
 *     CiConfigQueryValue @ 0x1C000DAE0 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_L(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
           11LL,
           &v5,
           4LL,
           0LL);
}
