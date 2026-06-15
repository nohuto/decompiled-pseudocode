/*
 * XREFs of ?_SetCapacity@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_N_K@Z @ 0x1800211F4
 * Callers:
 *     ?push_back@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z @ 0x1800212EC (-push_back@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

bool __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::_SetCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbp
  bool v7; // si
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v4 = 0LL;
  else
    v4 = (__int64)operator new(8 * a2, (const struct std::nothrow_t *)&unk_18002FEFA);
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 8 * a2;
  }
  else
  {
    v4 = -1LL;
    v5 = -1LL;
    v6 = -1LL;
  }
  v7 = v4 != -1;
  if ( v4 != -1 )
  {
    v8 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
    {
      v7 = 1;
      do
      {
        v9 = *v8++;
        *(_QWORD *)v5 = v9;
        v5 += 8LL;
      }
      while ( v8 != *(__int64 **)(a1 + 8) );
    }
    if ( *(_QWORD *)a1 != -1LL )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)a1 != v10 )
      {
        do
          v10 -= 8LL;
        while ( *(_QWORD *)a1 != v10 );
        *(_QWORD *)(a1 + 8) = v10;
      }
      operator delete(*(void **)a1, (const struct std::nothrow_t *)&unk_18002FEFA);
    }
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
  }
  return v7;
}
