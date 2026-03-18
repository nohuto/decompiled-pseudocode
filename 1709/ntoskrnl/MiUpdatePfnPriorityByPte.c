/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x140036670
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

unsigned __int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r10
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // bp
  char v14; // al
  unsigned __int64 v15; // rcx
  __int64 PteShadow; // rax
  char v17; // cl
  unsigned int v18; // eax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v4 = a2;
  v6 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v7 = *(_QWORD *)a1;
    result = v6;
    if ( a1 >= v6 )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( a1 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = MiReadPteShadow(a1, *(_QWORD *)a1);
        v7 = result;
      }
    }
    v20 = v7;
    if ( (v7 & 1) != 0 )
    {
      result = MI_GET_PAGE_FRAME_FROM_PTE(&v20);
      a2 = 2LL;
      v10 = 6;
    }
    else
    {
      if ( (v7 & 0x400) != 0 )
        return result;
      if ( (v7 & 0x800) == 0 )
        return result;
      result = MiInvalidPteConforms(v7, a2, a3, a4);
      if ( !(_DWORD)result )
        return result;
      result = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v20);
      a2 = 2LL;
      v10 = 2;
    }
    a4 = result;
    if ( result > qword_1403885E0 )
      return result;
    if ( MmPhysicalMemoryBlock )
    {
      v11 = 6 * result;
      result = 0xFFFFFA8000000028uLL;
      if ( (*(_QWORD *)(8 * v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        return result;
    }
    v12 = 48 * a4 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v19 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
      v9 = 0xFFFFF6FFFFFFFFFFuLL;
      v6 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a1
      && ((*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > v9) )
    {
      break;
    }
    v14 = *(_BYTE *)(v12 + 34) & 7;
    if ( v10 != 6 )
    {
      if ( (unsigned __int8)(v14 - 2) > 2u || (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_36;
      goto LABEL_32;
    }
    if ( v14 == 6 )
    {
LABEL_32:
      PteShadow = *(_QWORD *)a1;
      if ( a1 >= v6 && a1 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a1, *(_QWORD *)a1);
      if ( v7 == PteShadow )
      {
        v17 = *(_BYTE *)(v12 + 35);
        if ( (v17 & 8) != 0 )
          v18 = 5;
        else
          v18 = v17 & 7;
        if ( v4 != v18 && v4 >= v18 )
        {
          if ( (*(_BYTE *)(v12 + 34) & 7) == 2 )
            MiRelinkStandbyPage(v12, v4);
          else
            *(_BYTE *)(v12 + 35) = v17 ^ (v4 ^ v17) & 7;
        }
        break;
      }
LABEL_36:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= v9 )
      {
        v15 = (__int64)(a1 << 25) >> 16;
        if ( v15 < 0xFFFFF68000000000uLL || v15 > v9 )
        {
          result = MiGetSystemRegionType(v15);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
