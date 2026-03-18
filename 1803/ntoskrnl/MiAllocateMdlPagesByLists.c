/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x14005105C
 * Callers:
 *     MiFindPagesForMdl @ 0x1400B38D4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  __int16 v10; // ax
  int v11; // r12d
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // r14d
  __int64 v15; // r11
  unsigned int v16; // r13d
  char v17; // al
  int i; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // r8d
  volatile signed __int32 *v26; // [rsp+20h] [rbp-58h] BYREF
  __int16 v27; // [rsp+28h] [rbp-50h]
  unsigned __int16 v28; // [rsp+2Ah] [rbp-4Eh]
  _QWORD *v30; // [rsp+88h] [rbp+10h]

  v8 = 0LL;
  v9 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned int)a7 + 1, &v26);
  v10 = _InterlockedExchangeAdd(v26, 1u);
  v11 = 1;
  v12 = 8;
  v13 = v28 | (unsigned __int16)(v10 & v27);
  v14 = -1;
  v16 = 1;
  v26 = (volatile signed __int32 *)KiProcessorBlock[*(unsigned int *)(v15 + 588)];
  v17 = a3;
  v30 = (_QWORD *)(a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12));
  for ( i = a3 & 0x400; ; i = a3 & 0x400 )
  {
    if ( v11 == 1 )
    {
      v11 = 0;
      v12 = 2 * ((v17 & 1) == 0) + 8;
    }
    v19 = i ? MiGetEnclavePage(a1, 0LL) : MiGetPage(a1, v13, v12);
    if ( v19 == -1LL )
      break;
    v20 = 48 * v19 - 0x58000000000LL;
    if ( v19 > a5 )
    {
      MiReleaseFreshPage(v20);
      v16 = 0;
      break;
    }
    if ( (unsigned int)MiPfnZeroingNeeded(v20, a4) )
      ++v9;
    if ( v14 == -1 )
      v14 = *(_QWORD *)(v21 + 40) >> 58;
    if ( *(_QWORD *)(v21 + 40) >> 58 == v14 )
    {
      if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v12 &= ~2u;
      }
      else
      {
        v23 = v12 | 2;
        if ( (a3 & 1) == 0 )
          v23 = v12;
        v12 = v23;
      }
    }
    else
    {
      v11 = 1;
    }
    v14 = *(_QWORD *)(v21 + 40) >> 58;
    ++v8;
    *v30++ = v22;
    v24 = v22 & dword_1403CB6D8 | (((*(_QWORD *)(v21 + 40) >> 36) & 3) << byte_1403CB69A) | (*(_QWORD *)(v21 + 40) >> 58 << byte_1403CB699);
    v13 = v24 & ~dword_1403CB690 | dword_1403CB690 & (v24 + 1);
    if ( v8 >= a6 )
      break;
    v17 = a3;
  }
  if ( v8 )
    *((_DWORD *)v26 + 5892) = v13;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v16;
}
