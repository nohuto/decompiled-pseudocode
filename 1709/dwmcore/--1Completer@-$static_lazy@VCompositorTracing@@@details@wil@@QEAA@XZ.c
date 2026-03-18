/*
 * XREFs of ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801BFA10
 * Callers:
 *     ??$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ @ 0x1801BF14C (--$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ @ 0x1801BF244 (--$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z @ 0x1801BF33C (--$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z.c)
 *     ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448 (--$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF540 (--$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ @ 0x1801BF638 (--$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z @ 0x1801BF730 (--$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 */

BOOL __fastcall wil::details::static_lazy<CompositorTracing>::Completer::~Completer(
        _DWORD *a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rax

  if ( !a1[2] )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(const struct _TlgProvider_t **)(*(_QWORD *)a1 + 32LL);
    *(_QWORD *)(v4 + 16) = v5;
    *(_BYTE *)(v4 + 24) = 1;
    TraceLoggingRegisterEx(v5, a2, a3);
    v6 = *(_QWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 28) = 1;
    (*(void (__fastcall **)(__int64))(v6 + 8))(v4 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
