/*
 * XREFs of ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01947CC
 * Callers:
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01976A0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0197728 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

DISPLAY_CALLOUT_ENTRY *__fastcall DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
        DISPLAY_CALLOUT_ENTRY *this,
        struct _DXGK_WIN32K_PARAM_DATA *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DISPLAY_CALLOUT_ENTRY *result; // rax

  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 4) = 2;
  if ( a2 )
  {
    *(struct _DXGK_WIN32K_PARAM_DATA *)((char *)this + 24) = *a2;
  }
  else
  {
    memset((char *)this + 24, 0, 0x20uLL);
    *((_DWORD *)this + 12) = 2447;
  }
  result = this;
  *((_OWORD *)this + 4) = *(_OWORD *)a3;
  *((_OWORD *)this + 5) = *((_OWORD *)a3 + 1);
  *((_OWORD *)this + 6) = *((_OWORD *)a3 + 2);
  *((_OWORD *)this + 7) = *((_OWORD *)a3 + 3);
  return result;
}
