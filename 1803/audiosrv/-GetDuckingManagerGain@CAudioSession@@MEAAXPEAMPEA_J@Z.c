/*
 * XREFs of ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x180047B00
 * Callers:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::GetDuckingManagerGain(CAudioSession *this, float *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 432);
  v9 = 0;
  *a2 = 1.0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 59);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) )
    {
      *a2 = 0.0;
    }
    else
    {
      v7 = *((_QWORD *)this + 59);
      *a2 = *(float *)(v7 + 48);
      *a3 = *(_QWORD *)(v7 + 40);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
