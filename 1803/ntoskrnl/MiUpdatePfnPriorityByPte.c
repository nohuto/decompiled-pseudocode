/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x140128510
 * Callers:
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  unsigned __int64 v11; // r9
  ULONG_PTR v12; // rbx
  unsigned __int8 CurrentIrql; // di
  char v14; // al
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // r9
  char v18; // cl
  unsigned int v19; // eax
  int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    v21 = result;
    v7 = result;
    if ( (result & 1) != 0 )
    {
      result = v6;
      if ( (unsigned __int64)&v21 >= v6 )
      {
        result = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)&v21 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          result = MiPteHasShadow();
          if ( (_DWORD)result )
          {
            if ( v8 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
            {
              result = (__int64)KeGetCurrentThread();
              v9 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
              if ( v9 )
              {
                result = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
                if ( (result & 0x20) != 0 )
                  v7 |= 0x20uLL;
                if ( (result & 0x42) != 0 )
                  v7 |= 0x42uLL;
              }
            }
          }
        }
      }
      v10 = 6;
      v11 = (v7 >> 12) & 0xFFFFFFFFFLL;
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
      result = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v21);
      v11 = result;
      v10 = v5;
    }
    if ( v11 > qword_1403CB780 )
      return result;
    if ( MmPhysicalMemoryBlock )
    {
      result = 0x20000000000000LL;
      if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        return result;
    }
    v12 = 48 * v11 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a1
      && ((*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      break;
    }
    v14 = *(_BYTE *)(v12 + 34) & 7;
    if ( v10 != 6 )
    {
      if ( (unsigned __int8)(v14 - 2) > 2u || (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_39;
      goto LABEL_38;
    }
    if ( v14 == 6 )
    {
LABEL_38:
      v16 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v21 == v16 )
      {
        v18 = *(_BYTE *)(v12 + 35);
        if ( (v18 & 8) != 0 )
          v19 = 5;
        else
          v19 = v18 & 7;
        if ( a2 != v19 && a2 >= v19 )
        {
          if ( (v17 & 7) == 2 )
          {
            if ( v19
              || (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
              || !MiIsPteInStore(
                    *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL)),
                    *(_QWORD *)(v12 + 16)) )
            {
              MiRelinkStandbyPage(v12, a2);
            }
          }
          else
          {
            *(_BYTE *)(v12 + 35) = v18 ^ (a2 ^ v18) & 7;
          }
        }
        break;
      }
LABEL_39:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v15 = (__int64)(a1 << 25) >> 16;
        if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
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
