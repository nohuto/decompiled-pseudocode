/*
 * XREFs of ObInitProcess @ 0x14053923C
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExCreateHandleTable @ 0x14045DA4C (ExCreateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1404DD198 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x140506320 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, struct _KPROCESS *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int *v8; // rsi
  int v9; // ebp
  unsigned int *HandleTable; // rbp
  _QWORD *v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (unsigned int *)ExCreateHandleTable((__int64)a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].ActiveProcessors.Bitmap[5] = (unsigned __int64)HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))ObAuditInheritedHandleProcedure,
          (__int64)v13,
          0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 95);
      return 0LL;
    }
    else
    {
      a2[1].ActiveProcessors.Bitmap[5] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 95);
      return 3221225626LL;
    }
  }
  v8 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (unsigned int **)&P);
  if ( v9 >= 0 )
  {
    HandleTable = (unsigned int *)P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection_0(a1 + 95);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, (__int64)P, 0);
    ExpRemoveHandleTable((__int64)v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
