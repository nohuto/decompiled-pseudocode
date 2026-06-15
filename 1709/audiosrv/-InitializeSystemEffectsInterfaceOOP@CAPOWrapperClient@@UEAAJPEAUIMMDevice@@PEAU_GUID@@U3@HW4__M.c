/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001F220
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EE00 (-QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        __int64 (__fastcall ***this)(CAPOWrapperClient *this, const struct _GUID *a2, void **a3),
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  void *v7; // rbx
  int v11; // edi
  __int64 (__fastcall **v12)(CAPOWrapperClient *, const struct _GUID *, void **); // r10
  __int64 (__fastcall *v13)(CAPOWrapperClient *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v15)(CAPOWrapperClient *, const struct _GUID *, void **); // rax
  int Interface; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+54h] [rbp-6Dh] BYREF
  LPVOID pv; // [rsp+58h] [rbp-69h] BYREF
  __int128 v22; // [rsp+60h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  int *v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  int *v27; // [rsp+B0h] [rbp-11h]
  __int64 v28; // [rsp+B8h] [rbp-9h]

  v7 = 0LL;
  v19 = 0;
  pv = 0LL;
  if ( a2 && this[6] )
  {
    v19 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    v12 = this[6];
    v13 = *v12;
    v22 = (__int128)*a4;
    v19 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(CAPOWrapperClient *, const struct _GUID *, void **), LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *))v13
           + 4))(
            v12,
            pv,
            a3,
            &v22,
            a5,
            a6,
            a7 != 0LL,
            (char *)this + 64);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    if ( a7 )
    {
      v15 = **this;
      if ( v15 == CAPOWrapperClient::QueryInterface )
        Interface = CAPOWrapperClient::QueryInterface(
                      (CAPOWrapperClient *)this,
                      &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                      (void **)a7);
      else
        Interface = v15((CAPOWrapperClient *)this, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, (void **)a7);
      v19 = Interface;
      v11 = Interface;
    }
    if ( v11 < 0 )
    {
LABEL_13:
      if ( (unsigned int)dword_18014A3F0 > 2 )
      {
        TlgCreateSz(&pDesc, "CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP");
        v20 = 117;
        v25 = &v20;
        v27 = &v19;
        v26 = 4LL;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v17, v18, 5u, &pData);
        v11 = v19;
      }
    }
    v7 = pv;
  }
  else
  {
    v11 = -2147024809;
  }
  CoTaskMemFree(v7);
  return (unsigned int)v11;
}
