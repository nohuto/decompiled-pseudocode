/*
 * XREFs of ??1?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB22C
 * Callers:
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x1800B5C84 (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::~ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>(
        CLaunchActivatedEventArgs **a1)
{
  return Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(a1);
}
