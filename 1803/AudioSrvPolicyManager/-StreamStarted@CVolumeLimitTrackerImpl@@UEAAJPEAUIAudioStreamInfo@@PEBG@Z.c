/*
 * XREFs of ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     WPP_SF_I @ 0x18002B574 (WPP_SF_I.c)
 *     ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x18002C09C (-FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z.c)
 *     ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x18002C9E8 (--0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z.c)
 *     ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x18002CBC8 (-Initialize@CTrackedEndpoint@@QEAAJPEBG@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x18002CEE4 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::StreamStarted(
        CVolumeLimitTrackerImpl *this,
        struct IAudioStreamInfo *a2,
        const unsigned __int16 *a3)
{
  signed int v6; // ebx
  int v7; // esi
  CTrackedEndpoint *TrackedEndpoint; // rsi
  CTrackedEndpoint *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  CTrackedEndpoint *v14; // [rsp+88h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = *((_DWORD *)this + 16) != 0 ? 0x8000FFFF : 0;
  if ( !a2 && !*((_DWORD *)this + 16) )
    v6 = -2147467261;
  v7 = 0;
  v13 = 0LL;
  if ( a3 )
  {
    if ( (*(int (__fastcall **)(struct IEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)g_EndpointChCache + 24LL))(
           g_EndpointChCache,
           a3,
           0LL,
           &v13) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
      if ( v7 )
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) == 0;
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v7 )
  {
    if ( v6 >= 0 )
    {
      TrackedEndpoint = CVolumeLimitTrackerImpl::FindTrackedEndpoint(this, a3);
      if ( !TrackedEndpoint )
      {
        v9 = (CTrackedEndpoint *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v9 )
          v9 = CTrackedEndpoint::CTrackedEndpoint(v9, this, *((float *)this + 32));
        v14 = v9;
        if ( !v9 )
          v6 = -2147024882;
        if ( v6 >= 0 )
          v6 = CTrackedEndpoint::Initialize(v9, a3);
        ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((__int64 *)this + 17, &v14);
        TrackedEndpoint = v14;
      }
      LODWORD(v13) = 0;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 88LL))(a2, &v13);
        if ( v6 >= 0 )
        {
          v6 = CTrackedEndpoint::AddStream(TrackedEndpoint, a2, *(float *)&v13);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)this + 48LL))(this);
            if ( v6 >= 0
              && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
            {
              v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
              WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, v11, v10);
            }
          }
        }
      }
    }
  }
  else if ( v6 >= 0
         && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return (unsigned int)v6;
}
