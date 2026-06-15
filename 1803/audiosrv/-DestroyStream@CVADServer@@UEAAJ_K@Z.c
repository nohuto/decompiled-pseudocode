/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180048240
 * Callers:
 *     AudioServerDestroyStream @ 0x180043620 (AudioServerDestroyStream.c)
 * Callees:
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18002EFE0 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x18009817C (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800993F8 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::DestroyStream(LARGE_INTEGER *this, __int64 a2)
{
  std::_Ref_count_base *QuadPart; // rcx
  struct CAudioStream *v5; // rdx
  CAudioSession *v6; // rcx
  __int64 (__fastcall *v7)(CAudioSession *, struct CAudioStream *, char); // rax
  __int64 (__fastcall *v8)(CAudioSession *, struct CAudioStream *, char); // r8
  CAudioStream *v9; // rcx
  void (*v10)(void); // rax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  double TimeSec; // xmm0_8
  AudioJournal *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v18; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CEndpointCharacteristics *v20; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this[28];
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  this[53].QuadPart = 0LL;
  QuadPart = (std::_Ref_count_base *)this[54].QuadPart;
  this[54].QuadPart = 0LL;
  if ( QuadPart )
    std::_Ref_count_base::_Decref(QuadPart);
  if ( !this[23].LowPart )
  {
    v11 = -2004287487;
    v13 = 2150LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11,
      v16);
    goto LABEL_15;
  }
  v5 = (struct CAudioStream *)this[24].QuadPart;
  if ( !v5 )
  {
    v11 = -2004287487;
    v13 = 2151LL;
    goto LABEL_22;
  }
  if ( a2 != *((_QWORD *)v5 + 7) )
  {
    v11 = -2147024809;
    v13 = 2152LL;
    goto LABEL_22;
  }
  if ( BYTE4(this[23].QuadPart) )
  {
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)this[21].QuadPart + 264LL))(this[21]);
    BYTE4(this[23].QuadPart) = 0;
    QueryPerformanceCounter(this + 60);
    v20 = 0LL;
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *, LARGE_INTEGER, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      this[27],
      0LL,
      &v20);
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&this[59]);
    AudioJournal::OnStopStream(v15, 0, v20, TimeSec);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    v5 = (struct CAudioStream *)this[24].QuadPart;
  }
  v6 = (CAudioSession *)this[21].QuadPart;
  v8 = CAudioSession::RemoveStream;
  v7 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, char))(*(_QWORD *)v6 + 272LL);
  LOBYTE(v8) = 1;
  if ( v7 == CAudioSession::RemoveStream )
    CAudioSession::RemoveStream(v6, v5, 1);
  else
    v7(v6, v5, (char)v8);
  v9 = (CAudioStream *)this[24].QuadPart;
  v10 = *(void (**)(void))(*(_QWORD *)v9 + 64LL);
  if ( (char *)v10 == (char *)CAudioStream::ReleaseClientReference )
    CAudioStream::ReleaseClientReference(v9);
  else
    v10();
  this[24].QuadPart = 0LL;
  this[23].LowPart = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, a2);
  }
  v11 = 0;
LABEL_15:
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
