/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x14053F858
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     RtlInsertEntryHashTable @ 0x14006C450 (RtlInsertEntryHashTable.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x14053F97C (SepFindMatchingLowBoxNumberEntry.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  _RTL_BITMAP *v4; // r14
  unsigned int v7; // edi
  unsigned int v9; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  ULONG ClearBitsAndSet; // ebp
  ULONG_PTR v13; // r8
  __int64 v14; // rax
  ULONG v15; // ebp
  unsigned int *v16; // r13
  __int64 v17; // [rsp+60h] [rbp+8h]
  _RTL_DYNAMIC_HASH_TABLE *v18; // [rsp+78h] [rbp+20h]

  v3 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (_RTL_BITMAP *)(a1 + 8);
  v18 = v3;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v7 = 0;
  if ( !v17 )
  {
    v9 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x734C6553u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[4] = PoolWithTag + 7;
    RtlCopySid(v9 - 56, PoolWithTag + 7, a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v15 = 2 * RtlNumberOfSetBits(v4);
      if ( v15 > 0x10000 )
        goto LABEL_19;
      v16 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v15 >> 3, 0x734C6553u);
      if ( !v16 )
        goto LABEL_19;
      ExFreePoolWithTag(v4->Buffer, 0);
      v4->SizeOfBitMap = v15;
      v4->Buffer = v16;
      RtlClearAllBits(v4);
      RtlSetBits(v4, 0, v15 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_19;
      v3 = v18;
    }
    if ( ClearBitsAndSet != 0xFFFF )
    {
      v11[6] = 0LL;
      *((_DWORD *)v11 + 10) = ClearBitsAndSet + 1;
      v13 = 1LL;
      v11[3] = 1LL;
      v14 = (unsigned int)a2[1] - 1;
      if ( *(_DWORD *)&a2[4 * v14 + 8] )
        v13 = *(unsigned int *)&a2[4 * v14 + 8];
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v11, v13, 0LL) )
      {
        *a3 = v11;
        return v7;
      }
      ExFreePoolWithTag(v11, 0);
      RtlClearBits(v4, 1u, ClearBitsAndSet);
      return (unsigned int)-1073741670;
    }
LABEL_19:
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)-1073741670;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24)) <= 1 )
    __fastfail(0xEu);
  *a3 = v17;
  return 0LL;
}
