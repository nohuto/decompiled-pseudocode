/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x140462158
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlGetNextEntryHashTable @ 0x14001BA40 (RtlGetNextEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x14003D9B0 (RtlLookupEntryHashTable.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     RtlInsertEntryHashTable @ 0x140066100 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a3)
{
  _RTL_BITMAP *v3; // r14
  _RTL_DYNAMIC_HASH_TABLE *v4; // r13
  unsigned int v6; // ebx
  __int64 v8; // rcx
  ULONG_PTR v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v11; // rdi
  unsigned int v13; // esi
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v15; // rdi
  ULONG ClearBitsAndSet; // esi
  ULONG_PTR v17; // r8
  __int64 v18; // rax
  ULONG v19; // esi
  unsigned int *v20; // r12
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_RTL_BITMAP *)(a1 + 8);
  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v6 = 0;
  v8 = *(unsigned int *)&a2[4 * a2[1] + 4];
  v9 = 1LL;
  if ( v8 )
    v9 = (unsigned int)v8;
  for ( i = RtlLookupEntryHashTable(v4, v9, &Context); ; i = RtlGetNextEntryHashTable(v4, &Context) )
  {
    v11 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(a2, i[1].Linkage.Blink) )
      goto LABEL_6;
  }
  v11 = 0LL;
LABEL_6:
  if ( !v11 )
  {
    v13 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v13, 0x734C6553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[2].Linkage.Blink;
    RtlCopySid(v13 - 56, &PoolWithTag[2].Linkage.Blink, a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v3, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v19 = 2 * RtlNumberOfSetBits(v3);
      if ( v19 > 0x10000 )
        goto LABEL_24;
      v20 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v19 >> 3, 0x734C6553u);
      if ( !v20 )
        goto LABEL_24;
      ExFreePoolWithTag(v3->Buffer, 0);
      v3->SizeOfBitMap = v19;
      v3->Buffer = v20;
      RtlClearAllBits(v3);
      RtlSetBits(v3, 0, v19 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v3, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_24;
    }
    if ( ClearBitsAndSet == 0xFFFF )
    {
LABEL_24:
      ExFreePoolWithTag(v15, 0);
    }
    else
    {
      v15[2].Linkage.Flink = 0LL;
      LODWORD(v15[1].Signature) = ClearBitsAndSet + 1;
      v17 = 1LL;
      v15[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
      v18 = (unsigned int)a2[1] - 1;
      if ( *(_DWORD *)&a2[4 * v18 + 8] )
        v17 = *(unsigned int *)&a2[4 * v18 + 8];
      if ( RtlInsertEntryHashTable(v4, v15, v17, 0LL) )
      {
        *a3 = v15;
        return v6;
      }
      ExFreePoolWithTag(v15, 0);
      RtlClearBits(v3, 1u, ClearBitsAndSet);
    }
    return (unsigned int)-1073741670;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)&v11[1]) <= 1 )
    __fastfail(0xEu);
  *a3 = v11;
  return 0LL;
}
