/*
 * XREFs of ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180081AD8
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002E784 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartDelayHideAnimation(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int started; // eax

  v2 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 400LL), 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 92) != 8 )
    {
      v4 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v3 = v4;
      if ( v4 >= 0 )
      {
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 8u);
        v3 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x145u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x144u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x140u);
  }
  return v3;
}
