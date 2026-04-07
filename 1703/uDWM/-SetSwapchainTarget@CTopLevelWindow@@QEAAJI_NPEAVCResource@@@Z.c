/*
 * XREFs of ?SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z @ 0x180081190
 * Callers:
 *     ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUIDwmChannel@@I@Z @ 0x1800855A0 (-SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x18006FC74 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetSwapchainTarget(CTopLevelWindow *this, int a2, char a3, struct CResource *a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( *((_QWORD *)this + 97) )
  {
    v4 = -2147024891;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024891, 0x1540u);
  }
  else
  {
    *((_DWORD *)this + 192) = a2;
    *((_BYTE *)this + 772) = a3;
    *((_QWORD *)this + 97) = a4;
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v5 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x1548u);
  }
  return v4;
}
