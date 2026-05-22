/*
 * XREFs of ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4
 * Callers:
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948 (-SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 *     std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Do_call @ 0x180099450 (std--_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40 (--0-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerCollection::GetCacheEntry(__int64 a1, unsigned int a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 2816);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 2816));
  v7 = *(__int64 **)(a1 + 2856);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *((_DWORD *)v9 + 8) >= a2 )
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( v8 == v7 || a2 < *((_DWORD *)v8 + 8) )
    v8 = *(__int64 **)(a1 + 2856);
  if ( v8 == v7 )
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x563,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    v11 = std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
            v16,
            v8 + 5);
    v12 = v11[1];
    v11[1] = a3[1];
    a3[1] = v12;
    v13 = *v11;
    *v11 = *a3;
    v14 = (volatile signed __int32 *)v16[1];
    *a3 = v13;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v10 = 0;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
