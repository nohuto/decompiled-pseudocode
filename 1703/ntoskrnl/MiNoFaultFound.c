/*
 * XREFs of MiNoFaultFound @ 0x1400B0400
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x1401314B8 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 * Callees:
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiNoFaultFound(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v9; // rax
  volatile signed __int64 *v10; // r10
  unsigned int v11; // r11d
  char v12; // r9
  signed __int64 v13; // rdx

  v7 = 0;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v12 & 2) != 0 && (v9 & 2) == 0 )
  {
    v7 = v11 + 1;
    v13 = v9 | 0x62;
    if ( a7 )
    {
      if ( a7 != _InterlockedCompareExchange64(v10, v13, a7) )
        return 0LL;
    }
    else
    {
      MiWriteValidPteNewProtection(v10, v13);
    }
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
    {
      if ( a5 )
        v11 = MiTbFlushType(a5);
      KeFlushSingleTb(a3, v11, a6);
    }
  }
  return v7;
}
