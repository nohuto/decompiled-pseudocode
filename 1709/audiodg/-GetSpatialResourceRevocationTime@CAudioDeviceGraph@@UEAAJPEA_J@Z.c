/*
 * XREFs of ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x140041F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14003032C (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourceRevocationTime(CAudioDeviceGraph *this, __int64 *a2)
{
  CPipeInstance *v4; // rcx
  unsigned int v5; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct IAdaptiveSpatialAudioRenderer *v9; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (CPipeInstance *)*((_QWORD *)this + 16);
  v9 = 0LL;
  v5 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v4, &v9) >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, a2);
  if ( v9 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
