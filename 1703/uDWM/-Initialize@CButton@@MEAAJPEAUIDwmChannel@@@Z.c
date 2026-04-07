/*
 * XREFs of ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180020520
 * Callers:
 *     ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800162C4 (-Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001AC24 (-Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D3C (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180021E20 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002BF34 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::Initialize(CButton *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CAtlasedImage **v7; // r14
  int v8; // eax
  int inserted; // eax
  int v10; // eax
  CAtlasedImage *v11; // rcx
  struct _MARGINS v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = CAtlasedRectsVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Cu);
  }
  else
  {
    v6 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 36);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2Eu);
    }
    else
    {
      v7 = (struct CAtlasedImage **)((char *)this + 296);
      v8 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 37);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2Fu);
      }
      else
      {
        inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v7, *((_DWORD *)this + 66));
        v5 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x33u);
        }
        else
        {
          v10 = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                  this,
                  *((struct CAtlasedImage **)this + 36),
                  *((_DWORD *)this + 66));
          v5 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x34u);
          }
          else
          {
            v11 = *v7;
            *(_QWORD *)&v13.cxLeftWidth = 0LL;
            *(_QWORD *)&v13.cyTopHeight = 0LL;
            CAtlasedImage::SetInsetFromParent(v11, &v13);
          }
        }
      }
    }
  }
  return v5;
}
