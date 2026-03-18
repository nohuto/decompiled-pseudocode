/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C0123F00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1C0122B08 (DpiAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v7; // rax

  if ( a1 && a2 )
  {
    v5 = DpiAcquirePostDisplayOwnership(a1, a2, 0LL, a4);
    if ( v5 >= 0 )
      memmove(a2 + 8, &xmmword_1C0060AB0, 0x80uLL);
  }
  else
  {
    v5 = -1073741811;
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
