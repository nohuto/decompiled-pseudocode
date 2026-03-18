/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1400E1408
 * Callers:
 *     MiFreeMdlPageRun @ 0x1400E1354 (MiFreeMdlPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(unsigned __int64 a1, int a2)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 v7; // r15
  bool v8; // zf
  _QWORD *v9; // rcx
  __int16 v10; // dx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8

  v3 = 48 * a1;
  v5 = 1LL;
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)), a1, 1uLL, 0, 0);
  if ( a2 < 0 )
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v8 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v8 )
  {
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(v6 + 34) &= ~0x10u;
      v10 = 1;
    }
    else
    {
      v9 = (_QWORD *)qword_1403885E8;
      if ( qword_1403885E8 && ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 1 )
      {
        v12 = v3 / 48;
        while ( v9 )
        {
          v13 = v9[3];
          if ( v12 < v13 )
          {
            v9 = (_QWORD *)*v9;
          }
          else
          {
            if ( v12 - v13 < v9[4] )
            {
              v10 = 256;
              goto LABEL_7;
            }
            v9 = (_QWORD *)v9[1];
          }
        }
      }
      v10 = 2;
    }
LABEL_7:
    MiInsertPageInFreeOrZeroedList(a1, v10);
  }
  else
  {
    *(_BYTE *)(v6 + 34) |= 7u;
    v5 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v7);
  return v5;
}
