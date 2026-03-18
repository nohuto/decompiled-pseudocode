/*
 * XREFs of ?Create@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0CMAAA@$0CMA@@2@XZ @ 0x1C00D7B88
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077618 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7ED8 (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 */

char *NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Create()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  void *v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x80uLL);
  *((_QWORD *)v1 + 2) = 0LL;
  *((_DWORD *)v1 + 6) = 0;
  *((_QWORD *)v1 + 1) = v1;
  *(_QWORD *)v1 = v1;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(v1) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 32));
    v3 = (void *)*((_QWORD *)v1 + 2);
    if ( !v3 )
      goto LABEL_6;
    while ( 1 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_6:
      v4 = *(_QWORD **)v1;
      if ( *(char **)v1 == v1 )
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
    return 0LL;
  }
  return v1;
}
