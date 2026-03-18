/*
 * XREFs of CmpDelayedDerefKeys @ 0x14048D3E4
 * Callers:
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x14048D130 (CmpReportNotifyHelper.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *(void ***)v2;
    if ( *((void ***)v2 + 1) != a1 || v3[1] != v2 )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
