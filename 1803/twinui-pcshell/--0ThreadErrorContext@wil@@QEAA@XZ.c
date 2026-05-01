/*
 * XREFs of ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018
 * Callers:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180089C48 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180188AC0 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A4EA0 (-GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEng.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801A6634 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z @ 0x1801A6AA0 (-SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6D14 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A70F8 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 */

wil::ThreadErrorContext *__fastcall wil::ThreadErrorContext::ThreadErrorContext(wil::ThreadErrorContext *this)
{
  wil::ThreadErrorContext *v1; // rbx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  int v3; // edx
  __int64 v4; // rax

  v1 = this;
  LOBYTE(this) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(this);
  *(_QWORD *)v1 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    *((_DWORD *)v1 + 3) = *((_DWORD *)ThreadLocalDataCache + 4);
    v3 = **((_DWORD **)ThreadLocalDataCache + 1);
    v4 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = v3;
    *(_DWORD *)(v4 + 16) = v3;
  }
  return v1;
}
