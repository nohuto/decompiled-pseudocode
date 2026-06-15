/*
 * XREFs of ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x140041690
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140030BBC (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialUtilization(
        CAudioDeviceGraph *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  CPipeInstance *v8; // rcx
  unsigned int v9; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-20h]
  struct IAdaptiveSpatialAudioRenderer *v13; // [rsp+60h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (CPipeInstance *)*((_QWORD *)this + 16);
  v13 = 0LL;
  v9 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v8, &v13) >= 0 )
    v9 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)v13 + 72LL))(
           v13,
           a2,
           a3,
           a4);
  if ( v13 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
