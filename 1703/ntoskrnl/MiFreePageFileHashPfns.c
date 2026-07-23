/*
 * XREFs of MiFreePageFileHashPfns @ 0x140083F7C
 * Callers:
 *     MiScanPagefiles @ 0x140083F50 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall MiFreePageFileHashPfns(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  _SLIST_HEADER **v5; // r15
  __int64 v6; // r12
  _SLIST_HEADER *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v13; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 5592);
  v4 = 0LL;
  if ( (_DWORD)result )
  {
    v5 = (_SLIST_HEADER **)(a1 + 5600);
    v13 = *(unsigned int *)(a1 + 5592);
    v6 = (unsigned int)result;
    do
    {
      v7 = *v5 + 5;
      if ( LOWORD(v7->Alignment) )
      {
        result = (__int64)RtlpInterlockedFlushSList(v7);
        v8 = result;
        if ( result )
        {
          do
          {
            v9 = *(_QWORD *)v8;
            v10 = (unsigned __int8)MiLockPageInline(v8);
            v11 = 6 * ((v8 + 0x58000000000LL) / 48);
            *(_WORD *)(8 * v11 - 0x58000000000LL + 32) = 0;
            *(_QWORD *)(8 * v11 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
            MiInsertPageInFreeOrZeroedList((v8 + 0x58000000000LL) / 48, 2LL);
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v10);
            ++v4;
            v8 = v9;
          }
          while ( v9 );
          v6 = v13;
        }
      }
      ++v5;
      v13 = --v6;
    }
    while ( v6 );
    if ( v4 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(v4, a2, a3);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v4);
      result = MiReturnCommit(a1, v4);
      _InterlockedExchangeAdd64(&qword_14036D568, -(__int64)v4);
    }
  }
  return result;
}
