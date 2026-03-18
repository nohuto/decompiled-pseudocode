/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00D7FE8
 * Callers:
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D7C58 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C0C90 (-Create@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<81920,320>::Initialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *(_QWORD *)(a1 + 16) = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v3 = NSInstrumentation::CSectionEntry<81920,320>::Create();
  if ( !v3 )
    return 0;
  v4 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 24) = 240;
  if ( *v4 != a1 )
    __fastfail(3u);
  *v3 = a1;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(a1 + 8) = v3;
  return 1;
}
