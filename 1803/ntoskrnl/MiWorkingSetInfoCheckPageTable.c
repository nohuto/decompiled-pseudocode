/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x140263814
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned int v7; // ebx
  char v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  v14[0] = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v14[0] & 0x800;
  if ( (v14[0] & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset((unsigned __int64)v14) )
  {
    if ( (v8 & 1) != 0 )
    {
      v11 = *(_QWORD *)(v9 + 8) | 0x200000LL;
      *(_QWORD *)(v9 + 8) = v11;
      if ( v10 )
        v12 = v11 & 0xFFFFFFFFFF3FFFFFuLL | 0x400000;
      else
        v12 = v11 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      *(_QWORD *)(v9 + 8) = v12;
    }
    else if ( (v8 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0LL, 0, a5, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v7;
}
