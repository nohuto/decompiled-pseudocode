/*
 * XREFs of ??1?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA@XZ @ 0x1800211C0
 * Callers:
 *     _IsEUCountry_::_1_::dtor$0 @ 0x180028E1B (_IsEUCountry_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::~vector<unsigned short const *,utl::allocator<unsigned short const *>>(
        __int64 a1)
{
  __int64 v1; // rax

  if ( *(_QWORD *)a1 != -1LL )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 != v1 )
    {
      do
        v1 -= 8LL;
      while ( *(_QWORD *)a1 != v1 );
      *(_QWORD *)(a1 + 8) = v1;
    }
    operator delete(*(void **)a1, (const struct std::nothrow_t *)&unk_18002FEFA);
  }
}
