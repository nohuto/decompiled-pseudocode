/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x18002C4DC
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18002C46C (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180016598 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rcx
  CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1001u);
  }
  else
  {
    v6 = v8;
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 87) != a3 )
      {
        *((_DWORD *)v8 + 87) = a3;
        CWindowData::OnWindowStyleUpdated(v6);
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
