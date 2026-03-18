/*
 * XREFs of MiAllocateAccessLog @ 0x140011560
 * Callers:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 * Callees:
 *     MiInitializePageAccessLogging @ 0x140011674 (MiInitializePageAccessLogging.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  SIZE_T v4; // rbp
  PVOID *v5; // rdi
  _QWORD *v6; // rsi
  PVOID PoolWithTag; // rdx
  _QWORD *v8; // rdx
  _QWORD *result; // rax
  unsigned __int16 **v10; // r9
  __int64 v11; // r8
  unsigned __int16 *v12; // r10
  unsigned int v13; // r11d

  v2 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v3 = *(_QWORD *)(v2 + 5952);
  if ( v3 < 0x420 )
  {
    v10 = (unsigned __int16 **)(v2 + 4072);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *v10;
      v13 = 0;
      if ( dword_140388544 )
        break;
LABEL_20:
      ++v11;
      ++v10;
      if ( v11 > 1 )
        goto LABEL_15;
    }
    while ( 1 )
    {
      v3 += *v12;
      if ( v3 >= 0x420 )
        break;
      ++v13;
      v12 += 8;
      if ( v13 >= dword_140388544 )
        goto LABEL_20;
    }
  }
  if ( *(__int64 *)(v2 + 6016) < 1056 || (unsigned __int64)(MiState - qword_140388018) < 0x800 )
LABEL_15:
    v4 = 512LL;
  else
    v4 = 4096LL;
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v5 = (PVOID *)&unk_1403897A8;
  else
    v5 = (PVOID *)(a1 + 240);
  v6 = *v5;
  if ( *v5 && (v4 == 512 || *v6 && *(_QWORD *)*v6) )
  {
    MiEmptyPageAccessLog(*v5);
    v6 = 0LL;
    *v5 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_9:
    *v5 = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v4);
    result = v8;
    *v8 = v6;
  }
  else
  {
    while ( 1 )
    {
      if ( *v5 )
      {
        MiEmptyPageAccessLog(*v5);
        v6 = 0LL;
        *v5 = 0LL;
      }
      v4 >>= 1;
      if ( v4 < 0x200 )
        return 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_9;
    }
  }
  return result;
}
