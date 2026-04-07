/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x1800338B8
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180033848 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180036650 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rcx
  struct CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xECBu);
  }
  else
  {
    v6 = v8;
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 89) != a3 )
      {
        *((_DWORD *)v8 + 89) = a3;
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
