/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C00DEE40
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt @ 0x1C0033034 (McTemplateK0tt.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // si
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-18h]

  v3 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  if ( a2 )
  {
    v7 = *((_DWORD *)Global + 221) == 0;
  }
  else
  {
    v6 = (unsigned int)_InterlockedExchange((volatile __int32 *)Global + 221, v3 != 0);
    v7 = (_DWORD)v6 == 0;
  }
  v8 = !v7;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = a2;
    McTemplateK0tt(a2, v5, v6, v3, v10);
  }
  return v8;
}
