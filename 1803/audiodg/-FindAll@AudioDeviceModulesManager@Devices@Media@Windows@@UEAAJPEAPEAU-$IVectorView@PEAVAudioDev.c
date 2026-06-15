/*
 * XREFs of ?FindAll@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004A380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAll(__int64 a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 64LL))(*(_QWORD *)(a1 + 104));
  else
    return 2147500035LL;
}
