/*
 * XREFs of ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x1800225E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     WPP_SF_I @ 0x180021D64 (WPP_SF_I.c)
 *     ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x180022CF4 (-FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z.c)
 *     ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023F44 (-RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::StreamStopped(
        CVolumeLimitTrackerImpl *this,
        struct IAudioStreamInfo *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r8d
  CTrackedEndpoint *TrackedEndpoint; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  char v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+28h] [rbp-10h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_DWORD *)this + 16) )
  {
    if ( !a2 )
    {
      v7 = -2147467261;
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        McTemplateU0dsdp(
          v6,
          &EUVolumePolicy_Error_Origination,
          -2147467261,
          "CVolumeLimitTrackerImpl::StreamStopped",
          245,
          (char)this);
      goto LABEL_22;
    }
    TrackedEndpoint = CVolumeLimitTrackerImpl::FindTrackedEndpoint(this, a3);
    if ( TrackedEndpoint )
    {
      v10 = CTrackedEndpoint::RemoveStream(TrackedEndpoint, a2);
      v7 = v10;
      if ( v10 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
          goto LABEL_22;
        v15 = (char)this;
        v14 = -3;
LABEL_13:
        v8 = v10;
        goto LABEL_4;
      }
      v10 = (*(__int64 (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)this + 56LL))(this);
      v7 = v10;
      if ( v10 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
          goto LABEL_22;
        v15 = (char)this;
        v14 = -1;
        goto LABEL_13;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
        WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, v12, v11);
      }
    }
    v7 = 0;
    goto LABEL_22;
  }
  v7 = -2147418113;
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
  {
    v15 = (char)this;
    v8 = -2147418113;
    v14 = -15;
LABEL_4:
    McTemplateU0dsdp(v6, &EUVolumePolicy_Error_Propagation, v8, "CVolumeLimitTrackerImpl::StreamStopped", v14, v15);
  }
LABEL_22:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return v7;
}
