/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x140154CA0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1400DFF6C (FindNodeOrParent.c)
 *     RealPredecessor @ 0x14012FCC0 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  if ( (unsigned int)FindNodeOrParent((__int64)Table, (__int64)Buffer, &v10) != 1 )
    return 0LL;
  v7 = v10;
  do
  {
    v8 = v7;
    v9 = RealPredecessor(v7);
    v7 = v9;
  }
  while ( v9 && Table->CompareRoutine(Table, Buffer, v9 + 4) == GenericEqual );
  *RestartKey = v8;
  return v8 + 4;
}
