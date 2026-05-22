/*
 * XREFs of _anonymous_namespace_::ReadRegistryFloat @ 0x18009B484
 * Callers:
 *     _anonymous_namespace_::ReadPoseDataFromRegistry @ 0x18009B60C (_anonymous_namespace_--ReadPoseDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::ReadRegistryFloat(HKEY a1, const WCHAR *a2, float *a3)
{
  LSTATUS ValueW; // ecx
  __int64 result; // rax
  double v6; // xmm0_8
  float v7; // xmm1_4
  DWORD v8; // [rsp+40h] [rbp-38h] BYREF
  wchar_t String[16]; // [rsp+48h] [rbp-30h] BYREF

  v8 = 32;
  ValueW = RegGetValueW(a1, 0LL, a2, 2u, 0LL, String, &v8);
  if ( ValueW )
  {
    result = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    v6 = _wtof(String);
    result = 0LL;
    v7 = v6;
    *a3 = v7;
  }
  return result;
}
