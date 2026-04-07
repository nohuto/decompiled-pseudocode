/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E740
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A1D0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010A98 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800199A8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int v1; // ebx
  struct CVisual ***v2; // rsi
  unsigned int *v5; // rbp
  unsigned int v6; // edx
  int v7; // eax
  int inserted; // eax
  struct CVisual **v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (struct CVisual ***)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    v5 = (unsigned int *)*((_QWORD *)this + 90);
    v6 = v5[32];
    if ( v6 )
    {
      v7 = CClientArea::Create(
             *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
             v6,
             (struct CClientArea **)this + 59);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Cu);
      else
        (*v2)[30] = (struct CVisual *)v5;
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x7CCu);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 66) + 32LL),
                     *v2,
                     0LL,
                     1u,
                     1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          v10 = 1998;
          goto LABEL_14;
        }
        v9 = *v2;
        *(_QWORD *)&v11.cxLeftWidth = 0LL;
        *(_QWORD *)&v11.cyTopHeight = 0LL;
        CVisual::SetInsetFromParent((CVisual *)v9, &v11);
        if ( (*((_BYTE *)this + 240) & 8) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v1 = inserted;
          if ( inserted < 0 )
          {
            v10 = 2005;
LABEL_14:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10);
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
