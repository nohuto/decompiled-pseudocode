/*
 * XREFs of RtlDeleteElementGenericTable @ 0x180065A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180065EBC @ 0x180065EBC (sub_180065EBC.c)
 *     RtlDelete @ 0x180065F60 (RtlDelete.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlDeleteElementGenericTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void (__fastcall *v6)(__int64, __int64); // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_180065EBC(a1, a2, &v8) != 1 )
    return 0;
  v3 = v8;
  *(_QWORD *)a1 = RtlDelete(v8);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(_QWORD **)(v3 + 32);
  if ( *(_QWORD *)(v4 + 8) != v3 + 24 || *v5 != v3 + 24 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) = 0;
  v6 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
  *(_QWORD *)(a1 + 24) = a1 + 8;
  v6(a1, v3);
  return 1;
}
