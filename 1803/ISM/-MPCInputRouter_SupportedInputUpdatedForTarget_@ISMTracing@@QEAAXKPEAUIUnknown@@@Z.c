/*
 * XREFs of ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x18008469C
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180086480 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180083C7C (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(
        ISMTracing *this,
        int a2,
        struct IUnknown *a3)
{
  __int64 v3; // rbx
  int PIDOfTarget; // eax
  int VIDOfTarget; // eax
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  struct IInputTarget *v8; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  int *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]
  int v19; // [rsp+B8h] [rbp+6Fh] BYREF

  v19 = a2;
  v8 = 0LL;
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct IInputTarget **))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      &v8);
  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v12 = 0;
    v10 = &v19;
    v11 = 4;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(v8);
    v15 = 0;
    v6 = PIDOfTarget;
    v13 = &v6;
    v14 = 4;
    VIDOfTarget = ISMTracing::GetVIDOfTarget(v8);
    v18 = 0;
    v7 = VIDOfTarget;
    v16 = &v7;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)v3, &unk_18010F945, 0LL, 0LL, 5u, &pData);
  }
}
