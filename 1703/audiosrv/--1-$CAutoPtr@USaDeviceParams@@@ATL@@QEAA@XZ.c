/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x18007CCD8
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x180059987 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x180059C0C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x18005A470 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x18005BCF0 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800AB876 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$14 @ 0x1800AB89A (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$14.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800AC668 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800AD2BA (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x1800AD2C6 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
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
