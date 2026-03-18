/*
 * XREFs of ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402A8D50
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall SmpIoCompletionApc(char *a1, struct _IO_STATUS_BLOCK *a2)
{
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK *v3; // r9
  _DWORD *Pointer; // rcx
  struct _EX_RUNDOWN_REF *v6; // rax

  Status = a2->Status;
  v3 = a2 - 2;
  if ( a2->Status < 0 )
  {
    HIDWORD(v3[1].Information) |= 1u;
    Pointer = v3[1].Pointer;
    if ( Pointer )
      Pointer[1] = Status;
    else
      LODWORD(v3->Information) = Status;
  }
  if ( v3[1].Pointer )
    _InterlockedDecrement((volatile signed __int32 *)a1 + 1526);
  if ( (v3[1].Information & 0x400000000LL) != 0 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6176), 1, 0);
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue((__int64)a1, (unsigned __int64)v3, 1);
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *((_DWORD *)a1 + 1504) & 0x3FF);
    ExReleaseRundownProtection(v6 + 1);
  }
}
