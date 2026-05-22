/*
 * XREFs of ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0
 * Callers:
 *     std::_Func_impl__lambda_7abacd01c797ad658b6751f75d627ba4__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800993F0 (std--_Func_impl__lambda_7abacd01c797ad658b6751f75d627ba4__std--allocator_int__void__ea_1800993F0.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?StartActivity@FinalizeControllerInitialization@RawInputProvidersTracing@@QEAAXK@Z @ 0x18008DD4C (-StartActivity@FinalizeControllerInitialization@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXKQEBGGGG@Z @ 0x18008F660 (-TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXKQEBGGGG@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FC14 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ @ 0x180091DAC (-EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096B10 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180097258 (-Stop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInputControllerCollection::FinalizeControllerInitialization(
        SpatialInputControllerCollection *this,
        SpatialInteractionDevices::SpatialInteractionController **a2)
{
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  int updated; // eax
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // si
  __int16 v11; // r15
  unsigned __int16 *StringRawBuffer; // r12
  int v13; // r13d
  _DWORD *v14; // rcx
  RawInputProvidersTracing *v15; // rcx
  void *v16; // rbx
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int *v19; // [rsp+40h] [rbp-C8h]
  void ***v20; // [rsp+48h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h]
  void **v23; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+88h] [rbp-80h]
  int *v26; // [rsp+90h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h] BYREF
  char v29; // [rsp+A4h] [rbp-64h]
  int v30; // [rsp+C8h] [rbp-40h] BYREF
  const char *v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  char v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  _BYTE v35[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v36; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+188h] [rbp+80h]
  __int64 v38; // [rsp+190h] [rbp+88h]
  void *Block; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v22 = -2LL;
  v18 = 0;
  v4 = *((_DWORD *)*a2 + 86);
  v24[0] = 0LL;
  v24[1] = &v23;
  v24[2] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "FinalizeControllerInitialization";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  Block = 0LL;
  v23 = &RawInputProvidersTracing::FinalizeControllerInitialization::`vftable';
  RawInputProvidersTracing::FinalizeControllerInitialization::StartActivity(
    (RawInputProvidersTracing::FinalizeControllerInitialization *)&v23,
    v4);
  v19 = &v18;
  v20 = &v23;
  LOBYTE(v21) = 1;
  v5 = SpatialInteractionDevices::SpatialInteractionController::EndPrepareParsing(*a2);
  v6 = v5;
  v18 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_BYTE *)*a2 + 800) )
    {
      v7 = SpatialInputControllerCollection::EnableHeadEventHandler(this);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
          (const char *)(unsigned int)v7);
    }
    updated = SpatialInputControllerCollection::TryUpdateControllerNodeReference(this);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)updated);
    v9 = *((_WORD *)*a2 + 198);
    v10 = *((_WORD *)*a2 + 197);
    v11 = *((_WORD *)*a2 + 196);
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(*((HSTRING *)*a2 + 99), 0LL);
    v13 = *((_DWORD *)*a2 + 86);
    v14 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v14 && *v14 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::TelemetrySpatialInputController_Added_(v15, v13, StringRawBuffer, v11, v10, v9);
    }
    *((_BYTE *)*a2 + 1081) = 1;
    *((_BYTE *)*a2 + 1064) = 1;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3FC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v23, v18);
  v23 = &RawInputProvidersTracing::FinalizeControllerInitialization::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v23);
  if ( Block )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
    {
      v16 = Block;
      if ( Block )
      {
        wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
        operator delete(v16);
      }
    }
    Block = 0LL;
  }
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)&v28);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v24);
  return v6;
}
