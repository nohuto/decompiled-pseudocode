/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x14071705C
 * Callers:
 *     ExDisableHandleTracing @ 0x14025A2AC (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x1407170BC (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  struct _KPROCESS *v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(struct _KPROCESS **)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
