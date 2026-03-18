/*
 * XREFs of PiDqActionDataFree @ 0x1404B997C
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)a1 )
  {
    v2 = (void *)a1[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = a1[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)a1 + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(a1, 0x58706E50u);
}
