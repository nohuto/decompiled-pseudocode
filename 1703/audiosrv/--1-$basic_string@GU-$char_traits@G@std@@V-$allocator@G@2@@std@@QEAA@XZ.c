/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18007B0A4
 * Callers:
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$1 @ 0x180059F18 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$1.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$17 @ 0x18005A8E3 (_CAudioStream--_CAudioStream_--_1_--dtor$17.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$18 @ 0x18005A8F3 (_CAudioStream--_CAudioStream_--_1_--dtor$18.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$2 @ 0x18007B85F (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$2.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$3 @ 0x18007B86F (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$3.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate(*(_QWORD **)a1, v1 + 1, 2uLL);
}
