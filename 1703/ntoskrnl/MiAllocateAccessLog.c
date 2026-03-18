/*
 * XREFs of MiAllocateAccessLog @ 0x1400067F0
 * Callers:
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 * Callees:
 *     MiInitializePageAccessLogging @ 0x14000690C (MiInitializePageAccessLogging.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rdx
  SIZE_T v3; // rbp
  LONG *v4; // rdi
  _QWORD **v5; // rsi
  PVOID PoolWithTag; // rdx
  _QWORD *v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rax
  void *v10; // rcx

  v2 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
  if ( *(_QWORD *)(v2 + 5760) < 0x420uLL
    || *(__int64 *)(v2 + 5824) < 1056
    || (unsigned __int64)(MiState - qword_14036BD18) < 0x800 )
  {
    v3 = 512LL;
  }
  else
  {
    v3 = 4096LL;
  }
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v4 = &dword_14036D4C0;
  else
    v4 = (LONG *)(a1 + 200);
  v5 = (_QWORD **)*((_QWORD *)v4 + 5);
  if ( v5 )
  {
    v9 = *v5;
    if ( v3 == 512 || v9 && *v9 )
    {
      MiEmptyPageAccessLog(*((PVOID *)v4 + 5));
      v5 = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_9:
    *((_QWORD *)v4 + 5) = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v3);
    result = v7;
    *v7 = v5;
  }
  else
  {
    while ( 1 )
    {
      v10 = (void *)*((_QWORD *)v4 + 5);
      if ( v10 )
      {
        MiEmptyPageAccessLog(v10);
        v5 = 0LL;
        *((_QWORD *)v4 + 5) = 0LL;
      }
      v3 >>= 1;
      if ( v3 < 0x200 )
        return 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_9;
    }
  }
  return result;
}
