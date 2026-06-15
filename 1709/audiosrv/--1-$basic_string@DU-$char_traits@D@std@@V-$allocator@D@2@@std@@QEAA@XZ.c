/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18005A9B4
 * Callers:
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$1 @ 0x180038560 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$1.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$2 @ 0x1800392F5 (_CAudioStream--RecalculateVolume_--_1_--dtor$2.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$3 @ 0x18003930D (_CAudioStream--RecalculateVolume_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::string::~string(__int64 a1)
{
  std::string::_Tidy_deallocate(a1);
}
