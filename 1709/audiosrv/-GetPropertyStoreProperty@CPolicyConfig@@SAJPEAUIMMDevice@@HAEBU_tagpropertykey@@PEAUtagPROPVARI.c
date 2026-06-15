/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800088A8
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x1800087B0 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000882C (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180008A84 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180084750 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x180084800 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IUnknown *a1,
        __int64 a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v7; // ebx
  struct IUnknown *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct IUnknown *v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v11[1] = (struct IUnknown *)-2LL;
  v10 = 0LL;
  if ( (_DWORD)a2 )
  {
    v9 = 0LL;
    v11[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v11, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da), (v9 = v11[0]) == 0LL) )
    {
      v7 = -2147467262;
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      goto LABEL_16;
    }
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))v11[0]->lpVtbl[1].Release)(v11[0], 0LL, &v10);
    if ( v11[0] )
      ((void (__fastcall *)(struct IUnknown *))v11[0]->lpVtbl->Release)(v11[0]);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64 *, struct IUnknown *))a1->lpVtbl[1].AddRef)(
           a1,
           a2,
           &v10,
           a1);
  }
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
           v10,
           a3,
           a4);
    goto LABEL_5;
  }
LABEL_16:
  AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xE34u, v7);
  if ( v7 == -2147024894 )
  {
    *(_QWORD *)&a4->vt = 0LL;
    a4->hVal.QuadPart = 0LL;
    a4->bstrblobVal.pData = 0LL;
    v7 = 0;
  }
LABEL_5:
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x1214u, v7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v7;
}
