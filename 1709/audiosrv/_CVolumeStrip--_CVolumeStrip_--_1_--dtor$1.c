/*
 * XREFs of _CVolumeStrip::_CVolumeStrip_::_1_::dtor$1 @ 0x18006C3AF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeStrip::_CVolumeStrip_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CLockedList<CMasterVolumeNotificationProcess,1,0>::~CLockedList<CMasterVolumeNotificationProcess,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 24LL));
}
