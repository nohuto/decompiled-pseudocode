/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1407BD294
 * Callers:
 *     ExDisableHandleTracing @ 0x1402B7DA4 (ExDisableHandleTracing.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x1407BD2F4 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
