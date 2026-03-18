/*
 * XREFs of _guard_check_icall @ 0x140189D70
 * Callers:
 *     bsearch @ 0x14016A470 (bsearch.c)
 *     bsearch_s @ 0x14016A580 (bsearch_s.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     qsort_s @ 0x14016C870 (qsort_s.c)
 *     sub_140174B40 @ 0x140174B40 (sub_140174B40.c)
 *     sub_140175A40 @ 0x140175A40 (sub_140175A40.c)
 *     sub_140175B00 @ 0x140175B00 (sub_140175B00.c)
 *     sub_140175D10 @ 0x140175D10 (sub_140175D10.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KeGuardCheckICall @ 0x140284430 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  __int64 v1; // rdx
  uintptr_t v2; // r10
  unsigned __int64 v3; // r10

  if ( (Target & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (Target >> 9));
  v2 = Target >> 3;
  if ( (Target & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(Target);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
