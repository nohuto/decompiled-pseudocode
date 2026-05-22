/*
 * XREFs of ??_ESpatialInputControllerCollection@@UEAAPEAXI@Z @ 0x180092770
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800927B4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 */

SpatialInputControllerCollection *__fastcall SpatialInputControllerCollection::`vector deleting destructor'(
        SpatialInputControllerCollection *this,
        char a2)
{
  SpatialInputControllerCollection::~SpatialInputControllerCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
