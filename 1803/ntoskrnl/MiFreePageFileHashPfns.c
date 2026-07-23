/*
 * XREFs of MiFreePageFileHashPfns @ 0x140080B6C
 * Callers:
 *     MiScanPagefiles @ 0x140080B38 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbp
  _SLIST_HEADER **v4; // r15
  __int64 v5; // r12
  _SLIST_HEADER *v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v12; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 6872);
  v3 = 0LL;
  if ( (_DWORD)result )
  {
    v4 = (_SLIST_HEADER **)(a1 + 6880);
    v12 = *(unsigned int *)(a1 + 6872);
    v5 = (unsigned int)result;
    do
    {
      v6 = *v4 + 5;
      if ( LOWORD(v6->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v6);
        v7 = result;
        if ( result )
        {
          do
          {
            v8 = *(_QWORD *)v7;
            v9 = (unsigned __int8)MiLockPageInline(v7);
            v10 = 6 * ((__int64)(v7 + 0x58000000000LL) / 48);
            *(_WORD *)(8 * v10 - 0x58000000000LL + 32) = 0;
            *(_QWORD *)(8 * v10 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
            MiInsertPageInFreeOrZeroedList((__int64)(v7 + 0x58000000000LL) / 48, 2);
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v9);
            ++v3;
            v7 = v8;
          }
          while ( v8 );
          v5 = v12;
        }
      }
      ++v4;
      v12 = --v5;
    }
    while ( v5 );
    if ( v3 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(v3, a2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), v3);
      result = MiReturnCommit(a1, v3);
      _InterlockedExchangeAdd64(&qword_1403CCDE8, -(__int64)v3);
    }
  }
  return result;
}
