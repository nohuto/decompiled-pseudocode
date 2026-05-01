/*
 * XREFs of ?GetUniqueCallingContext@CImmersiveApp@@UEBAKXZ @ 0x1800499D0
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18000CDB4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetUniqueCallingContext(CImmersiveApp *this)
{
  return *((unsigned int *)this + 164);
}
