/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18004C800
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x180052F34 (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpCheckRelativeDrive @ 0x18007BAE8 (RtlpCheckRelativeDrive.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DE5B4 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180049B30 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(_WORD *a1, wchar_t **a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             a1,
             a2[1],
             (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
             *(_QWORD *)(a3 + 8),
             (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1,
             &v6);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *(_WORD *)a3 = 2 * v5;
  return result;
}
