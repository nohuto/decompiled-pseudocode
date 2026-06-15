/*
 * XREFs of ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001520C
 * Callers:
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001AC34 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180021BB0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::RegisteredForTrackStateNotifications(__int64 a1, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 == -1 || a3 == 12 )
  {
    v6 = *(_DWORD *)(a1 + 508);
    if ( a2 )
    {
      v7 = v6 | (1 << a3);
    }
    else if ( a3 == -1 )
    {
      v7 = v6 & 0xFFFFEFFF;
    }
    else
    {
      v7 = v6 & ~(1 << a3);
    }
    *(_DWORD *)(a1 + 508) = v7;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
