/*
 * XREFs of ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180092EE0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18008D2E0 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18008D47C (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FC14 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180092060 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 *     ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x180094304 (-AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionCo.c)
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096B10 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInputControllerCollection::DoDeviceAttach(
        SpatialInputControllerCollection *this,
        unsigned int a2,
        struct DeviceInfo *a3)
{
  int DeviceId; // eax
  unsigned int *v7; // r9
  unsigned int v8; // edi
  __int64 v9; // rdx
  struct SpatialInteractionDevices::SpatialInteractionController *v10; // rsi
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // r10
  __int16 v17; // ax
  __int64 v18; // r9
  struct SpatialInteractionDevices::SpatialInteractionController *v19; // rbx
  void *v20; // rbx
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  struct SpatialInteractionDevices::SpatialInteractionController *v23[2]; // [rsp+30h] [rbp-D8h] BYREF
  void ***v24; // [rsp+40h] [rbp-C8h]
  struct RIMDevice *v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A8h]
  void ***v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  _QWORD v29[9]; // [rsp+80h] [rbp-88h] BYREF
  void **v30; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v31[3]; // [rsp+D0h] [rbp-38h] BYREF
  int v32; // [rsp+E8h] [rbp-20h]
  int *v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  int v35; // [rsp+100h] [rbp-8h] BYREF
  char v36; // [rsp+104h] [rbp-4h]
  int v37; // [rsp+128h] [rbp+20h] BYREF
  const char *v38; // [rsp+130h] [rbp+28h]
  __int64 v39; // [rsp+138h] [rbp+30h]
  char v40; // [rsp+140h] [rbp+38h]
  __int64 v41; // [rsp+148h] [rbp+40h]
  _BYTE v42[144]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v43; // [rsp+1E0h] [rbp+D8h]
  __int64 v44; // [rsp+1E8h] [rbp+E0h]
  __int64 v45; // [rsp+1F0h] [rbp+E8h]
  void *Block; // [rsp+1F8h] [rbp+F0h]
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v25[1] = (struct RIMDevice *)-2LL;
  v22 = 0LL;
  v31[0] = 0LL;
  v31[1] = &v30;
  v31[2] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "DeviceAttached";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v42, 0, sizeof(v42));
  v45 = 0LL;
  Block = 0LL;
  v30 = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity((RawInputProvidersTracing::DeviceAttached *)&v30, a2);
  v23[0] = (struct SpatialInteractionDevices::SpatialInteractionController *)&v22;
  v23[1] = (struct SpatialInteractionDevices::SpatialInteractionController *)((char *)&v22 + 4);
  v24 = &v30;
  v26 = *(_OWORD *)v23;
  v27 = &v30;
  LOBYTE(v28) = 1;
  *(_OWORD *)v23 = 0LL;
  DeviceId = SpatialInputControllerCollection::AddDeviceToCache(this, a2, v23);
  v8 = DeviceId;
  LODWORD(v22) = DeviceId;
  if ( DeviceId >= 0 )
  {
    v10 = v23[0];
    HIDWORD(v22) = *((_DWORD *)v23[0] + 87);
    *((_DWORD *)a3 + 15) = HIDWORD(v22);
    v25[0] = 0LL;
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, v25, v7);
    v8 = DeviceId;
    LODWORD(v22) = DeviceId;
    if ( DeviceId >= 0 )
    {
      DeviceId = SpatialInputControllerCollection::PrepareControllerParsing(
                   this,
                   v10,
                   (struct _HIDP_PREPARSED_DATA **)v25[0]);
      v8 = DeviceId;
      LODWORD(v22) = DeviceId;
      if ( DeviceId >= 0 )
      {
        *((_WORD *)a3 + 32) = *((_WORD *)v10 + 196);
        *((_WORD *)a3 + 33) = *((_WORD *)v10 + 197);
        *((_WORD *)a3 + 34) = *((_WORD *)v10 + 198);
        *((_WORD *)a3 + 448) = -256;
        *((_BYTE *)a3 + 898) = -1;
        *((_BYTE *)a3 + 956) = *((_BYTE *)v10 + 800);
        StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v10 + 99), 0LL);
        v12 = -1LL;
        do
          ++v12;
        while ( StringRawBuffer[v12] );
        v13 = (char *)a3 + 70;
        if ( v12 <= 0x7FFFFFFE )
        {
          v15 = 200LL;
          v14 = 0LL;
          v16 = (char *)StringRawBuffer - v13;
          do
          {
            if ( !(v12 + v15 - 200) )
              break;
            v17 = *(_WORD *)&v13[v16];
            if ( !v17 )
              break;
            *(_WORD *)v13 = v17;
            v13 += 2;
            --v15;
          }
          while ( v15 );
          if ( !v15 )
          {
            v13 -= 2;
            v14 = 2147942522LL;
          }
        }
        else
        {
          v14 = 2147942487LL;
        }
        *(_WORD *)v13 = 0;
        if ( (int)v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3E2,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            (const char *)v14);
        memset((char *)a3 + 472, 0, 0x1A8uLL);
        v29[0] = off_1800D7D48;
        v29[1] = this;
        v29[7] = v29;
        LOBYTE(v18) = 1;
        DeviceId = SpatialInputControllerCollection::QueueWorkItem(this, v23, v29, v18, v22);
        v8 = DeviceId;
        if ( DeviceId >= 0 )
        {
          v8 = 0;
          goto LABEL_23;
        }
        v9 = 1003LL;
      }
      else
      {
        v9 = 983LL;
      }
    }
    else
    {
      v9 = 981LL;
    }
  }
  else
  {
    v9 = 974LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)DeviceId);
LABEL_23:
  if ( v23[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v19 = v23[1];
      (**(void (__fastcall ***)(struct SpatialInteractionDevices::SpatialInteractionController *))v23[1])(v23[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(struct SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v23[1]
                                                                                                 + 8LL))(v23[1]);
    }
  }
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)&v30, v22, SHIDWORD(v22));
  v30 = &RawInputProvidersTracing::DeviceAttached::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v30);
  if ( Block )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
    {
      v20 = Block;
      if ( Block )
      {
        wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
        operator delete(v20);
      }
    }
    Block = 0LL;
  }
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)&v35);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v31);
  return v8;
}
