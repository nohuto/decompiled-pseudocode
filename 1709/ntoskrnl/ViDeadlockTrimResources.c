/*
 * XREFs of ViDeadlockTrimResources @ 0x1407BD294
 * Callers:
 *     ViDeadlockSearchResource @ 0x1407BD10C (ViDeadlockSearchResource.c)
 * Callees:
 *     ViDeadlockForgetResourceHistory @ 0x1407BC804 (ViDeadlockForgetResourceHistory.c)
 */

PVOID __fastcall ViDeadlockTrimResources(_QWORD **a1, _QWORD *a2)
{
  unsigned int *v2; // rax
  PVOID result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx

  v2 = (unsigned int *)ViDeadlockGlobals;
  ++*((_DWORD *)ViDeadlockGlobals + 8212);
  result = (PVOID)v2[8212];
  if ( ((unsigned __int8)result & 0xF) == 0 )
  {
    v6 = *a1;
    while ( v6 != a1 )
    {
      v7 = (__int64)(v6 - 5);
      v6 = (_QWORD *)*v6;
      result = ViDeadlockForgetResourceHistory(v7, ViDeadlockTrimThreshold, ViDeadlockAgeWindow, a2);
    }
  }
  return result;
}
