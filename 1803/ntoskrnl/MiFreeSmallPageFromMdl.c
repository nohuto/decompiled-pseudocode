/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140136B00
 * Callers:
 *     MiFreeMdlPageRun @ 0x140136A30 (MiFreeMdlPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR a1, int a2)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  bool v9; // zf
  _QWORD *v10; // rcx
  __int16 v11; // dx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8

  v3 = 48 * a1;
  v5 = 1LL;
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)), a1, 1, 0, 0);
  v8 = *(_QWORD *)(v6 + 24);
  if ( a2 < 0 )
  {
    v8 |= 0x4000000000000000uLL;
    *(_QWORD *)(v6 + 24) = v8;
  }
  *(_QWORD *)(v6 + 24) = v8 & 0xC000000000000000uLL;
  v9 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v9 )
  {
    if ( (a2 & 1) != 0 )
    {
      v11 = 1;
      *(_BYTE *)(v6 + 34) &= ~0x10u;
    }
    else
    {
      v10 = (_QWORD *)qword_1403CB788;
      if ( qword_1403CB788 && ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 1 )
      {
        v13 = v3 / 48;
        while ( v10 )
        {
          v14 = v10[3];
          if ( v13 < v14 )
          {
            v10 = (_QWORD *)*v10;
          }
          else
          {
            if ( v13 - v14 < v10[4] )
            {
              v11 = 256;
              goto LABEL_7;
            }
            v10 = (_QWORD *)v10[1];
          }
        }
      }
      v11 = 2;
    }
LABEL_7:
    MiInsertPageInFreeOrZeroedList(a1, v11);
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
