/*
 * XREFs of sub_180003970 @ 0x180003970
 * Callers:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 * Callees:
 *     sub_180003B38 @ 0x180003B38 (sub_180003B38.c)
 *     sub_180003B70 @ 0x180003B70 (sub_180003B70.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 */

__int64 __fastcall sub_180003970(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  _QWORD *v9; // r8
  _QWORD *v10; // rbp
  _QWORD *v11; // r14
  _QWORD *v12; // r8
  void *ProcessHeap; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v14 = -3000000;
  if ( *(int *)(qword_18015A420 + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v14);
    while ( *(int *)(qword_18015A420 + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    sub_180003B70(a1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v16, 0x8000LL);
  }
  ZwClose(*(_QWORD *)(a1 + 136));
  ZwClose(*(_QWORD *)(a1 + 128));
  RtlDeleteCriticalSection((void *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 464);
  while ( v3 != (_QWORD *)(a1 + 464) )
  {
    v9 = v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  }
  v4 = *(_QWORD **)(a1 + 480);
  while ( v4 != (_QWORD *)(a1 + 480) )
  {
    v10 = v4;
    v11 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v11 == v4 + 3 )
        break;
      v12 = v11;
      v11 = (_QWORD *)*v11;
      RtlFreeHeap(ProcessHeap, 0LL, v12);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap(ProcessHeap, 0LL, v10);
  }
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
  v7 = *(_QWORD *)(a1 + 536);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
  sub_180003B38(a1);
  _InterlockedExchange64((volatile __int64 *)(qword_18015A420 + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
