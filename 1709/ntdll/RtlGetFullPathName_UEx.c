/*
 * XREFs of RtlGetFullPathName_UEx @ 0x1800354C0
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180084F60 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x18008B480 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlGetFullPathName_UEx(__int64 a1, unsigned int a2, _WORD *a3, _QWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  int FullPathName_Ustr; // eax
  unsigned __int16 v11[12]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  result = RtlInitUnicodeStringEx((__int64)v11, a1);
  if ( (int)result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(v11, a2, a3, a4, 0LL, (__int64)&a5);
    if ( FullPathName_Ustr )
    {
      if ( v5 )
        *v5 = FullPathName_Ustr;
      return 0LL;
    }
    else
    {
      return 3221225523LL;
    }
  }
  return result;
}
