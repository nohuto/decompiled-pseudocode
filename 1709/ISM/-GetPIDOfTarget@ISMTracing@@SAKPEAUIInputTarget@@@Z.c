/*
 * XREFs of ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004CB1C
 * Callers:
 *     ?MPCSixDofProcessorSourceLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x18004CBD4 (-MPCSixDofProcessorSourceLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCSixDofProcessorSourceDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x18004CD64 (-MPCSixDofProcessorSourceDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z @ 0x1800525CC (-MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180052714 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800528A4 (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z @ 0x180055E98 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x1800A80EC (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z @ 0x1800A82B0 (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z.c)
 *     ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z @ 0x1800A83BC (-MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x1800A8588 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800AAF9C (-MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x1800AC41C (-MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ISMTracing::GetPIDOfTarget(struct IInputTarget *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct IInputTarget *v8; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v6 = 0;
  if ( a1 )
  {
    v8 = a1;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a1)(
           a1,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v7);
    v4 = v7;
    if ( v3 >= 0 && v7 )
    {
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 32LL))(v7, &v6);
      v4 = v7;
    }
    if ( v4 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 16LL))(a1);
    return v6;
  }
  return v2;
}
