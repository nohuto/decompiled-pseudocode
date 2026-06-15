/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180084514
 * Callers:
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180088B40 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  struct IUnknown *v7; // rcx
  int v8; // ebx
  struct IUnknown *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[1] = (struct IUnknown *)-2LL;
  if ( a2 )
  {
    v7 = 0LL;
    v10[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v10, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da), (v7 = v10[0]) == 0LL) )
    {
      v8 = -2147467262;
      if ( v7 )
        ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
      goto LABEL_10;
    }
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v10[0]->lpVtbl[1].Release)(
           v10[0],
           a3,
           a4);
    if ( v10[0] )
      ((void (__fastcall *)(struct IUnknown *))v10[0]->lpVtbl->Release)(v10[0]);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
  }
  if ( v8 < 0 )
LABEL_10:
    AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 3636, v8);
  return (unsigned int)v8;
}
