/*
 * XREFs of sub_1800076D8 @ 0x1800076D8
 * Callers:
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     sub_180004D20 @ 0x180004D20 (sub_180004D20.c)
 *     sub_1800078C4 @ 0x1800078C4 (sub_1800078C4.c)
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 */

__int64 __fastcall sub_1800076D8(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v6; // r14
  void *ProcessHeap; // rcx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+54h] [rbp+Ch]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v8 = -3000000;
  if ( *(int *)(qword_1801593C0 + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v8);
    while ( *(int *)(qword_1801593C0 + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    sub_180004D20(a1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v10 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v10, 0x8000LL);
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
    v3 = (_QWORD *)*v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  }
  v4 = *(_QWORD **)(a1 + 480);
  while ( v4 != (_QWORD *)(a1 + 480) )
  {
    v6 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v6 == v4 + 3 )
        break;
      v6 = (_QWORD *)*v6;
      RtlFreeHeap(ProcessHeap, 0LL);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap(ProcessHeap, 0LL);
  }
  if ( *(_QWORD *)(a1 + 512) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  if ( *(_QWORD *)(a1 + 520) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  sub_1800078C4(a1);
  _InterlockedExchange64((volatile __int64 *)(qword_1801593C0 + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
}
