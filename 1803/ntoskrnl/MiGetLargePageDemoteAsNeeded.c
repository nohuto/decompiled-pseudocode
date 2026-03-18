/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x1400BBBB8
 * Callers:
 *     MiGetLargePageChain @ 0x1400BBB00 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 * Callees:
 *     MiGetFreeZeroLargePage @ 0x140055FD0 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14014C928 (MiDemoteLargeFreeZeroPage.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // ebp
  __int64 v9; // rdi
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  unsigned int v13; // ecx

  v4 = a4;
  if ( *(_QWORD *)(1984LL * a2 + *(_QWORD *)(a1 + 16) + 1808) || !(_DWORD)InitializationPhase )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = !(a4 & 1) + 1;
    if ( (a4 & 1) == 0 )
      v4 = a4 | 1;
    do
    {
      v11 = MiLargePageSizes[v9];
      if ( v11 <= a3 )
      {
        if ( v11 < 0x200 )
        {
          if ( v8 && (unsigned int)MiDemoteLargeFreeZeroPage(a1, a2, v8, v4) )
          {
            LODWORD(v9) = 0;
          }
          else
          {
            if ( !--v10 )
              return 0LL;
            v4 &= ~1u;
            LODWORD(v9) = -1;
          }
        }
        else
        {
          result = MiGetFreeZeroLargePage(a1, v9, v4, a2, 0, 4);
          v13 = v9;
          if ( v8 )
            v13 = v8;
          v8 = v13;
          if ( result )
            return result;
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 3 );
  }
  return 0LL;
}
