/*
 * XREFs of MiGetPageTablePages @ 0x14010E79C
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MmCreateShadowMapping @ 0x14041D7C8 (MmCreateShadowMapping.c)
 * Callees:
 *     MiObtainSystemCharges @ 0x14002D65C (MiObtainSystemCharges.c)
 *     MiInitializeColorBaseSession @ 0x14002E4C4 (MiInitializeColorBaseSession.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiCleanupPageTablePages @ 0x14010AD58 (MiCleanupPageTablePages.c)
 *     MiSetPfnTbFlushStamp @ 0x14010EB3C (MiSetPfnTbFlushStamp.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 *v6; // rcx
  unsigned int v7; // r11d
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int16 v10; // r12
  int v11; // r13d
  _WORD *v12; // r15
  unsigned int v13; // ebx
  __int64 Page; // rax
  _QWORD *v15; // rbx
  _WORD *v17; // [rsp+20h] [rbp-38h] BYREF
  __int16 v18; // [rsp+28h] [rbp-30h]
  unsigned __int16 v19; // [rsp+2Ah] [rbp-2Eh]

  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
  {
    MiInitializeColorBaseSession((__int64)&v17);
  }
  else
  {
    if ( v5 > 0x7FFFFFFEFFFFLL
      && (v5 > qword_14036C5D0 || v5 < qword_14036D870)
      && (v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    }
    MiInitializePageColorBase((__int64)v6, 0, (__int64)&v17);
  }
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 36) & 8) == 0 && *(_QWORD *)(v9 + 6248) )
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 8), a3, *(_DWORD *)(a1 + 32)) )
      return 0LL;
    *(_QWORD *)(a1 + 16) = a3;
    v7 = 1;
  }
  if ( a3 )
  {
    v10 = v18;
    v11 = v19;
    v12 = v17;
    while ( 2 )
    {
      *v12 += v7;
      v13 = v11 | (unsigned __int16)(v10 & *v12);
      while ( 1 )
      {
        Page = MiGetPage(v9, v13, 0x20CAu);
        if ( Page != -1 )
          break;
        if ( (*(_DWORD *)(a1 + 36) & 0x10) != 0 && *(_QWORD *)(v9 + 5760) >= 0x60uLL )
        {
          Page = MiGetPage(v9, v13, 0x20CEu);
          if ( Page != -1 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 36) & 1) == 0 )
        {
          MiCleanupPageTablePages(a1);
          return 0LL;
        }
        MiWaitForFreePage(v9);
      }
      v15 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp(v15, 0LL, 0LL);
      v7 = 1;
      ++v8;
      *v15 = *(_QWORD *)a1;
      *(_QWORD *)a1 = v15;
      if ( v8 < a3 )
        continue;
      break;
    }
  }
  return v7;
}
