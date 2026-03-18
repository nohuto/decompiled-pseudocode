/*
 * XREFs of ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0038660
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0035810 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C0037CE0 (-IsAnalogExclusive@CFlipToken@@UEBA_NXZ.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C0038180 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CompositionSurfaceObject::GetAnalogExclusive(CompositionSurfaceObject *this)
{
  CPushLock *v1; // rsi
  char v3; // di
  char v4; // bl

  v1 = (CompositionSurfaceObject *)((char *)this + 32);
  v3 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    v4 = *((_BYTE *)this + 112);
    CPushLock::ReleaseLock(v1);
    return v4 != 0;
  }
  return v3;
}
