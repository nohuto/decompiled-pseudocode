/*
 * XREFs of MiClearStackOwners @ 0x1401103F0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  int v3; // r14d
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v5 = a1 - 144;
    v6 = 18LL;
  }
  else
  {
    v6 = (unsigned __int8)byte_14036CD9C;
    v5 = a1 - 8LL * (unsigned __int8)byte_14036CD9C;
  }
  v7 = v5 + 8 * (v6 + 1);
  v8 = v5 + 8;
  while ( v8 < v7 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v8);
    v9 = v13;
    if ( (v13 & 1) != 0 )
    {
      v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v13) - 0x58000000000LL;
      MiLockPageAtDpcInline(v10);
      if ( v9 == MI_READ_PTE_LOCK_FREE(v8) )
      {
        v11 = *(_QWORD *)(v10 + 40) >> 58;
        if ( v3 == -1 )
        {
          v3 = (unsigned __int16)v11;
        }
        else if ( v3 != (unsigned __int16)v11 )
        {
          v2 = 0;
        }
        *(_QWORD *)v10 = 0LL;
        v8 += 8LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v8 += 8LL;
    }
  }
  return v2;
}
