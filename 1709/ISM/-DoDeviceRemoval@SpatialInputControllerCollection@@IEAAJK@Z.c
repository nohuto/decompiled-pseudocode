/*
 * XREFs of ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8
 * Callers:
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180093690 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180067B88 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     _lambda_a8e9d8c2878d8636ab767a000decf001_::operator() @ 0x180093A88 (_lambda_a8e9d8c2878d8636ab767a000decf001_--operator().c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x1800958BC (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 *     ?DeleteWorkItemsForController@SpatialInputControllerCollection@@AEAAXPEBVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x1800961D0 (-DeleteWorkItemsForController@SpatialInputControllerCollection@@AEAAXPEBVSpatialInteractionContr.c)
 *     ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC (-HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInputControllerCollection::DoDeviceRemoval(
        SpatialInputControllerCollection *this,
        __int64 a2)
{
  int CacheEntry; // eax
  unsigned int v4; // edi
  bool HasDynamicNode; // bl
  char v6; // r12
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // r9
  int v14; // eax
  __int64 *v15; // rax
  __int64 *i; // rax
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  SpatialInteractionDevices::SpatialInteractionController *v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A8h]
  _QWORD v22[4]; // [rsp+70h] [rbp-98h] BYREF
  char v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  char *v25; // [rsp+A0h] [rbp-68h]
  _QWORD v26[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v27[8]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v28[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v29[2848]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+CC0h] [rbp+BB8h]
  unsigned int v31; // [rsp+CD0h] [rbp+BC8h] BYREF

  v31 = a2;
  v24 = -2LL;
  *(_OWORD *)v20 = 0LL;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry(this, a2, v20);
  v4 = CacheEntry;
  if ( CacheEntry >= 0 )
  {
    HasDynamicNode = SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(v20[0]);
    if ( *((_BYTE *)v20[0] + 1088) )
    {
      v6 = 0;
    }
    else if ( *((_BYTE *)v20[0] + 800)
           || (v6 = 0, SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(v20[0])) )
    {
      v6 = 1;
    }
    v7 = *((_DWORD *)v20[0] + 87);
    *((_BYTE *)v20[0] + 1088) = 1;
    *(_QWORD *)&v21 = &v31;
    *((_QWORD *)&v21 + 1) = v20;
    v22[0] = this;
    *(_OWORD *)&v22[1] = v21;
    v22[3] = this;
    v23 = 1;
    v26[0] = off_1800D7DA8;
    v26[1] = this;
    v26[7] = v26;
    v8 = SpatialInputControllerCollection::QueueWorkItem(this, v20, v26, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x473,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v8);
    memset(v29, 0, sizeof(v29));
    v9 = MPCInputInfoHelper::PopulateAugmentedInput(
           5LL,
           v31,
           v7,
           *((_BYTE *)v20[0] + 769),
           (__int64)v20[0] + 476,
           (__int64)v20[0] + 356,
           (__int64)v29);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v9 = SpatialInputControllerCollection::QueueInputReport(this, (struct InputInfo *)v29);
      v4 = v9;
      if ( v9 >= 0 )
      {
        SpatialInputControllerCollection::DeleteWorkItemsForController(this, v20[0]);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
        v25 = (char *)this + 2816;
        if ( HasDynamicNode )
        {
          v11 = (__int64 *)*((_QWORD *)this + 357);
          v12 = (__int64 *)*v11;
          while ( v12 != v11 )
          {
            if ( !SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode((SpatialInteractionDevices::SpatialInteractionController *)v12[5]) )
            {
              v27[0] = off_1800D7D78;
              v27[1] = this;
              v27[7] = v27;
              LOBYTE(v13) = 1;
              v14 = SpatialInputControllerCollection::QueueWorkItem(this, v12 + 5, v27, v13);
              if ( v14 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x49B,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
                  (const char *)(unsigned int)v14);
            }
            if ( !*((_BYTE *)v12 + 25) )
            {
              v15 = (__int64 *)v12[2];
              if ( *((_BYTE *)v15 + 25) )
              {
                for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)i[2]; i = (__int64 *)i[1] )
                  v12 = i;
                v12 = i;
              }
              else
              {
                do
                {
                  v12 = v15;
                  v15 = (__int64 *)*v15;
                }
                while ( !*((_BYTE *)v15 + 25) );
              }
            }
          }
        }
        if ( v6 )
        {
          v28[0] = off_1800D7CB8;
          v28[1] = this;
          v28[7] = v28;
          v17 = SpatialInputControllerCollection::QueueWorkItem(this, v20, v28, 0LL);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4A9,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
              (const char *)(unsigned int)v17);
        }
        if ( this != (SpatialInputControllerCollection *)-2816LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
        v4 = 0;
        goto LABEL_36;
      }
      v10 = 1151LL;
    }
    else
    {
      v10 = 1149LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_36:
    v23 = 0;
    lambda_a8e9d8c2878d8636ab767a000decf001_::operator()(&v22[1]);
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x445,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)CacheEntry);
LABEL_37:
  v18 = (volatile signed __int32 *)v20[1];
  if ( v20[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return v4;
}
