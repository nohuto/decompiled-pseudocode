/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022F00
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800232A8 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnOffsetUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // edi
  int started; // eax

  v2 = 0;
  if ( a2 && CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 9u);
    v2 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x16Bu);
  }
  else if ( !*((_BYTE *)this + 288) && !*((_DWORD *)this + 93) )
  {
    *(_OWORD *)((char *)this + 308) = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
  }
  return v2;
}
