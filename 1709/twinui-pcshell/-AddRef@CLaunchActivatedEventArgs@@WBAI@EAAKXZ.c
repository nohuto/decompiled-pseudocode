/*
 * XREFs of ?AddRef@CLaunchActivatedEventArgs@@WBAI@EAAKXZ @ 0x1801CF1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef(a1 - 264);
}
