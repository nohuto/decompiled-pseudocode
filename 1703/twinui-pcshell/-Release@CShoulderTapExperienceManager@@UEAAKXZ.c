/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x1800A6D30
 * Callers:
 *     ?Release@CShoulderTapExperienceManager@@W7EAAKXZ @ 0x1800A8100 (-Release@CShoulderTapExperienceManager@@W7EAAKXZ.c)
 *     sub_1800C0500 @ 0x1800C0500 (sub_1800C0500.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
