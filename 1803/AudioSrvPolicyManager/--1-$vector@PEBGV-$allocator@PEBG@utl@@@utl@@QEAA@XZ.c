/*
 * XREFs of ??1?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA@XZ @ 0x18002AB70
 * Callers:
 *     _IsEUCountry_::_1_::dtor$0 @ 0x1800379EA (_IsEUCountry_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::~vector<unsigned short const *,utl::allocator<unsigned short const *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)-1LL )
  {
    *(_QWORD *)(a1 + 8) = v2;
    operator delete(v2, (const struct std::nothrow_t *)&std::nothrow);
  }
}
