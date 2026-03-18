/*
 * XREFs of ExMapHandleToPointerEx @ 0x1404F6FA8
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x1404F7000 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ExMapHandleToPointerEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
