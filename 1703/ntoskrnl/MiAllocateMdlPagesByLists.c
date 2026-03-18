/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140133DC0
 * Callers:
 *     MiFindPagesForMdl @ 0x14007AE64 (MiFindPagesForMdl.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiGetEnclavePage @ 0x14021C8F8 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 a7)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  _WORD *v10; // r8
  __int16 v11; // ax
  int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  __int64 v15; // r11
  int v16; // r12d
  unsigned int v17; // r13d
  char v18; // al
  int i; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  int v24; // r8d
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int16 v27; // [rsp+28h] [rbp-50h]
  unsigned __int16 v28; // [rsp+2Ah] [rbp-4Eh]
  _QWORD *v30; // [rsp+88h] [rbp+10h]

  v8 = 0LL;
  v9 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v26);
  v10 = (_WORD *)v26;
  v11 = v27;
  v12 = -1;
  ++*(_WORD *)v26;
  v13 = 8;
  v14 = v28 | (unsigned __int16)(v11 & *v10);
  v16 = 1;
  v17 = 1;
  v26 = KiProcessorBlock[*(unsigned int *)(v15 + 588)];
  v18 = a3;
  v30 = (_QWORD *)(a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12));
  for ( i = a3 & 0x400; ; i = a3 & 0x400 )
  {
    if ( v16 == 1 )
    {
      v16 = 0;
      v13 = ~(2 * v18) & 2 | 8;
    }
    v20 = i ? MiGetEnclavePage(a1, 0LL) : MiGetPage(a1, v14, v13);
    if ( v20 == -1LL )
      break;
    if ( v20 > a5 )
    {
      MiReleaseFreshPage(48 * v20 - 0x58000000000LL);
      v17 = 0;
      break;
    }
    if ( MiPfnZeroingNeeded() )
      ++v9;
    if ( v12 == -1 )
      v12 = *(_QWORD *)(v21 + 40) >> 58;
    if ( *(_QWORD *)(v21 + 40) >> 58 == v12 )
    {
      if ( *(_QWORD *)(v21 + 16) )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else
      {
        v23 = v13 | 2;
        if ( (a3 & 1) == 0 )
          v23 = v13;
        v13 = v23;
      }
    }
    else
    {
      v16 = 1;
    }
    v12 = *(_QWORD *)(v21 + 40) >> 58;
    ++v8;
    *v30++ = v22;
    v24 = v22 & dword_14036C1F8 | (((*(_QWORD *)(v21 + 40) >> 36) & 3) << byte_14036C1BA) | (*(_QWORD *)(v21 + 40) >> 58 << byte_14036C1B9);
    v14 = v24 & ~dword_14036C1B0 | dword_14036C1B0 & (v24 + 1);
    if ( v8 >= a6 )
      break;
    v18 = a3;
  }
  if ( v8 )
    *(_DWORD *)(v26 + 23652) = v14;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v17;
}
