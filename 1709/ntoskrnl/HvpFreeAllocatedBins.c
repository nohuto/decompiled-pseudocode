/*
 * XREFs of HvpFreeAllocatedBins @ 0x140694950
 * Callers:
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 * Callees:
 *     HvpMapEntryIsNewAlloc @ 0x140016590 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsBinPresent @ 0x140016938 (HvpMapEntryIsBinPresent.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 */

char __fastcall HvpFreeAllocatedBins(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rcx
  _BYTE *v8; // rcx
  __int64 FreeBin; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx

  v2 = *(_DWORD *)(a1 + 1400) >> 12;
  if ( v2 )
    v3 = (unsigned int)(v2 - 1) >> 9;
  else
    v3 = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v4 = 0LL;
    do
    {
      v5 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1408) + 8 * v4) + 8LL;
      do
      {
        LOBYTE(v2) = HvpMapEntryIsBinPresent(v6 - 8);
        if ( (_BYTE)v2 )
        {
          LOBYTE(v2) = HvpMapEntryIsNewAlloc(v7);
          if ( (_BYTE)v2 )
          {
            FreeBin = HvpMapEntryGetFreeBin(v8);
            v10 = (_QWORD *)FreeBin;
            if ( FreeBin )
            {
              if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
                HvpFreeBin(
                  a1,
                  *(_DWORD *)(v6 + 24),
                  0,
                  *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL,
                  *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
              v11 = *v10;
              if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
                __fastfail(3u);
              *v12 = v11;
              *(_QWORD *)(v11 + 8) = v12;
              LOBYTE(v2) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 32))(v10, 32LL);
            }
            else
            {
              LOBYTE(v2) = HvpFreeBin(
                             a1,
                             *(_DWORD *)(v6 + 24),
                             0,
                             *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL,
                             *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
            }
          }
          *(_QWORD *)v6 = 0LL;
          *(_QWORD *)(v6 + 8) = 0LL;
        }
        ++v5;
        v6 += 40LL;
      }
      while ( v5 < 0x200 );
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= v3 );
  }
  return v2;
}
