/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C00F9610
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt @ 0x1C00285C0 (McTemplateK0tt.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  bool v7; // bl
  __int64 v9; // [rsp+20h] [rbp-18h]

  v3 = a1;
  if ( a2 )
  {
    v6 = *((_DWORD *)DXGGLOBAL::GetGlobal(a1) + 201) == 0;
  }
  else
  {
    v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal(a1) + 201, (_BYTE)a1 != 0);
    v6 = (_DWORD)v5 == 0;
  }
  v7 = !v6;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v9) = a2;
    McTemplateK0tt(a2, v4, v5, v3, v9);
  }
  return v7;
}
