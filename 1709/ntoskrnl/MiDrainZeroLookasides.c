/*
 * XREFs of MiDrainZeroLookasides @ 0x140031040
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MiReturnPartitionPagesToParent @ 0x14023811C (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  _QWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r13d
  _WORD *v11; // r12
  PSLIST_ENTRY v12; // rbx
  _SLIST_ENTRY *Next; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // [rsp+20h] [rbp-68h]
  _WORD *v16; // [rsp+28h] [rbp-60h]
  _QWORD *v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+98h] [rbp+10h]
  unsigned int v21; // [rsp+A0h] [rbp+18h]
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  if ( a2 )
  {
    v5 = a4 + 1;
  }
  else
  {
    v5 = dword_140388544;
    a4 = 0;
    v22 = 0;
  }
  v20 = v5;
  v6 = 513;
  v19 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 4072);
  v8 = 2LL;
  v17 = result;
  v18 = 2LL;
  do
  {
    v9 = *result;
    v10 = a4;
    v15 = v9;
    v21 = a4;
    if ( a4 < v5 )
    {
      v11 = (_WORD *)(v9 + 16LL * a4);
      v16 = v11;
      do
      {
        if ( *v11 )
        {
          v12 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v9 + 16LL * v10));
          if ( v12 )
          {
            do
            {
              Next = v12->Next;
              if ( a2 && ((unsigned __int64)v12 < a2 || (unsigned __int64)v12 >= v19) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              v12[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(v12[1].Next, 0LL);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              MiLockPageAtDpcInline(v12);
              MiInsertPageInFreeOrZeroedList((__int64)&v12[0x5800000000LL] / 48, v6);
              _InterlockedAnd64((volatile signed __int64 *)&v12[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v12 = Next;
            }
            while ( Next );
            v11 = v16;
            v10 = v21;
            v5 = v20;
          }
          v9 = v15;
        }
        ++v10;
        v11 += 8;
        v21 = v10;
        v16 = v11;
      }
      while ( v10 < v5 );
      a4 = v22;
      v8 = v18;
    }
    result = v17 + 1;
    v6 = v6 & 0xFFFFFFFC | 2;
    --v8;
    ++v17;
    v18 = v8;
  }
  while ( v8 );
  return result;
}
