/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x180099944
 * Callers:
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x180067910 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x180068DFC (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18006940C (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x1800695AD (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x180069620 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800D1446 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$15 @ 0x1800D1476 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$15.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800D24BF (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800D31DD (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x1800D31E9 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(LPVOID **a1)
{
  LPVOID *v2; // rcx
  LPVOID *result; // rax

  v2 = *a1;
  if ( v2 )
    result = SaDeviceParams::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
