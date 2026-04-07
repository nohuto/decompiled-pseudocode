/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029E14
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800063D0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019E84 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180024DB8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int v1; // ebx
  struct CVisual **v2; // rsi
  __int64 v5; // rbp
  int v6; // eax
  int inserted; // eax
  struct CVisual *v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (struct CVisual **)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    v5 = *((_QWORD *)this + 90);
    if ( *(_DWORD *)(v5 + 128) )
    {
      v6 = CClientArea::Create(
             *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
             *(_DWORD *)(v5 + 128),
             (struct CClientArea **)this + 59);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Cu);
      else
        *((_QWORD *)*v2 + 30) = v5;
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x796u);
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
          v9 = 1944;
LABEL_15:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v9);
          return (unsigned int)v1;
        }
        v8 = *v2;
        *(_QWORD *)&v10.cxLeftWidth = 0LL;
        *(_QWORD *)&v10.cyTopHeight = 0LL;
        CVisual::SetInsetFromParent((struct _MARGINS *)v8, &v10);
        if ( (*((_BYTE *)this + 240) & 8) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v1 = inserted;
          if ( inserted < 0 )
          {
            v9 = 1951;
            goto LABEL_15;
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
