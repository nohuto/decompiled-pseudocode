/*
 * XREFs of MiGetFreeZeroLargePage @ 0x140128E70
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x140125774 (MiDemoteLargeFreeZeroPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140128DC4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiGetFreeZeroLargePage(__int64 a1, unsigned int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  __int64 v7; // rdi
  BOOL v8; // r13d
  BOOL v9; // r12d
  unsigned __int8 *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+90h] [rbp+8h]

  v21 = a1;
  v5 = a5;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 48) + 2184LL * a4;
  v20 = 0LL;
  v8 = (a3 & 2) != 0;
  v9 = (a3 & 2) == 0;
  v10 = 0LL;
  if ( a5 == 4 && (unsigned int)MmNumberOfChannels > 1 )
  {
    v10 = (unsigned __int8 *)(v7 + 2165);
    v20 = v7 + 2165 + (unsigned int)MmNumberOfChannels;
  }
  else
  {
    v5 = 0;
  }
  v11 = ((unsigned int)~a3 >> 15) & 1;
  v18 = 0LL;
  v12 = 4 * (((a3 & 2) != 0) + 4LL * a2);
  v19 = 4 * (v8 + 4LL * a2);
  v13 = 4 * (v9 + 4LL * a2);
  while ( 1 )
  {
    if ( v10 )
      v5 = *v10;
    v14 = (_QWORD *)(v7 + 16 * (v13 + v5 + 3LL));
    if ( (_QWORD *)*v14 != v14 )
    {
      result = MiUnlinkNodeLargePage(v21, v6, a4, v5, v9, 0LL);
      if ( result )
        return result;
      v12 = v19;
      v6 = a2;
    }
    v16 = (_QWORD *)(v7 + 16 * (v12 + v5 + 3LL));
    if ( (_QWORD *)*v16 != v16 )
    {
      result = MiUnlinkNodeLargePage(v21, v6, a4, v5, v8, 0LL);
      if ( result )
        return result;
      v12 = v19;
    }
    v17 = v18;
    if ( v10 )
    {
      if ( ++v10 == (unsigned __int8 *)v20 )
      {
        v10 -= (unsigned int)MmNumberOfChannels;
      }
      else
      {
        v17 = v18 - 1;
        v13 -= 8LL;
        v12 -= 8LL;
      }
    }
    v12 += 8LL;
    v13 += 8LL;
    v18 = v17 + 1;
    v19 = v12;
    if ( v17 + 1 > v11 )
      break;
    v6 = a2;
  }
  return 0LL;
}
