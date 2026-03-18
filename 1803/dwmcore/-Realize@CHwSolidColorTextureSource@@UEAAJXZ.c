/*
 * XREFs of ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x1801EA290
 * Callers:
 *     ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x1801F67C0 (-Realize@CHwConstantColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801EA0BC (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801EA1AC (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Realize(CHwSolidColorTextureSource *this)
{
  unsigned int v1; // edi
  int LockableTexture; // eax
  int v4; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 14) )
  {
    LockableTexture = CHwSolidColorTextureSource::CreateLockableTexture(this);
    v1 = LockableTexture;
    if ( LockableTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LockableTexture, 0x9Bu);
      return v1;
    }
    *((_BYTE *)this + 120) = 0;
  }
  if ( *((_BYTE *)this + 120) || (v4 = CHwSolidColorTextureSource::FillTexture(this), v1 = v4, v4 >= 0) )
    *((_BYTE *)this + 120) = 1;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xA8u);
  return v1;
}
