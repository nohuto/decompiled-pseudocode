/*
 * XREFs of ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7DB8
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(P + 32));
  v2 = (void *)*((_QWORD *)P + 2);
  if ( !v2 )
    goto LABEL_3;
  while ( 1 )
  {
    ExFreePoolWithTag(v2, 0);
LABEL_3:
    v3 = *(_QWORD **)P;
    if ( *(char **)P == P )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v3);
    v2 = v3;
  }
  ExFreePoolWithTag(P, 0);
}
