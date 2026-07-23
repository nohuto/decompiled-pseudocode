/*
 * XREFs of MiDrainZeroLookasides @ 0x14001C448
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiReturnPartitionPagesToParent @ 0x14021E92C (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *result; // rax
  unsigned __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rbp
  _WORD *v14; // rsi
  PSLIST_ENTRY v15; // r14
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *Next; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v4 = a4;
  if ( a2 )
  {
    v6 = a4 + 1;
  }
  else
  {
    v6 = dword_14036C1FC;
    v4 = 0;
    v22 = 0;
  }
  v20 = v6;
  v7 = 2LL;
  result = (_QWORD *)(a1 + 3944);
  v18 = 2LL;
  v9 = a2 + 48 * a3;
  v10 = 513;
  v17 = (_QWORD *)(a1 + 3944);
  do
  {
    v11 = v4;
    v21 = *result;
    if ( v4 < v6 )
    {
      v12 = v4;
      v13 = *result;
      v14 = (_WORD *)(*result + 16 * v12);
      do
      {
        if ( *v14 )
        {
          v15 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v13 + 16LL * v11));
          if ( v15 )
          {
            do
            {
              Next = v15->Next;
              if ( a2 && ((unsigned __int64)v15 < a2 || (unsigned __int64)v15 >= v9) )
                v10 &= ~0x40u;
              else
                v10 |= 0x40u;
              v15[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(v15[1].Next, 4294967293LL);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              MiLockPageAtDpcInline(v15);
              MiInsertPageInFreeOrZeroedList((__int64)&v15[0x5800000000LL] / 48, v10);
              _InterlockedAnd64((volatile signed __int64 *)&v15[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v15 = Next;
            }
            while ( Next );
            v6 = v20;
            v13 = v21;
          }
        }
        ++v11;
        v14 += 8;
      }
      while ( v11 < v6 );
      v4 = v22;
      result = v17;
      v7 = v18;
    }
    ++result;
    v10 = v10 & 0xFFFFFFFC | 2;
    v17 = result;
    v18 = --v7;
  }
  while ( v7 );
  return result;
}
