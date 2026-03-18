/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x1400CDF50
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  int v7; // ebp
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  ULONG_PTR v10; // rbx
  unsigned __int8 CurrentIrql; // si
  char v12; // al
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // cl
  unsigned int v16; // eax
  int v17; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    v18 = result;
    if ( (result & 1) != 0 )
    {
      result = MI_GET_PAGE_FRAME_FROM_PTE(&v18);
      v7 = 6;
    }
    else
    {
      if ( (result & 0x400) != 0 )
        return result;
      if ( (result & 0x800) == 0 )
        return result;
      result = MiInvalidPteConforms(result);
      if ( !(_DWORD)result )
        return result;
      result = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v18);
      v7 = v5;
    }
    v8 = result;
    if ( result > qword_14036C290 )
      return result;
    if ( MmPhysicalMemoryBlock )
    {
      v9 = 6 * result;
      result = 0xFFFFFA8000000028uLL;
      if ( (*(_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        return result;
    }
    v10 = 48 * v8 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    v17 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      v6 = 0x200000000000000LL;
    }
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a1
      && ((v6 & *(_QWORD *)(v10 + 40)) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      break;
    }
    v12 = *(_BYTE *)(v10 + 34) & 7;
    if ( v7 != 6 )
    {
      if ( (unsigned __int8)(v12 - 2) > 2u || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( v12 == 6 )
    {
LABEL_28:
      v14 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v18 == v14 )
      {
        v15 = *(_BYTE *)(v10 + 35);
        if ( (v15 & 8) != 0 )
          v16 = 5;
        else
          v16 = v15 & 7;
        if ( a2 != v16 && a2 >= v16 )
        {
          if ( (*(_BYTE *)(v10 + 34) & 7) == 2 )
            MiRelinkStandbyPage(v10, a2);
          else
            *(_BYTE *)(v10 + 35) = v15 ^ (a2 ^ v15) & 7;
        }
        break;
      }
LABEL_29:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v13 = (__int64)(a1 << 25) >> 16;
        if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v13);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
