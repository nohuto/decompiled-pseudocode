/*
 * XREFs of ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290
 * Callers:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14001B074 (TraceLoggingRegisterEx.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(
        unsigned int *a1,
        __int64 a2,
        void *a3)
{
  void (__stdcall *v3)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  __int64 v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rax

  v3 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))a1[2];
  if ( !(_DWORD)v3 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *(const struct _TlgProvider_t **)(*(_QWORD *)a1 + 32LL);
    *(_QWORD *)(v5 + 16) = v6;
    *(_BYTE *)(v5 + 24) = 1;
    TraceLoggingRegisterEx(v6, v3, a3);
    v7 = *(_QWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 28) = 1;
    (*(void (__fastcall **)(__int64))(v7 + 8))(v5 + 8);
    LODWORD(v3) = a1[2];
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, (DWORD)v3, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
