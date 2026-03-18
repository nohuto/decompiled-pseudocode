/*
 * XREFs of ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18015E500
 * Callers:
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800248D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CHDRToSDRToneMapLayer *__fastcall CHDRToSDRToneMapLayer::`vector deleting destructor'(
        CHDRToSDRToneMapLayer *this,
        char a2)
{
  *(_QWORD *)this = &CHDRToSDRToneMapLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
