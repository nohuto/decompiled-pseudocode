/*
 * XREFs of ObInitProcess @ 0x1404EAAEC
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1405477A8 (ExpRemoveHandleTable.c)
 *     ExEnumHandleTable @ 0x14054B830 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x140553220 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  int v9; // ebp
  PVOID HandleTable; // rbp
  PVOID v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1048) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 95);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1048) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 95);
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
  if ( v9 >= 0 )
  {
    HandleTable = P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection(a1 + 95);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
