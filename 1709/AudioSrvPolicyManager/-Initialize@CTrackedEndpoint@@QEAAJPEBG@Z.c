/*
 * XREFs of ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x180023A64
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::Initialize(unsigned __int16 **this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0LL;
  v4 = this + 11;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v7 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, v5, v14, this + 11);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
           g_DeviceEnumerator,
           *v4,
           &v15);
    if ( v7 >= 0 )
    {
      v9 = this + 9;
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
             v15,
             &IID_IAudioEndpointVolume,
             23LL);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v9 + 72LL))(*v9, (char *)this + 96);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(*(_QWORD *)*v9 + 24LL))(*v9, this);
          if ( v7 >= 0 )
            goto LABEL_19;
          if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
            McTemplateU0dsdp(v12, &EUVolumePolicy_Error_Propagation, v7, "CTrackedEndpoint::Initialize", 38, (char)this);
        }
        else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        {
          McTemplateU0dsdp(v11, &EUVolumePolicy_Error_Propagation, v7, "CTrackedEndpoint::Initialize", 35, (char)this);
        }
      }
      else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      {
        McTemplateU0dsdp(v10, &EUVolumePolicy_Error_Propagation, v7, "CTrackedEndpoint::Initialize", 32, (char)this);
      }
    }
    else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      McTemplateU0dsdp(v8, &EUVolumePolicy_Error_Propagation, v7, "CTrackedEndpoint::Initialize", 31, (char)this);
    }
  }
  else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
  {
    McTemplateU0dsdp(v6, &EUVolumePolicy_Error_Propagation, v7, "CTrackedEndpoint::Initialize", 29, (char)this);
  }
  v3 = v7;
LABEL_19:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v3;
}
