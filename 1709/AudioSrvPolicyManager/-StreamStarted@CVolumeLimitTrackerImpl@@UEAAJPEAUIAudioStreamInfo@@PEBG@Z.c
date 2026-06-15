/*
 * XREFs of ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180011208 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     WPP_SF_I @ 0x180021D64 (WPP_SF_I.c)
 *     ?IsEndpointTracked@CVolumeLimitTrackerImpl@@IEAAHPEBG@Z @ 0x180022C28 (-IsEndpointTracked@CVolumeLimitTrackerImpl@@IEAAHPEBG@Z.c)
 *     ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x180022CF4 (-FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z.c)
 *     ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x180023888 (--0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z.c)
 *     ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x180023A64 (-Initialize@CTrackedEndpoint@@QEAAJPEBG@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x180023E10 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::StreamStarted(
        CVolumeLimitTrackerImpl *this,
        struct IAudioStreamInfo *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r8d
  CTrackedEndpoint *TrackedEndpoint; // rbp
  CTrackedEndpoint *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  char v16; // [rsp+20h] [rbp-28h]
  char v17; // [rsp+28h] [rbp-20h]
  float v18; // [rsp+50h] [rbp+8h] BYREF
  CTrackedEndpoint *v19; // [rsp+68h] [rbp+20h] BYREF

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
          "CVolumeLimitTrackerImpl::StreamStarted",
          198,
          (char)this);
      goto LABEL_38;
    }
    if ( (unsigned int)CVolumeLimitTrackerImpl::IsEndpointTracked(this, a3) )
    {
      TrackedEndpoint = CVolumeLimitTrackerImpl::FindTrackedEndpoint(this, a3);
      if ( !TrackedEndpoint )
      {
        v10 = (CTrackedEndpoint *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v10 = CTrackedEndpoint::CTrackedEndpoint(v10, this, *((float *)this + 32));
        v19 = v10;
        if ( !v10 )
        {
          v7 = -2147024882;
          goto LABEL_38;
        }
        v11 = CTrackedEndpoint::Initialize(v10, a3);
        v7 = v11;
        if ( v11 < 0 )
        {
          if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
            goto LABEL_38;
          v17 = (char)this;
          v16 = -45;
LABEL_18:
          v8 = v11;
          goto LABEL_4;
        }
        ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((__int64 *)this + 17, &v19);
        TrackedEndpoint = v19;
      }
      v12 = *(_QWORD *)a2;
      v18 = 0.0;
      v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, float *))(v12 + 88))(a2, &v18);
      v7 = v11;
      if ( v11 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
          goto LABEL_38;
        v17 = (char)this;
        v16 = -40;
        goto LABEL_18;
      }
      v11 = CTrackedEndpoint::AddStream(TrackedEndpoint, a2, v18);
      v7 = v11;
      if ( v11 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
          goto LABEL_38;
        v17 = (char)this;
        v16 = -39;
        goto LABEL_18;
      }
      v11 = (*(__int64 (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)this + 56LL))(this);
      v7 = v11;
      if ( v11 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) == 0 )
          goto LABEL_38;
        v17 = (char)this;
        v16 = -37;
        goto LABEL_18;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v13 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
        WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, v14, v13);
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids);
    }
    v7 = 0;
    goto LABEL_38;
  }
  v7 = -2147418113;
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
  {
    v17 = (char)this;
    v8 = -2147418113;
    v16 = -62;
LABEL_4:
    McTemplateU0dsdp(v6, &EUVolumePolicy_Error_Propagation, v8, "CVolumeLimitTrackerImpl::StreamStarted", v16, v17);
  }
LABEL_38:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return v7;
}
