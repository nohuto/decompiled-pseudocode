/*
 * XREFs of _guard_check_icall @ 0x1401898B0
 * Callers:
 *     bsearch @ 0x14015EEB0 (bsearch.c)
 *     bsearch_s @ 0x14015EFC0 (bsearch_s.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     qsort_s @ 0x140161150 (qsort_s.c)
 *     sub_140169480 @ 0x140169480 (sub_140169480.c)
 *     sub_14016A3D0 @ 0x14016A3D0 (sub_14016A3D0.c)
 *     sub_14016A490 @ 0x14016A490 (sub_14016A490.c)
 *     sub_140175490 @ 0x140175490 (sub_140175490.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
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
