/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F020
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800198A0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800348E4 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180013480 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800309C0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CCanvasVisual **this, struct IDwmChannel *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual ***v8; // r15
  int v9; // eax
  struct CVisual ***v10; // rbp
  int v11; // eax
  struct CVisual ***v12; // r14
  int v13; // eax
  struct CVisual ***v14; // r12
  int v15; // eax
  int inserted; // eax
  int v17; // eax
  int v18; // eax
  struct CVisual **v19; // rcx
  int v20; // eax
  struct _MARGINS v22; // [rsp+30h] [rbp-28h] BYREF

  v6 = CVisual::Initialize((CVisual *)this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9Au);
  }
  else if ( a3 )
  {
    *((_BYTE *)this + 240) |= 0x10u;
  }
  else
  {
    v8 = (struct CVisual ***)(this + 32);
    v9 = CCanvasVisual::Create(a2, this + 32);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Eu);
    }
    else
    {
      v10 = (struct CVisual ***)(this + 66);
      v11 = CCanvasVisual::Create(a2, this + 66);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9Fu);
      }
      else
      {
        v12 = (struct CVisual ***)(this + 67);
        v13 = CCanvasVisual::Create(a2, this + 67);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA0u);
        }
        else
        {
          v14 = (struct CVisual ***)(this + 34);
          v15 = CTopLevelAtlasedRectsVisual::Create(a2, this + 34);
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xA1u);
          }
          else
          {
            inserted = VisualCollection::InsertRelative((VisualCollection *)(*v8 + 4), *v14, 0LL, 0, 1);
            v7 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xA3u);
            }
            else
            {
              v17 = VisualCollection::InsertRelative((VisualCollection *)(*v8 + 4), *v12, 0LL, 0, 1);
              v7 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xA4u);
              }
              else
              {
                v18 = VisualCollection::InsertRelative((VisualCollection *)(*v12 + 4), *v10, 0LL, 0, 1);
                v7 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xA5u);
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
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xADu);
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
