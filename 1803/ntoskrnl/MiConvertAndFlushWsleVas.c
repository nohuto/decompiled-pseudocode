/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1400BAC24
 * Callers:
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  __int64 valid; // r14
  __int64 i; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v13);
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 12); i = (unsigned int)(v10 + 1) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(a2 + 8 * i + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v13 & 1) != 0
          && (MiGetWsleContents(v9, v11) & 0xF) != 0xA
          && *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFF8LL) < 0 )
        {
          *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v10 + 24);
          v5 = (unsigned int)(v5 + 1);
        }
      }
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0);
      }
      else
      {
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v6, v12);
  }
}
