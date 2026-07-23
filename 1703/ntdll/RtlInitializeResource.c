/*
 * XREFs of RtlInitializeResource @ 0x18000F220
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18000F3FC @ 0x18000F3FC (sub_18000F3FC.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateSemaphore @ 0x1800A69D0 (ZwCreateSemaphore.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  HANDLE v8; // rax
  HANDLE SemaphoreHandle; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = sub_18000F3FC();
  v4 = v2;
  if ( !v2 )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(v2 + 36) = 0;
  v5 = sub_18000F3C8(1LL, v3);
  *(_WORD *)(v4 + 2) = v5;
  *(_WORD *)(v4 + 44) = HIWORD(v5);
  v6 = ZwCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    sub_180008E24((PSLIST_ENTRY)v4);
    RtlRaiseStatus(v6);
  }
  v7 = ZwCreateSemaphore(&v10, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    ZwClose(SemaphoreHandle);
    sub_180008E24((PSLIST_ENTRY)v4);
    RtlRaiseStatus(v7);
  }
  v8 = SemaphoreHandle;
  Resource->NumberOfWaitingShared = 0;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->SharedSemaphore = v8;
  Resource->ExclusiveSemaphore = v10;
  Resource->DebugInfo = (PRTL_RESOURCE_DEBUG)v4;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  sub_18000F30C(Resource);
  if ( Resource->CriticalSection.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
