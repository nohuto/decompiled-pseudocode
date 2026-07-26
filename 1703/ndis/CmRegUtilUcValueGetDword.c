/*
 * XREFs of CmRegUtilUcValueGetDword @ 0x1C00F3F2C
 * Callers:
 *     CmRegUtilWstrValueGetDword @ 0x1C00F41E8 (CmRegUtilWstrValueGetDword.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmRegUtilUcValueGetDword(void *a1, _UNICODE_STRING *a2, __int64 a3, _DWORD *a4)
{
  int v5; // ebx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[6]; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  result = ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v8, 0x10u, &v7);
  if ( result >= 0 )
  {
    if ( v8[1] == 4 )
      v5 = v8[3];
    else
      result = -1073741788;
  }
  *a4 = v5;
  return result;
}
