/*
 * XREFs of StorInsertDictionary @ 0x1C001595C
 * Callers:
 *     RaidAdapterInsertUnit @ 0x1C00158C8 (RaidAdapterInsertUnit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorInsertDictionary(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v2)(__int64 *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  unsigned int (__fastcall *v5)(__int64); // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *i; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 **v13; // rax

  v2 = *(__int64 (__fastcall **)(__int64 *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v5 = *(unsigned int (__fastcall **)(__int64))(a1 + 40);
  v7 = v2(a2);
  v8 = *(_QWORD *)(a1 + 16) + 16LL * (v5(v7) % *(_DWORD *)(a1 + 4));
  for ( i = *(__int64 **)v8; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v8 )
    {
      ++*(_DWORD *)a1;
      v13 = *(__int64 ***)(v8 + 8);
      if ( *v13 != (__int64 *)v8 )
        __fastfail(3u);
      *a2 = v8;
      a2[1] = (__int64)v13;
      *v13 = a2;
      *(_QWORD *)(v8 + 8) = a2;
      return 0LL;
    }
    v10 = v2(a2);
    v11 = v2(i);
    v12 = v4(v11, v10);
    if ( !v12 )
      break;
    if ( v12 < 0 )
    {
      *a2 = (__int64)i;
      a2[1] = i[1];
      i[1] = (__int64)a2;
      *(_QWORD *)a2[1] = a2;
      ++*(_DWORD *)a1;
      return 0LL;
    }
  }
  return 3221226026LL;
}
