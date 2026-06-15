/*
 * XREFs of ??1CAudioSessionManager@@UEAA@XZ @ 0x1800B1228
 * Callers:
 *     ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x1800B15AC (--_GCAudioSessionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800053B8 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800984C8 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B32C0 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800B3360 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  HANDLE ProcessHeap; // rax

  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 38) - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  while ( *((_QWORD *)this + 31) )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      (char *)this + 240,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>((void **)this + 34);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)this + 30);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v2 = (__int64 *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 23);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 22);
    }
    v5 = (__int64)(*((_QWORD *)this + 24) - (_QWORD)v2) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_16:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v2);
        *((_QWORD *)this + 22) = 0LL;
        *((_QWORD *)this + 23) = 0LL;
        *((_QWORD *)this + 24) = 0LL;
        goto LABEL_17;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v6 = *(v2 - 1);
        if ( v6 < (unsigned __int64)v2 && (unsigned __int64)v2 - v6 - 8 <= 0x1F )
        {
          v2 = (__int64 *)*(v2 - 1);
          goto LABEL_16;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x1800B13ABLL);
  }
LABEL_17:
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
