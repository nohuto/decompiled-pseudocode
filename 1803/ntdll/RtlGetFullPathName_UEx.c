/*
 * XREFs of RtlGetFullPathName_UEx @ 0x18003C1A0
 * Callers:
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180080740 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlGetFullPathName_UEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  int v10; // eax
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  result = RtlInitUnicodeStringEx(v11, a1);
  if ( (int)result >= 0 )
  {
    v10 = sub_18003D640(v11, a2, a3, a4, 0LL, &a5);
    if ( v10 )
    {
      if ( v5 )
        *v5 = v10;
      return 0LL;
    }
    else
    {
      return 3221225523LL;
    }
  }
  return result;
}
