/*
 * XREFs of sub_180041914 @ 0x180041914
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180041914(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  int v10; // [rsp+40h] [rbp-2C8h] BYREF
  unsigned int v11[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v15; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v16; // [rsp+A8h] [rbp-260h]
  _WORD v17[128]; // [rsp+B0h] [rbp-258h] BYREF
  int v18; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD *v19; // [rsp+1B8h] [rbp-150h]
  _WORD v20[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  v10 = sub_180041ACC(&v15, a1);
  if ( v10 >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    memset(v14, 0, sizeof(v14));
    RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(a4 + 136));
    v11[0] = 0;
    v10 = sub_18003B92C((unsigned __int16 *)&v15, (unsigned __int16 *)&v18, a4, (int *)v11);
    if ( v10 >= 0 )
      sub_18003829C((__int64)&v18, a2, v11[0], a5, a4, a3, a6, &v10);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
  }
  if ( v17 != v16 )
    RtlDeleteBoundaryDescriptor((__int64)v16);
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v20 != v19 )
    RtlDeleteBoundaryDescriptor((__int64)v19);
  return (unsigned int)v10;
}
