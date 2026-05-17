/*
 * XREFs of RtlFindMessage @ 0x180021A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindMessageInTable @ 0x180021980 (RtlFindMessageInTable.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  int *v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[2] = a3;
  v10[1] = 1LL;
  v10[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (unsigned int)v10, 4, 64, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v8, &v9, 0LL);
    if ( (int)result >= 0 )
      return RtlFindMessageInTable(v9, a4, a5);
  }
  return result;
}
