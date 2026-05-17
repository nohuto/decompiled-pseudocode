/*
 * XREFs of RtlGetFullPathName_UEx @ 0x18003BAA0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180085620 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
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
    v10 = sub_18003E520(v11, a2, a3, a4, 0LL, &a5);
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
