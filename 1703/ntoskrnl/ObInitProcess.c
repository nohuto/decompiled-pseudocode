/*
 * XREFs of ObInitProcess @ 0x14049CA68
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140432F5C (ExpRemoveHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, _KPROCESS *a2, unsigned int a3, _BYTE *a4)
{
  volatile __int64 *v8; // rsi
  int v9; // ebp
  __int64 HandleTable; // rbp
  _QWORD *v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable((__int64)a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].ActiveProcessors.Bitmap[5] = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))ObAuditInheritedHandleProcedure,
          (__int64)v13,
          0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 95);
      return 0LL;
    }
    else
    {
      a2[1].ActiveProcessors.Bitmap[5] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 95);
      return 3221225626LL;
    }
  }
  v8 = (volatile __int64 *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable((__int64)a2, v8, a3, a4, (unsigned int **)&P);
  if ( v9 >= 0 )
  {
    HandleTable = (__int64)P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection(a1 + 95);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, (__int64)P, 0);
    ExpRemoveHandleTable((__int64)v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
