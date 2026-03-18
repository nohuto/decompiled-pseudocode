/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140128900
 * Callers:
 *     MiFindPagesForMdl @ 0x1400CBBA0 (MiFindPagesForMdl.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiGetEnclavePage @ 0x140229730 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 a7)
{
  unsigned __int64 v8; // rbx
  __int64 v10; // r15
  _WORD *v11; // r8
  __int16 v12; // ax
  int v13; // r14d
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // r11
  int v17; // r12d
  int i; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r8d
  int v24; // ecx
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int16 v27; // [rsp+28h] [rbp-50h]
  unsigned __int16 v28; // [rsp+2Ah] [rbp-4Eh]
  _QWORD *v30; // [rsp+88h] [rbp+10h]

  v8 = 0LL;
  v10 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v26);
  v11 = (_WORD *)v26;
  v12 = v27;
  v13 = -1;
  ++*(_WORD *)v26;
  v14 = 8;
  v15 = v28 | (unsigned __int16)(v12 & *v11);
  v17 = 1;
  v26 = KiProcessorBlock[*(unsigned int *)(v16 + 588)];
  v30 = (_QWORD *)(a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12));
  for ( i = a3 & 0x400; ; i = a3 & 0x400 )
  {
    if ( v17 == 1 )
    {
      v17 = 0;
      v14 = 2 * ((a3 & 1) == 0) + 8;
    }
    v19 = i ? MiGetEnclavePage(a1, 0LL) : MiGetPage(a1, v15, v14);
    if ( v19 == -1LL )
      break;
    v20 = 48 * v19 - 0x58000000000LL;
    if ( v19 > a5 )
    {
      MiReleaseFreshPage(v20);
      result = 0LL;
      goto LABEL_22;
    }
    if ( MiPfnZeroingNeeded(v20, a4) )
      ++v10;
    if ( v13 == -1 )
      v13 = *(_QWORD *)(v21 + 40) >> 58;
    if ( *(_QWORD *)(v21 + 40) >> 58 == v13 )
    {
      if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v14 &= ~2u;
      }
      else
      {
        v24 = v14 | 2;
        if ( (a3 & 1) == 0 )
          v24 = v14;
        v14 = v24;
      }
    }
    else
    {
      v17 = 1;
    }
    v13 = *(_QWORD *)(v21 + 40) >> 58;
    ++v8;
    *v30++ = v22;
    v23 = v22 & dword_140388540 | (((*(_QWORD *)(v21 + 40) >> 36) & 3) << byte_140388502) | (*(_QWORD *)(v21 + 40) >> 58 << byte_140388501);
    v15 = v23 & ~dword_1403884F8 | dword_1403884F8 & (v23 + 1);
    if ( v8 >= a6 )
    {
      result = 1LL;
      goto LABEL_22;
    }
  }
  result = 1LL;
LABEL_22:
  if ( v8 )
    *(_DWORD *)(v26 + 23568) = v15;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v10 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return result;
}
