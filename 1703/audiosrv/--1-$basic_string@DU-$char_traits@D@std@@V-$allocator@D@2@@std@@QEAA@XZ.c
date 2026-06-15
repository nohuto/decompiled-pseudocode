/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18007AEF0
 * Callers:
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$3 @ 0x18005A765 (_CAudioStream--RecalculateVolume_--_1_--dtor$3.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$4 @ 0x18005A77D (_CAudioStream--RecalculateVolume_--_1_--dtor$4.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$16 @ 0x18005A8D3 (_CAudioStream--_CAudioStream_--_1_--dtor$16.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$1 @ 0x18007B84F (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::string::~string(__int64 a1)
{
  return std::string::_Tidy_deallocate_only(a1);
}
