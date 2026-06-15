/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800031F0
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x1800030F8 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180003174 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800BC214 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800BC2D0 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800BC380 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180003274 (-GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int DevicePropertyStore; // eax
  int v7; // ebx
  struct IPropertyStore *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = (struct IPropertyStore *)-2LL;
  v9[0] = 0LL;
  DevicePropertyStore = GetDevicePropertyStore(a1, a2, 0, v9);
  v7 = DevicePropertyStore;
  if ( DevicePropertyStore < 0 )
  {
    if ( DevicePropertyStore == -2147024894 )
    {
      *(_QWORD *)&a4->vt = 0LL;
      a4->hVal.QuadPart = 0LL;
      a4->bstrblobVal.pData = 0LL;
      v7 = 0;
    }
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v9[0]->lpVtbl->GetValue)(
           v9[0],
           a3,
           a4);
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x1205u, v7);
  if ( v9[0] )
    ((void (__fastcall *)(struct IPropertyStore *))v9[0]->lpVtbl->Release)(v9[0]);
  return (unsigned int)v7;
}
