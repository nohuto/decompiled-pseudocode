/*
 * XREFs of MiDeleteLargeUserPde @ 0x14026A4BC
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x1400C1830 (MiDecreaseUsedPtesCount.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rbx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 result; // rax
  char v14; // cl
  char v15; // cl
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v19 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
  if ( a3 != 3 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
    MiDecreaseUsedPtesCount(UsedPtesHandle, 1u);
  }
  *(_QWORD *)a2 = ZeroPte;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v10, v9, v11);
  v12 = 48 * v7 - 0x58000000000LL;
  result = MiInsertLargeTbFlushEntry(*(_QWORD *)(a1 + 16), a3, a2);
  if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
  {
    MiLockPageAtDpcInline(v12);
    v14 = *(_BYTE *)(v12 + 34);
    *(_BYTE *)(v12 + 34) = v14 & 0xF8 | 5;
    v15 = *(_BYTE *)(v12 + 34) ^ (*(_BYTE *)(v12 + 34) ^ v14) & 7;
    *(_QWORD *)v12 ^= (*(_QWORD *)v12 ^ (*(_QWORD *)(v3 + 48) >> 3)) & 0xFFFFFFFFFFELL;
    v16 = *(_QWORD *)(v12 + 40);
    *(_BYTE *)(v12 + 34) = v15;
    if ( a3 == 1 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
      v18 = 0xFFFFFFFFELL;
    }
    else
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
      v18 = 0xFFFFFFFFBLL;
    }
    *(_QWORD *)(v12 + 40) = v18 | v17;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(v3 + 48) = v12;
  }
  return result;
}
