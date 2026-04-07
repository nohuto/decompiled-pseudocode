/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF10
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180034054 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x18001A820 (StringCchLengthW.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180035D50 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, size_t a2)
{
  char v3; // si
  HRESULT v4; // eax
  char *v5; // r11
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v4 = StringCchLengthW(*(STRSAFE_PCNZWCH *)(*((_QWORD *)this + 9) + 16LL), a2, &pcchLength);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x266u);
  }
  else
  {
    v7 = CWindowData::SetTitle(*((CWindowData ***)this + 10), v5, pcchLength);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x268u);
    }
    else
    {
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x10000);
      if ( v3 )
      {
        v9 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26Eu);
      }
    }
  }
  return v6;
}
