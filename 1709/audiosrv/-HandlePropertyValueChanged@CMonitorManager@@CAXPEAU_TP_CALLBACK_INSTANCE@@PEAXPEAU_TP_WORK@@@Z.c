/*
 * XREFs of ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A4780
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800A40F0 (-DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 */

void __fastcall CMonitorManager::HandlePropertyValueChanged(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  GUID v3; // xmm0
  const unsigned __int16 *v5; // rdx
  struct _tagpropertykey v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(GUID *)(Context + 8);
  v6.pid = *((_DWORD *)Context + 6);
  v5 = *(const unsigned __int16 **)Context;
  v6.fmtid = v3;
  CMonitorManager::DoHandlePropertyValueChanged(*((CMonitorManager **)Context + 4), v5, &v6);
  PropertyChangedContext::`scalar deleting destructor'((PropertyChangedContext *)Context);
}
