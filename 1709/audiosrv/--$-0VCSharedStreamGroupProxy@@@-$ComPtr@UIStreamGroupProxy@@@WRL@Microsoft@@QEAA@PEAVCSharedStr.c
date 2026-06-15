/*
 * XREFs of ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x180091990
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002A098 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(__int64 *a1, __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(a1);
  return a1;
}
