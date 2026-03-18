/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C00F4770
 * Callers:
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi

  LOBYTE(a3) = 3;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3, 152LL);
  v6 = 0LL;
  v7 = v4;
  if ( a1 )
  {
    if ( !v4 )
      return v6;
    if ( PsGetCurrentProcess(v5) == gpepCSRSS )
      *(_QWORD *)(v7 + 24) = 0LL;
  }
  if ( v7 )
  {
    v6 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v6;
}
