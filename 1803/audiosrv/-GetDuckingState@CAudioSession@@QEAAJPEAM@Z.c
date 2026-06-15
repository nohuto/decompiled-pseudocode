/*
 * XREFs of ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800A9B70
 * Callers:
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800AE930 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetDuckingState(CAudioSession *this, float *a2)
{
  float v4; // xmm6_4
  __int64 v5; // rcx
  __int64 v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+30h] [rbp-28h]

  v4 = FLOAT_1_0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 432);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) )
    {
      v6 = *((_QWORD *)this + 59);
      if ( *(float *)(v6 + 48) < 1.0 )
        v4 = *(float *)(v6 + 48);
    }
  }
  *a2 = v4;
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
