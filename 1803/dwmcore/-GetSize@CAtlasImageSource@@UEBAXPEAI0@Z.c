/*
 * XREFs of ?GetSize@CAtlasImageSource@@UEBAXPEAI0@Z @ 0x18020FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18020FB64 (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

void __fastcall CAtlasImageSource::GetSize(CAtlasImageSource *this, unsigned int *a2, unsigned int *a3)
{
  CAtlasTexture *v3; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h]
  unsigned int v9; // [rsp+34h] [rbp+Ch]

  v3 = (CAtlasTexture *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    CAtlasTexture::GetSize(v3);
    v6 = v9;
    v7 = v8;
  }
  else
  {
    v6 = 1;
    v7 = 1;
  }
  *a2 = v7;
  *a3 = v6;
}
