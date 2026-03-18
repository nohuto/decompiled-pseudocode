/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C009BDB8
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ @ 0x1C0090964 (--1-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<163840,640>::Destroy(_QWORD *P)
{
  void *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v2 = (void *)P[2];
  if ( !v2 )
    goto LABEL_3;
  while ( 1 )
  {
    ExFreePoolWithTag(v2, 0);
LABEL_3:
    v3 = (_QWORD *)*P;
    if ( (_QWORD *)*P == P )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CSectionEntry<163840,640>::~CSectionEntry<163840,640>(v3);
    v2 = v3;
  }
  ExFreePoolWithTag(P, 0);
}
