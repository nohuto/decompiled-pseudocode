/*
 * XREFs of MiGetPageTablePages @ 0x140027ECC
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1401227CC (MiObtainSystemCharges.c)
 *     MiInitializeColorBaseSession @ 0x140123BEC (MiInitializeColorBaseSession.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 *v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // r15
  __int16 v9; // r12
  int v10; // r13d
  _WORD *v11; // r14
  unsigned int v12; // ebx
  __int64 Page; // rax
  _QWORD *v14; // rbx
  unsigned __int16 *v16; // r14
  int v17; // r8d
  unsigned __int16 *v18; // r15
  _WORD *v19; // [rsp+30h] [rbp-38h] BYREF
  __int16 v20; // [rsp+38h] [rbp-30h]
  unsigned __int16 v21; // [rsp+3Ah] [rbp-2Eh]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
  {
    MiInitializeColorBaseSession(&v19);
  }
  else
  {
    if ( v5 > 0x7FFFFFFEFFFFLL
      && (v5 < qword_140389B40 || v5 > qword_140388958)
      && (v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    }
    MiInitializePageColorBase(v6, 0LL, &v19);
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 52) & 8) == 0 && *(_QWORD *)(v7 + 6440) )
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 24), a3, *(unsigned int *)(a1 + 48)) )
      return 0LL;
    *(_QWORD *)(a1 + 32) = a3;
  }
  if ( (*(_DWORD *)(a1 + 52) & 0x80u) == 0 )
    goto LABEL_40;
  v22 = a3 & 0xFFFFFFFFFFFFFE00uLL;
  if ( (a3 & 0xFFFFFFFFFFFFFE00uLL) == 0 )
    goto LABEL_40;
  v16 = (unsigned __int16 *)qword_140388508;
  v17 = 0;
  v18 = (unsigned __int16 *)((char *)qword_140388508 + 2 * (unsigned __int16)KeNumberNodes);
  while ( 1 )
  {
    MiAllocateLargeZeroPages(v7, (unsigned int)&v22, v17, 4, a1, 1);
    if ( !v22 )
      break;
    if ( ++v16 == v18 )
      break;
    v17 = *v16;
  }
  a3 -= (a3 & 0xFFFFFFFFFFFFFE00uLL) - v22;
  if ( a3 )
  {
LABEL_40:
    v8 = 0LL;
    if ( a3 )
    {
      v9 = v20;
      v10 = v21;
      v11 = v19;
      while ( 2 )
      {
        v12 = v10 | (unsigned __int16)(v9 & ++*v11);
        while ( 1 )
        {
          Page = MiGetPage(v7, v12, 8394LL);
          if ( Page != -1 )
            break;
          if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 )
          {
            if ( (unsigned int)MiSufficientAvailablePages(v7, 96LL) )
            {
              Page = MiGetPage(v7, v12, 8398LL);
              if ( Page != -1 )
                break;
            }
          }
          if ( (*(_DWORD *)(a1 + 52) & 1) == 0 )
          {
            MiCleanupPageTablePages(a1);
            return 0LL;
          }
          MiWaitForFreePage(v7);
        }
        v14 = (_QWORD *)(48 * Page - 0x58000000000LL);
        MiSetPfnTbFlushStamp(v14, 0LL, 0LL);
        *v14 = *(_QWORD *)(a1 + 16);
        ++v8;
        *(_QWORD *)(a1 + 16) = v14;
        if ( v8 < a3 )
          continue;
        break;
      }
    }
  }
  return 1LL;
}
