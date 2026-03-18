/*
 * XREFs of ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x1801AF960
 * Callers:
 *     ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x1801BBD20 (-Realize@CHwConstantColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF798 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF888 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Realize(CHwSolidColorTextureSource *this)
{
  unsigned int v1; // edi
  signed int LockableTexture; // eax
  signed int v4; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 14) )
  {
    LockableTexture = CHwSolidColorTextureSource::CreateLockableTexture(this);
    v1 = LockableTexture;
    if ( LockableTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LockableTexture, 0x9Bu);
      return v1;
    }
    *((_BYTE *)this + 120) = 0;
  }
  if ( *((_BYTE *)this + 120) || (v4 = CHwSolidColorTextureSource::FillTexture(this), v1 = v4, v4 >= 0) )
    *((_BYTE *)this + 120) = 1;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xA8u);
  return v1;
}
