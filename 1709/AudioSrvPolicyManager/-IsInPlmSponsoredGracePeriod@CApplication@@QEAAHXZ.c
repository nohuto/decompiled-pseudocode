/*
 * XREFs of ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x180016BB8
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x1800149E8 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::IsInPlmSponsoredGracePeriod(CApplication *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rdx
  int v4; // esi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 112) )
    return 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  v4 = 0;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v5 + 464) && *(_QWORD *)(v5 + 408) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 || *((_DWORD *)this + 98) )
    return 1;
  return v1;
}
