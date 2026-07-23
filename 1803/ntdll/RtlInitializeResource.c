/*
 * XREFs of RtlInitializeResource @ 0x18005C7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_1800244F8 @ 0x1800244F8 (sub_1800244F8.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateSemaphore @ 0x18009C1D0 (ZwCreateSemaphore.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  PSLIST_ENTRY v2; // rax
  PSLIST_ENTRY v3; // rdi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  HANDLE v7; // rax
  HANDLE SemaphoreHandle; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = sub_1800244F8();
  v3 = v2;
  if ( !v2 )
    RtlRaiseStatus(-1073741801);
  HIDWORD(v2[2].Next) = 0;
  v4 = sub_1800244C4(1u);
  WORD1(v3->Next) = v4;
  *((_WORD *)&v3[2].Next + 6) = HIWORD(v4);
  v5 = ZwCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    sub_180029EA4(v3);
    RtlRaiseStatus(v5);
  }
  v6 = ZwCreateSemaphore(&v9, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    ZwClose(SemaphoreHandle);
    sub_180029EA4(v3);
    RtlRaiseStatus(v6);
  }
  v7 = SemaphoreHandle;
  Resource->NumberOfWaitingShared = 0;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->SharedSemaphore = v7;
  Resource->ExclusiveSemaphore = v9;
  Resource->DebugInfo = (PRTL_RESOURCE_DEBUG)v3;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  sub_180024408((__int64)Resource);
  if ( Resource->CriticalSection.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
