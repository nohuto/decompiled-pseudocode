/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x18002DF60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call @ 0x18001F070 (std--_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStrea_ea_18001F070.c)
 * Callees:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002BA30 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  __int64 v1; // r8
  struct _GUID *v2; // r9
  struct IAudioStreamInfo *v3; // r10
  __int64 (__fastcall *v4)(Sarm::CSpatialAudioResourceManager *, struct IAudioStreamInfo *, unsigned int, struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *); // rax
  struct SPATIAL_STREAM_PROPERTIES *v6; // [rsp+20h] [rbp-18h]

  v1 = *((unsigned int *)this + 146);
  v2 = (struct _GUID *)((char *)this + 568);
  v3 = (struct IAudioStreamInfo *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v6 = (CAudioStream *)((char *)this + 592);
  v4 = *(__int64 (__fastcall **)(Sarm::CSpatialAudioResourceManager *, struct IAudioStreamInfo *, unsigned int, struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL);
  if ( v4 == Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice )
    return Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
             g_SpatialAudioResourceManager,
             v3,
             v1,
             v2,
             v6);
  else
    return v4(g_SpatialAudioResourceManager, v3, v1, v2, v6);
}
