/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005D84C
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x1800E6BBC (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$6 @ 0x1800E6BE0 (_SpectrumListener--SpectrumListener_--_1_--dtor$6.c)
 *     _GetPropertyValue_unsigned___int64__::_1_::dtor$4 @ 0x1800E783D (_GetPropertyValue_unsigned___int64__--_1_--dtor$4.c)
 *     _GetPropertyValue_unsigned_long__::_1_::dtor$4 @ 0x1800E7879 (_GetPropertyValue_unsigned_long__--_1_--dtor$4.c)
 *     _ButtonProcessor::OnCameraAccessToggle_::_1_::dtor$2 @ 0x1800E8373 (_ButtonProcessor--OnCameraAccessToggle_--_1_--dtor$2.c)
 *     _ButtonProcessor::OnCameraAccessToggle_::_1_::dtor$3 @ 0x1800E837F (_ButtonProcessor--OnCameraAccessToggle_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
