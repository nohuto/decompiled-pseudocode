/*
 * XREFs of ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1800D7658
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VHolographicPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DF840 (-CreateInstance@-$SimpleClassFactory@VHolographicPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800DE390 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall HolographicPositioner::RuntimeClassInitialize(HolographicPositioner *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  GUID v5; // [rsp+20h] [rbp-79h] BYREF
  __int64 v6; // [rsp+30h] [rbp-69h]
  __int64 v7; // [rsp+38h] [rbp-61h]
  GUID v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+50h] [rbp-49h]
  __int64 v10; // [rsp+58h] [rbp-41h]
  GUID v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  GUID v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  GUID v17; // [rsp+A0h] [rbp+7h]
  __int64 v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  GUID v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+D0h] [rbp+37h]
  __int64 v22; // [rsp+D8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = 0LL;
  v5 = GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa;
  v7 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v8 = GUID_334a8e75_f9cf_4161_9035_68246f9ea21d;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v11 = GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f;
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v14 = GUID_538317c5_5bad_4847_962d_42da294f5e0a;
  v21 = 0LL;
  v22 = 0LL;
  v17 = GUID_5090de35_ed23_43be_9714_586c5041026a;
  v20 = GUID_0249c870_f630_4a75_8d01_b316c814157a;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (HolographicPositioner *)((char *)this + 40),
         (__int64)&v5,
         6uLL);
  if ( v2 < 0 )
  {
    v3 = 325LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher>((char *)this + 416);
  if ( v2 < 0 )
  {
    v3 = 327LL;
    goto LABEL_3;
  }
  return 0LL;
}
