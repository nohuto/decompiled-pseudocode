/*
 * XREFs of _guard_check_icall @ 0x1401B3510
 * Callers:
 *     bsearch @ 0x140188C00 (bsearch.c)
 *     bsearch_s @ 0x140188D10 (bsearch_s.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     qsort_s @ 0x1401895B0 (qsort_s.c)
 *     sub_140193530 @ 0x140193530 (sub_140193530.c)
 *     sub_140194520 @ 0x140194520 (sub_140194520.c)
 *     sub_1401945E0 @ 0x1401945E0 (sub_1401945E0.c)
 *     sub_14019FC10 @ 0x14019FC10 (sub_14019FC10.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KeGuardCheckICall @ 0x1402E97E0 (KeGuardCheckICall.c)
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
