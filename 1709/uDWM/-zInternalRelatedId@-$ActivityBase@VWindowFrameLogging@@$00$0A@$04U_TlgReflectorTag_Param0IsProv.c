/*
 * XREFs of ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800451F0
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18000A474 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(
        __int64 a1)
{
  __int64 v1; // rax
  _DWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v1 + 4) )
    return 0LL;
  result = (_DWORD *)(v1 + 24);
  if ( !*result && !result[1] && !result[2] && !result[3] )
    return 0LL;
  return result;
}
