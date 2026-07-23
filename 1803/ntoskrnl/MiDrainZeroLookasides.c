/*
 * XREFs of MiDrainZeroLookasides @ 0x1400B1B20
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiReturnPartitionPagesToParent @ 0x14026FD38 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // esi
  _QWORD *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r12d
  _WORD *v12; // r13
  PSLIST_ENTRY v13; // rbx
  _SLIST_ENTRY *Next; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  _WORD *v18; // [rsp+30h] [rbp-58h]
  _QWORD *v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+98h] [rbp+10h]
  unsigned int v23; // [rsp+A0h] [rbp+18h]

  v4 = dword_1403CB6DC;
  if ( a2 )
    v4 = a4 + 1;
  v6 = 0;
  v22 = v4;
  v7 = 513;
  if ( a2 )
    v6 = a4;
  v16 = v6;
  v21 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 4136);
  v9 = 2LL;
  v19 = result;
  v20 = 2LL;
  do
  {
    v10 = *result;
    v11 = v6;
    v17 = v10;
    v23 = v6;
    if ( v6 < v4 )
    {
      v12 = (_WORD *)(v10 + 16LL * v6);
      v18 = v12;
      do
      {
        if ( *v12 )
        {
          v13 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v10 + 16LL * v11));
          if ( v13 )
          {
            do
            {
              Next = v13->Next;
              if ( a2 && ((unsigned __int64)v13 < a2 || (unsigned __int64)v13 >= v21) )
                v7 &= ~0x40u;
              else
                v7 |= 0x40u;
              v13[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(v13[1].Next, 0LL);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              MiLockPageAtDpcInline(v13);
              MiInsertPageInFreeOrZeroedList((__int64)&v13[0x5800000000LL] / 48, v7);
              _InterlockedAnd64((volatile signed __int64 *)&v13[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v13 = Next;
            }
            while ( Next );
            v11 = v23;
            v12 = v18;
            v4 = v22;
          }
          v10 = v17;
        }
        ++v11;
        v12 += 8;
        v23 = v11;
        v18 = v12;
      }
      while ( v11 < v4 );
      v9 = v20;
      v6 = v16;
    }
    result = v19 + 1;
    v7 = v7 & 0xFFFFFFFC | 2;
    --v9;
    ++v19;
    v20 = v9;
  }
  while ( v9 );
  return result;
}
