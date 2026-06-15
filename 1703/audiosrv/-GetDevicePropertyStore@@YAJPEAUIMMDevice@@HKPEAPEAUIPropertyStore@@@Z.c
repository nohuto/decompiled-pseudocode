/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180045D68
 * Callers:
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180045C40 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18009C6DC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18009EDC0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v6; // ebx
  struct IUnknown *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = (struct IUnknown *)-2LL;
  if ( a2 )
  {
    v8[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v8, a1, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990), !v8[0]) )
    {
      v6 = -2147467262;
      goto LABEL_10;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v8[0]->lpVtbl[1].Release)(
           v8[0],
           a3,
           a4);
    if ( v8[0] )
      ((void (__fastcall *)(struct IUnknown *))v8[0]->lpVtbl->Release)(v8[0]);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
  }
  if ( v6 < 0 )
LABEL_10:
    AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xE33u, v6);
  return (unsigned int)v6;
}
