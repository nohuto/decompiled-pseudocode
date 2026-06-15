/*
 * XREFs of ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x140044D78
 * Callers:
 *     ??1CAtlWinModule@ATL@@QEAA@XZ @ 0x14001B814 (--1CAtlWinModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     free @ 0x14001CA60 (free.c)
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
