/*
 * XREFs of ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180045C40
 * Callers:
 *     PolicyConfigSetPropertyValue @ 0x180045C10 (PolicyConfigSetPropertyValue.c)
 * Callees:
 *     ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180045D68 (-GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        const struct tagPROPVARIANT *a5)
{
  int DevicePropertyStore; // ebx
  struct IMMDevice *v9; // [rsp+20h] [rbp-18h] BYREF
  struct IPropertyStore *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    DevicePropertyStore = -2147467261;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyValue", 0xFD7u, DevicePropertyStore);
    goto LABEL_9;
  }
  DevicePropertyStore = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                          *(_QWORD *)&g_DeviceEnumerator,
                          a2,
                          &v9);
  if ( DevicePropertyStore < 0 )
    goto LABEL_13;
  v10 = 0LL;
  DevicePropertyStore = GetDevicePropertyStore(v9, a3, 1u, &v10);
  if ( DevicePropertyStore < 0
    || (DevicePropertyStore = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, const struct tagPROPVARIANT *))v10->lpVtbl->SetValue)(
                                v10,
                                a4,
                                a5),
        DevicePropertyStore < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyStoreProperty", 0x1223u, DevicePropertyStore);
  }
  if ( v10 )
    ((void (__fastcall *)(struct IPropertyStore *))v10->lpVtbl->Release)(v10);
  if ( DevicePropertyStore < 0 )
    goto LABEL_13;
LABEL_9:
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)DevicePropertyStore;
}
