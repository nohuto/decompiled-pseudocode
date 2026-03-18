/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C00BEBD0
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C00BECAC (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  void *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v3 = (void *)v1[2];
    if ( !v3 )
      goto LABEL_4;
    while ( 1 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_4:
      v4 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 )
        break;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v4);
      v3 = v4;
    }
    ExFreePoolWithTag(v1, 0);
  }
  v7 = *(_QWORD **)(a1 + 32);
  if ( v7 )
  {
    v8 = (void *)v7[2];
    if ( !v8 )
      goto LABEL_13;
    while ( 1 )
    {
      ExFreePoolWithTag(v8, 0);
LABEL_13:
      v9 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        break;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v9);
      v8 = v9;
    }
    ExFreePoolWithTag(v7, 0);
  }
}
