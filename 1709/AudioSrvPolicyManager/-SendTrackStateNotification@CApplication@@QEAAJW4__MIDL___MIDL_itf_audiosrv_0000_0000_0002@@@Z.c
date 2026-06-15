/*
 * XREFs of ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000C9C8
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180010370 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 */

__int64 __fastcall CApplication::SendTrackStateNotification(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rcx
  __int64 v4; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v2 = -2147023728;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = *(_QWORD **)(a1 + 72);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v4 + 464) && (*(_DWORD *)(v4 + 500) & 0x1000) != 0 )
    {
      v2 = CProcess::SendPBMNotification(v4, 12LL);
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
