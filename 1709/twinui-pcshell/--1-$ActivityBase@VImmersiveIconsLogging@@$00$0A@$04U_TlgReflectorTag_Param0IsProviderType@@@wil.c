/*
 * XREFs of ??1?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801CA3B4
 * Callers:
 *     ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ @ 0x1801CA7EC (--1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x1800038C8 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180026994 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801CA2B4 (-Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801CC4C0 (-reset@-$shared_object@V-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  HANDLE ProcessHeap; // rax
  const struct _TlgProvider_t *v3; // rax

  wil::details::shared_object<wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(a1 + 136));
  if ( *(_BYTE *)(a1 + 120) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v3 = ImmersiveIconsLogging::Provider();
    _TlgWriteActivityAutoStop<0,5>(v3, (const GUID *)(a1 + 64));
  }
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
