/*
 * XREFs of ?Create@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D7D08
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077618 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00D8054 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 */

_QWORD *NSInstrumentation::CTypeIsolation<49152,192>::Create()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  void *v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<49152,192>::Initialize(PoolWithTag) )
  {
    v3 = (void *)v1[2];
    if ( !v3 )
      goto LABEL_6;
    while ( 1 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_6:
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
    return 0LL;
  }
  return v1;
}
