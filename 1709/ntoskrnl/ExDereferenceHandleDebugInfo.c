/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1407567C8
 * Callers:
 *     ExDisableHandleTracing @ 0x140283C40 (ExDisableHandleTracing.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x140756828 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
