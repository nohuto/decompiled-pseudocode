/*
 * XREFs of ?IsEndpointTracked@CVolumeLimitTrackerImpl@@IEAAHPEBG@Z @ 0x180022C28
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::IsEndpointTracked(
        CVolumeLimitTrackerImpl *this,
        const unsigned __int16 *a2)
{
  char v2; // di
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = (char)this;
  v3 = 0;
  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointChCache + 24LL))(
           g_pEndpointChCache,
           a2,
           0LL,
           &v8);
    if ( v5 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      if ( v3 )
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) == 0;
    }
    else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      McTemplateU0dsdp(v6, &EUVolumePolicy_Error_Propagation, v5, "CVolumeLimitTrackerImpl::IsEndpointTracked", 234, v2);
    }
    v4 = v8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
