/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F39F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180069120 (RtlSplay.c)
 *     FindNodeOrParent @ 0x180069328 (FindNodeOrParent.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent; // eax

  NodeOrParent = FindNodeOrParent(a1, a2, a3);
  *a4 = NodeOrParent;
  if ( NodeOrParent != 1 )
    return 0LL;
  *a1 = (__int64)RtlSplay((_QWORD *)*a3);
  return *a3 + 40LL;
}
