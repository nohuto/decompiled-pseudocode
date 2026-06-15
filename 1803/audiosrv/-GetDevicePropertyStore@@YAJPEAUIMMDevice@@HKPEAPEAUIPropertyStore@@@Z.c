/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180003274
 * Callers:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800031F0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BECC0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v7; // ebx
  struct IUnknown *v9; // rcx
  struct IUnknown *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[1] = (struct IUnknown *)-2LL;
  if ( a2 )
  {
    v9 = 0LL;
    v10[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v10, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da), (v9 = v10[0]) == 0LL) )
    {
      v7 = -2147467262;
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      goto LABEL_11;
    }
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v10[0]->lpVtbl[1].Release)(
           v10[0],
           a3,
           a4);
    if ( v10[0] )
      ((void (__fastcall *)(struct IUnknown *))v10[0]->lpVtbl->Release)(v10[0]);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
  }
  if ( v7 < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xE24u, v7);
  return (unsigned int)v7;
}
