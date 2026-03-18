/*
 * XREFs of ?GetSize@CAtlasImageSource@@UEBAXPEAI0@Z @ 0x1801CF470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1801CF4B8 (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

void __fastcall CAtlasImageSource::GetSize(CAtlasImageSource *this, unsigned int *a2, unsigned int *a3)
{
  CAtlasTexture *v3; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h]
  unsigned int v7; // [rsp+34h] [rbp+Ch]

  v3 = (CAtlasTexture *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    CAtlasTexture::GetSize(v3);
    *a2 = v6;
    *a3 = v7;
  }
  else
  {
    *a2 = 1;
    *a3 = 1;
  }
}
