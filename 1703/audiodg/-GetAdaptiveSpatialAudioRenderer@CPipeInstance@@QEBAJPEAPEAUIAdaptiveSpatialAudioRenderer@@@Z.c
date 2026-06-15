/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140030BBC
 * Callers:
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x140041520 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x1400415E0 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x140041690 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140030948 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  struct IAudioProcessingObject *v3; // rbx
  unsigned int v4; // edi
  struct IAudioProcessingObject *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_24bdc606_d710_4d62_be35_be665fbc3e00, 0LL, 0LL, &v6);
  v3 = v6;
  if ( v6 )
    v4 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           a2);
  else
    v4 = -2147023728;
  if ( v3 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v3->lpVtbl->Release)(v3);
  return v4;
}
