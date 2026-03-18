/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C00A5D50
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     Template_tt @ 0x1C00384A4 (Template_tt.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkSetPresenterViewMode(unsigned __int8 a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  bool v7; // bl
  __int64 v9; // [rsp+20h] [rbp-18h]

  if ( a2 )
  {
    v6 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 201) == 0;
  }
  else
  {
    v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal() + 201, a1 != 0);
    v6 = (_DWORD)v5 == 0;
  }
  v7 = !v6;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v9) = a2;
    Template_tt(a2, v4, v5, a1, v9);
  }
  return v7;
}
