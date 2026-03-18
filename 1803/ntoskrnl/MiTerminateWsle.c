/*
 * XREFs of MiTerminateWsle @ 0x14012B31C
 * Callers:
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemImagePage @ 0x14013B5D0 (MiRemoveSystemImagePage.c)
 * Callees:
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140052A30 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // r14d
  int v7; // r15d
  BOOL v8; // edi
  int v9; // ebp
  unsigned __int64 v10; // r12
  _BYTE *v11; // r9
  __int64 v12; // r10
  char v13; // r11
  char WsleContents; // bl
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  char v19; // al

  v4 = 1;
  v7 = 10;
  v8 = 1;
  v9 = 0;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v4 = 0;
    WsleContents = (*v11 >> 1) & 7;
  }
  else
  {
    v7 = 10 - ((v13 & 2) != 0);
    WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, a2);
    v8 = (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0;
    if ( (WsleContents & 0xF) == 8 )
    {
      MiUnlockWsle(v12, a2, v15);
      v19 = MiGetWsleContents(v18, a2);
      v12 = a1;
      WsleContents = v19;
      v13 = a3;
    }
  }
  if ( (v13 & 3) == 0 )
  {
    if ( v4 )
    {
      if ( (unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v10) )
        v9 = 1;
    }
    else
    {
      result = MiEvictPageTableLock(v12, v10, ZeroPte, 0);
      if ( !(_DWORD)result )
      {
        *a4 = 0;
        return result;
      }
      v9 = 1;
    }
  }
  MiRemoveWsle(a1, a2, WsleContents, v7, v8);
  if ( v4 )
    MiRebuildPageTableLeafAges(v16, a2);
  *a4 = v9;
  return 1LL;
}
