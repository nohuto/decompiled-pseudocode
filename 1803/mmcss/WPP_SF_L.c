/*
 * XREFs of WPP_SF_L @ 0x1C00027D0
 * Callers:
 *     CiConfigQueryValue @ 0x1C000CDD4 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_L(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
           11LL,
           &v5,
           4LL,
           0LL);
}
