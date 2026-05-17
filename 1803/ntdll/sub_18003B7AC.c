/*
 * XREFs of sub_18003B7AC @ 0x18003B7AC
 * Callers:
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003B7AC(__int64 a1, int a2, int a3, char a4, __int64 *a5)
{
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16[3]; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-A8h]
  _WORD v19[128]; // [rsp+60h] [rbp-A0h] BYREF

  sub_18003BC9C(0LL, a1, 5288LL);
  v17 = 0x1000000;
  v19[0] = 0;
  v9 = (2 * (a3 & 4)) | 0x40;
  if ( (a3 & 2) == 0 )
    v9 = 2 * (a3 & 4);
  v10 = v9 | 0x80;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
  v11 = v10 | 0x100;
  if ( (a3 & 0x1000) == 0 )
    v11 = v10;
  v12 = v11 | 0x400000;
  if ( a3 >= 0 )
    v12 = v11;
  v15 = v12;
  v18 = v19;
  v16[0] = sub_18003B92C(a1, &v17, 0LL, &v15);
  if ( (v16[0] & 0x80000000) == 0 )
  {
    v13 = v15;
    if ( !a4 )
      v13 = v15 | 1;
    sub_18003829C((__int64)&v17, a2, v13, 4, 0LL, 0LL, a5, (int *)v16);
  }
  if ( v19 != v18 )
    RtlDeleteBoundaryDescriptor((__int64)v18);
  v17 = 0x1000000;
  v18 = v19;
  v19[0] = 0;
  sub_18003BC9C(0LL, a1, 5289LL);
  return v16[0];
}
