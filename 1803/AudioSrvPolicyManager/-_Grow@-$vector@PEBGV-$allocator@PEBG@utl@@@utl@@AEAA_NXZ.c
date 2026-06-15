/*
 * XREFs of ?_Grow@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_NXZ @ 0x18002AB98
 * Callers:
 *     ?push_back@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z @ 0x18002AC84 (-push_back@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800362AD (memcpy_0.c)
 */

char __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::_Grow(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // bp
  char *v4; // rbx
  char *v5; // rdi
  void *v6; // rcx
  char *v7; // rbp

  v2 = 7 * ((unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) >> 2) + 8;
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    v2 = 0xFFFFFFFFFFFFFFFLL;
  v3 = 0;
  if ( (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 < v2 )
  {
    v4 = (char *)operator new(8 * v2, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = &v4[8 * v2];
      if ( v4 != (char *)-1LL )
      {
        memcpy_0(v4, *(const void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
        v6 = *(void **)a1;
        v7 = &v4[8 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3)];
        if ( *(_QWORD *)a1 != -1LL )
        {
          *(_QWORD *)(a1 + 8) = v6;
          operator delete(v6, (const struct std::nothrow_t *)&std::nothrow);
        }
        *(_QWORD *)(a1 + 8) = v7;
        v3 = 1;
        *(_QWORD *)a1 = v4;
        *(_QWORD *)(a1 + 16) = v5;
      }
    }
  }
  return v3;
}
