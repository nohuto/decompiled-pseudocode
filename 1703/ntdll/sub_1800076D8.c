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

LOGICAL __fastcall sub_1800076D8(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // rdi
  void *v5; // r8
  void *v6; // r8
  unsigned int *v8; // r8
  unsigned int *v9; // rbp
  unsigned int *v10; // r14
  unsigned int *v11; // r8
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = BaseAddress[5];
  DelayInterval.QuadPart = -3000000LL;
  if ( *(int *)(qword_1801593C0 + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0, &DelayInterval);
    while ( *(int *)(qword_1801593C0 + 16LL * BaseAddress[5] + 8) > 1 );
  }
  if ( (BaseAddress[81] & 0x4000000) != 0 )
    sub_180004D20((__int64)BaseAddress);
  if ( *((_QWORD *)BaseAddress + 53) )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddress + 53, &RegionSize, 0x8000u);
  }
  ZwClose(*((HANDLE *)BaseAddress + 17));
  ZwClose(*((HANDLE *)BaseAddress + 16));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 22));
  if ( *((_QWORD *)BaseAddress + 20) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 38));
  if ( *((_QWORD *)BaseAddress + 22) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 42));
  if ( *((_QWORD *)BaseAddress + 24) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 46));
  v3 = (unsigned int *)*((_QWORD *)BaseAddress + 58);
  while ( v3 != BaseAddress + 116 )
  {
    v8 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  v4 = (unsigned int *)*((_QWORD *)BaseAddress + 60);
  while ( v4 != BaseAddress + 120 )
  {
    v9 = v4;
    v10 = (unsigned int *)*((_QWORD *)v4 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v10 == v4 + 6 )
        break;
      v11 = v10;
      v10 = *(unsigned int **)v10;
      RtlFreeHeap(ProcessHeap, 0, v11);
    }
    v4 = *(unsigned int **)v4;
    RtlFreeHeap(ProcessHeap, 0, v9);
  }
  v5 = (void *)*((_QWORD *)BaseAddress + 64);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = (void *)*((_QWORD *)BaseAddress + 65);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  sub_1800078C4(BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(qword_1801593C0 + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * BaseAddress[5] + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
