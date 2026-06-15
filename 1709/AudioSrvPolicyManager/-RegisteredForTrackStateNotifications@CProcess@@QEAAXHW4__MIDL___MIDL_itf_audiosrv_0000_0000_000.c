/*
 * XREFs of ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000F7BC
 * Callers:
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800129E8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014770 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180018670 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::RegisteredForTrackStateNotifications(__int64 a1, int a2, int a3)
{
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 != -1 && a3 != 12 )
    goto LABEL_9;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a1 + 500) | (1 << a3);
  }
  else
  {
    if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 500) &= ~0x1000u;
      goto LABEL_9;
    }
    v6 = *(_DWORD *)(a1 + 500) & ~(1 << a3);
  }
  *(_DWORD *)(a1 + 500) = v6;
LABEL_9:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
