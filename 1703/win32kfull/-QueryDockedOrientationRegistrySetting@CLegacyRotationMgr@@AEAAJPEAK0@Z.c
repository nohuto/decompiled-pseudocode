/*
 * XREFs of ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01A913C
 * Callers:
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01A8E48 (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(
        CLegacyRotationMgr *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  char v6; // cl
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  _BYTE v11[20]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[8]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v13; // [rsp+5Ch] [rbp-A4h]
  int v14; // [rsp+64h] [rbp-9Ch]
  _BYTE v15[192]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 1;
  v7 = 3;
  result = DrvQueryDisplayConfig(3221225490LL, &v8, v11, &v7, v15, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v14 == 0x80000000 || v14 == 11 || v14 == 13 )
    {
      result = DrvGetMonitorOrientation(v12, v13, &v10, &v9);
      if ( (int)result >= 0 )
      {
        v6 = v9 - v10;
        *a2 = v10;
        *a3 = v6 & 3;
        return 0LL;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
