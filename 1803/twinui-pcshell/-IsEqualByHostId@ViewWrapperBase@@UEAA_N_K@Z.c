/*
 * XREFs of ?IsEqualByHostId@ViewWrapperBase@@UEAA_N_K@Z @ 0x180051CC0
 * Callers:
 *     ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x180032AA0 (-_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByHostId(ViewWrapperBase *this, __int64 a2)
{
  return *((_QWORD *)this + 21) == a2;
}
