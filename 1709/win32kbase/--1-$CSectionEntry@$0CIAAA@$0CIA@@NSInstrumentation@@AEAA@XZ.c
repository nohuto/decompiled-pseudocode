/*
 * XREFs of ??1?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ @ 0x1C0090964
 * Callers:
 *     ?AllocateType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0042614 (-AllocateType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0090910 (-Create@-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C009ACF8 (-Create@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C009BDB8 (-Destroy@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionEntry<163840,640>::~CSectionEntry<163840,640>(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = a1[4];
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = *(_QWORD *)(v1 + 16);
    if ( v3 != v4 )
      RtlFindSetBits((PRTL_BITMAP)(v3 ^ v4), 1u, 0);
    if ( *(_QWORD *)v1 )
      ExFreePoolWithTag(*(PVOID *)v1, 0);
    if ( *(_QWORD *)(v1 + 24) != *(_QWORD *)(v1 + 16) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v1 + 24) ^ *(_QWORD *)(v1 + 16)), 0);
    ExFreePoolWithTag((PVOID)v1, 0);
    a1[4] = 0LL;
  }
  v5 = (void *)a1[3];
  if ( v5 )
  {
    MmUnmapViewInSessionSpace(v5);
    a1[3] = 0LL;
  }
  v6 = (void *)a1[2];
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    a1[2] = 0LL;
  }
}
