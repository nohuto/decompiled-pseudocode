/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18002ABF0
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015A38 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024A00 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A280 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CCanvasVisual **this, struct IDwmChannel *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual **v8; // r15
  int v9; // eax
  struct CVisual **v10; // rbp
  int v11; // eax
  struct CVisual **v12; // r14
  int v13; // eax
  struct CVisual **v14; // r12
  int v15; // eax
  int inserted; // eax
  int v17; // eax
  int v18; // eax
  struct CVisual *v19; // rcx
  int v20; // eax
  struct _MARGINS v22; // [rsp+30h] [rbp-28h] BYREF

  v6 = CVisual::Initialize((CVisual *)this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA1u);
  }
  else if ( a3 )
  {
    *((_BYTE *)this + 240) |= 0x10u;
  }
  else
  {
    v8 = this + 32;
    v9 = CCanvasVisual::Create(a2, this + 32);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA5u);
    }
    else
    {
      v10 = this + 66;
      v11 = CCanvasVisual::Create(a2, this + 66);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA6u);
      }
      else
      {
        v12 = this + 67;
        v13 = CCanvasVisual::Create(a2, this + 67);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA7u);
        }
        else
        {
          v14 = this + 34;
          v15 = CTopLevelAtlasedRectsVisual::Create(a2, this + 34);
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA8u);
          }
          else
          {
            inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v14, 0LL, 0, 1);
            v7 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xAAu);
            }
            else
            {
              v17 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v12, 0LL, 0, 1);
              v7 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xABu);
              }
              else
              {
                v18 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v12 + 32), *v10, 0LL, 0, 1);
                v7 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xACu);
                }
                else
                {
                  v19 = *v10;
                  *(_QWORD *)&v22.cxLeftWidth = 0LL;
                  *(_QWORD *)&v22.cyTopHeight = 0LL;
                  CVisual::SetInsetFromParent((struct _MARGINS *)v19, &v22);
                  CVisual::SetInsetFromParent((struct _MARGINS *)*v14, &v22);
                  v20 = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v8, 0LL, 0, 0);
                  v7 = v20;
                  if ( v20 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB4u);
                  else
                    *((_DWORD *)*v12 + 48) = -1;
                }
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
