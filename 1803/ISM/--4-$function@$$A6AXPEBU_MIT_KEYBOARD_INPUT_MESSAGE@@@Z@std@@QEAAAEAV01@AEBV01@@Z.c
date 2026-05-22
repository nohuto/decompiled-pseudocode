/*
 * XREFs of ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000819C
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007E7C (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180015318 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800154DC (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800156A0 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180023514 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x1800248DC (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x180080FF8 (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x1800811BC (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x1800903A4 (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@@Z @ 0x1800D4FB4 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // r8
  _BYTE *v5; // r9
  _BYTE *v6; // r8
  _BYTE *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  _BYTE *v10; // r8
  _BYTE *v11; // rdx
  _BYTE v13[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v14; // [rsp+70h] [rbp-1h]
  _BYTE v15[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v16; // [rsp+B0h] [rbp+3Fh]

  v3 = 0LL;
  v14 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v5 = 0LL;
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v13);
    v14 = v3;
    v5 = v3;
  }
  if ( v5 != v13 && *(_QWORD *)(a1 + 56) != a1 )
  {
    v3 = *(_BYTE **)(a1 + 56);
    v14 = v3;
    *(_QWORD *)(a1 + 56) = v5;
    goto LABEL_27;
  }
  v6 = 0LL;
  v16 = 0LL;
  if ( v5 )
  {
    if ( v5 == v13 )
    {
      v6 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v5 + 8LL))(v5, v15);
      v16 = v6;
      v3 = v14;
      if ( !v14 )
        goto LABEL_12;
      v7 = v13;
      LOBYTE(v7) = v14 != v13;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v7, v6);
      v6 = v16;
    }
    else
    {
      v6 = v5;
      v16 = v5;
    }
    v3 = 0LL;
    v14 = 0LL;
  }
LABEL_12:
  v8 = *(_QWORD *)(a1 + 56);
  if ( !v8 )
    goto LABEL_19;
  v3 = *(_BYTE **)(a1 + 56);
  if ( v8 == a1 )
  {
    v3 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 8LL))(v3, v13);
    v14 = v3;
    v9 = *(_QWORD *)(a1 + 56);
    if ( !v9 )
    {
      v6 = v16;
      goto LABEL_19;
    }
    LOBYTE(a2) = v9 != a1;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 56), a2);
    v3 = v14;
    v6 = v16;
  }
  else
  {
    v14 = *(_BYTE **)(a1 + 56);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
LABEL_19:
  if ( v6 )
  {
    if ( v6 == v15 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a1);
      v10 = v16;
      if ( v16 )
      {
        LOBYTE(a2) = v16 != v15;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 32LL))(v16, a2);
        v16 = 0LL;
        v10 = 0LL;
      }
      v3 = v14;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v6;
      v16 = 0LL;
      v10 = 0LL;
    }
    if ( v10 )
    {
      LOBYTE(a2) = v10 != v15;
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2);
      v3 = v14;
    }
  }
LABEL_27:
  if ( v3 )
  {
    v11 = v13;
    LOBYTE(v11) = v3 != v13;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v11);
  }
  return a1;
}
