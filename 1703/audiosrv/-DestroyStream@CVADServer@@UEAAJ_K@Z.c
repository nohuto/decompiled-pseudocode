/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180032590
 * Callers:
 *     AudioServerDestroyStream @ 0x1800323F0 (AudioServerDestroyStream.c)
 * Callees:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  CAudioSession *v7; // rcx
  struct CAudioStream *v8; // rdx
  __int64 (__fastcall *v9)(CAudioSession *, struct CAudioStream *, char, char); // rax
  __int64 (__fastcall *v10)(CAudioSession *, struct CAudioStream *, char, char); // r8
  CAudioStream *v11; // rcx
  void (*v12)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a2);
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = *((_DWORD *)this + 46) == 0 ? 0x88890001 : 0;
  if ( *((_DWORD *)this + 46) && !*((_QWORD *)this + 24) )
    v5 = -2004287487;
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)this + 24);
    if ( a2 != *(_QWORD *)(v6 + 48) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
          a2,
          *(_QWORD *)(v6 + 48));
      }
      v5 = -2147024809;
    }
    if ( v5 >= 0 )
    {
      v7 = (CAudioSession *)*((_QWORD *)this + 21);
      v10 = CAudioSession::RemoveStream;
      v8 = (struct CAudioStream *)*((_QWORD *)this + 24);
      v9 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, char, char))(*(_QWORD *)v7 + 272LL);
      LOBYTE(v10) = 1;
      if ( v9 == CAudioSession::RemoveStream )
        CAudioSession::RemoveStream(v7, v8, 1, 1);
      else
        ((void (__fastcall *)(CAudioSession *, struct CAudioStream *, __int64 (__fastcall *)(CAudioSession *, struct CAudioStream *, char, char)))v9)(
          v7,
          v8,
          v10);
      v11 = (CAudioStream *)*((_QWORD *)this + 24);
      v12 = *(void (**)(void))(*(_QWORD *)v11 + 72LL);
      if ( (char *)v12 == (char *)CAudioStream::ReleaseClientReference )
        CAudioStream::ReleaseClientReference(v11);
      else
        v12();
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  *((_DWORD *)this + 46) = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a2, v5);
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::DestroyStream", 0x823u, v5);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
