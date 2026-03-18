/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0077838
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C0077714 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE.c)
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00777DC (-Destroy@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<233472,912>::Destroy(_QWORD *P)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  while ( 1 )
  {
    v3 = (_QWORD *)*P;
    if ( (_QWORD *)*P == P )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CSectionEntry<233472,912>::Destroy(v3);
  }
  ExFreePoolWithTag(P, 0);
}
