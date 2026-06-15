/*
 * XREFs of ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BECC0
 * Callers:
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x1800BED60 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800BEEF0 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180003274 (-GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetPropertyStoreProperty(
        struct IUnknown *a1,
        int a2,
        const struct _tagpropertykey *a3,
        const struct tagPROPVARIANT *a4)
{
  int DevicePropertyStore; // ebx
  struct IPropertyStore *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = (struct IPropertyStore *)-2LL;
  v8[0] = 0LL;
  DevicePropertyStore = GetDevicePropertyStore(a1, a2, 1u, v8);
  if ( DevicePropertyStore < 0
    || (DevicePropertyStore = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, const struct tagPROPVARIANT *))v8[0]->lpVtbl->SetValue)(
                                v8[0],
                                a3,
                                a4),
        DevicePropertyStore < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyStoreProperty", 4648, DevicePropertyStore);
  }
  if ( v8[0] )
    ((void (__fastcall *)(struct IPropertyStore *))v8[0]->lpVtbl->Release)(v8[0]);
  return (unsigned int)DevicePropertyStore;
}
