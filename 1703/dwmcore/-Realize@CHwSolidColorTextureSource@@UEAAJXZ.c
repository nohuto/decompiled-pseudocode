/*
 * XREFs of ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18019CCC0
 * Callers:
 *     ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x1801A2540 (-Realize@CHwConstantColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CAE0 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CBD0 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Realize(CHwSolidColorTextureSource *this)
{
  unsigned int v1; // edi
  int LockableTexture; // eax
  int v4; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 13) )
  {
    LockableTexture = CHwSolidColorTextureSource::CreateLockableTexture(this);
    v1 = LockableTexture;
    if ( LockableTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LockableTexture, 0x9Bu);
      return v1;
    }
    *((_BYTE *)this + 112) = 0;
  }
  if ( *((_BYTE *)this + 112) || (v4 = CHwSolidColorTextureSource::FillTexture(this), v1 = v4, v4 >= 0) )
    *((_BYTE *)this + 112) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA8u);
  return v1;
}
