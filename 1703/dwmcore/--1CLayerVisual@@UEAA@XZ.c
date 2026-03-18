/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x1800C1ADC
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800C1A90 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180013ECC (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(struct CResource **this)
{
  *this = (struct CResource *)&CLayerVisual::`vftable';
  if ( (*((_DWORD *)this[26] + 1) & 0x10000) != 0 )
    CLayerVisual::ClearTreeEffect((CLayerVisual *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[62]);
  this[62] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
