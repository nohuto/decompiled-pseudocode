/*
 * XREFs of MiWalkVaCheckCommon @ 0x1400AD024
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x1400ACEE8 (MiEmptyWorkingSetHelper.c)
 *     MiSimpleAgePte @ 0x14025A0C0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14025A740 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiShouldLockPteDirectly @ 0x14003E0E8 (MiShouldLockPteDirectly.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v5; // r11
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL v12; // eax
  bool v13; // zf
  char v14; // cl
  _QWORD *v15; // rax
  _DWORD *PageTableLockBuffer; // rax
  __int64 v17; // rax
  int v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  v7 = a1;
  if ( a4 )
    goto LABEL_2;
  if ( (*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v14 = *(_BYTE *)(a1 + 184) & 7;
    if ( (*(_BYTE *)(v7 + 184) & 7) != 0 )
    {
      if ( v14 == 7 )
      {
        v15 = &unk_1403CBCE8;
      }
      else
      {
        v15 = &unk_1403CBCE0;
        if ( v14 != 5 )
          v15 = &unk_1403CBCF8;
      }
    }
    else
    {
      v15 = (_QWORD *)(v7 + 176);
    }
    v13 = *v15 == 0LL;
  }
  else
  {
    if ( MiShouldLockPteDirectly(a1, a2) )
    {
      v12 = (MI_READ_PTE_LOCK_FREE(a2) & 0x1000000000000000LL) != 0;
    }
    else
    {
      PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v11, v10, &v18);
      if ( ((*PageTableLockBuffer >> v18) & 1) != 0 )
        return 0LL;
      v12 = 0;
    }
    v13 = !v12;
  }
  if ( !v13 )
    return 0LL;
LABEL_2:
  v8 = *(_QWORD *)(v5 + 8);
  if ( v8 >= 0 && (unsigned int)MiDemoteCombinedPte(v7, a2, v8 | 0x8000000000000000uLL) == 1 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(a2);
    *a5 = v17;
  }
  return 1LL;
}
