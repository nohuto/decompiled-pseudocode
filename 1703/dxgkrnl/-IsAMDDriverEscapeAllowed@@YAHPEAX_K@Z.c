/*
 * XREFs of ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C01946E4
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAMDDriverEscapeAllowed(_DWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rax

  if ( a2 < 0xC )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 672LL;
    WdLogEvent5_WdError(v7);
  }
  else
  {
    v4 = a1[2] & 0xFFFFFF00;
    if ( (((_DWORD)v4 - 16778752) & 0xFFFFFCFF) != 0 || (_DWORD)v4 == 16779520 )
      return 1LL;
    v5 = WdLogNewEntry5_WdWarning(v4, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 659LL;
    WdLogEvent5_WdWarning(v5);
  }
  return 0LL;
}
