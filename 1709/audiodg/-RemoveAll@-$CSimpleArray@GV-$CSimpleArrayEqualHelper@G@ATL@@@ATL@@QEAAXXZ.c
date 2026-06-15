/*
 * XREFs of ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x140046B08
 * Callers:
 *     ??1CAtlWinModule@ATL@@QEAA@XZ @ 0x14001C750 (--1CAtlWinModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     free @ 0x14001D9A0 (free.c)
 */

void __fastcall ATL::CSimpleArray<unsigned short,ATL::CSimpleArrayEqualHelper<unsigned short>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
