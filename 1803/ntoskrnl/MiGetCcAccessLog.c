/*
 * XREFs of MiGetCcAccessLog @ 0x14052760C
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 *     MiInitializePageAccessLogging @ 0x14012A1A4 (MiInitializePageAccessLogging.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiGetCcAccessLog(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  _QWORD *v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r11
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdx
  PVOID result; // rax
  unsigned __int64 v14; // rbx
  char *AnyMultiplexedVm; // rax
  __int64 v16; // r10

  if ( !qword_1403CBF00 )
    goto LABEL_14;
  v4 = _InterlockedExchange64(&qword_1403CBF00, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_QWORD *)(v4 + 32) + 8 * a2 > v5 || (__int64)((*(_QWORD *)(v4 + 48) - v5) & 0xFFFFFFFFFFFFFFF8uLL) >= 4096 )
  {
    MiQueuePageAccessLog((_SLIST_ENTRY *)v4);
    v4 = 0LL;
  }
  if ( !v4 )
  {
LABEL_14:
    v14 = (8 * a2 + 4183) & 0xFFFFFFFFFFFFF000uLL;
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x63416D4Du);
    if ( !result )
      return result;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    MiInitializePageAccessLogging((__int64)AnyMultiplexedVm, v16, v14);
    *(_DWORD *)(v4 + 8) = 1;
  }
  v6 = *(_QWORD **)(v4 + 40);
  v7 = *(_QWORD *)(v4 + 48);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v6 + 1;
  if ( (unsigned __int64)(v6 + 1) >= v7 )
    goto LABEL_13;
  do
  {
    v10 = *v9;
    v11 = v9;
    if ( *v9 == v8 )
      break;
    ++v9;
  }
  while ( (unsigned __int64)v9 < v7 );
  v12 = (unsigned __int64)(v11 + 1);
  if ( v10 == v8 )
    v12 = (unsigned __int64)v11;
  if ( v12 >= v7 )
  {
LABEL_13:
    v12 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = v6 - 1;
    *v6 = v8;
  }
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 32);
  result = (PVOID)v4;
  *(_DWORD *)(v4 + 12) = (__int64)(v7 - v12) >> 3;
  return result;
}
