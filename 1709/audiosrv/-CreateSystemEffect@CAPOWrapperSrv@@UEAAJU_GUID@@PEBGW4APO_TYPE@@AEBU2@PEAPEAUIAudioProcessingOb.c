/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x1800DA4A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800DB678 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  __int128 v6; // xmm0
  int v10; // edi
  struct IUnknown **v11; // rsi
  struct IUnknown *v12; // rax
  __int64 v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v17; // [rsp+30h] [rbp-79h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-71h] BYREF
  struct IUnknown *v19; // [rsp+40h] [rbp-69h] BYREF
  __int128 v20; // [rsp+48h] [rbp-61h]
  __int128 v21; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  __int64 (__fastcall ****v24)(_QWORD, GUID *, __int64); // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  int *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]

  v6 = *a2;
  v19 = 0LL;
  v20 = v6;
  v21 = v6;
  EtwEventActivityIdControl(4LL, &v21);
  *a6 = 0LL;
  v18 = 0LL;
  v10 = CSystemEffectWrapper::Create(a5, 0LL, a3, a4);
  v17 = v10;
  if ( v10 >= 0 )
  {
    v11 = (struct IUnknown **)(a1 + 88);
    v17 = (**v18)(v18, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1 + 88);
    v10 = v17;
    if ( v17 >= 0 )
    {
      v12 = v19;
      if ( v19 != *v11 )
      {
        ATL::AtlComQIPtrAssign(&v19, *v11, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b);
        v12 = v19;
      }
      if ( v12 )
      {
        v13 = (a1 + 8) & -(__int64)(a1 != 0);
        *a6 = v13;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v10 = v17;
        if ( v17 >= 0 )
          goto LABEL_12;
      }
      else
      {
        if ( *v11 )
          ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 88), 0LL);
        v10 = -2147467262;
        v17 = -2147467262;
      }
    }
  }
  if ( (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperSrv::CreateSystemEffect");
    v26 = 0;
    v29 = 0;
    v24 = &v18;
    v27 = &v17;
    LODWORD(v18) = 63;
    v25 = 4;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v14, v15, 5u, &pData);
    v10 = v17;
  }
LABEL_12:
  EtwEventActivityIdControl(4LL, &v21);
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  return (unsigned int)v10;
}
