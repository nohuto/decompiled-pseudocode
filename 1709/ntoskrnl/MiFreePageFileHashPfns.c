/*
 * XREFs of MiFreePageFileHashPfns @ 0x1400F0478
 * Callers:
 *     MiScanPagefiles @ 0x1400F0444 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbp
  _SLIST_HEADER **v3; // r15
  __int64 v4; // r12
  _SLIST_HEADER *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v11; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 5784);
  v2 = 0LL;
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 5792);
    v11 = *(unsigned int *)(a1 + 5784);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = (unsigned __int8)MiLockPageInline(v6);
            v9 = 6 * ((v6 + 0x58000000000LL) / 48);
            *(_WORD *)(8 * v9 - 0x58000000000LL + 32) = 0;
            *(_QWORD *)(8 * v9 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
            MiInsertPageInFreeOrZeroedList((v6 + 0x58000000000LL) / 48, 2);
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v8);
            ++v2;
            v6 = v7;
          }
          while ( v7 );
          v4 = v11;
        }
      }
      ++v3;
      v11 = --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), v2);
      result = MiReturnCommit(a1, v2);
      _InterlockedExchangeAdd64(&qword_140389828, -(__int64)v2);
    }
  }
  return result;
}
