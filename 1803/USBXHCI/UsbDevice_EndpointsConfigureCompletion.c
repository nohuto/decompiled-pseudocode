/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C000E0D0 (WPP_RECORDER_SF_dqd.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C000FB04 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00324BC (UsbDevice_GetEndpointOffloadInformation.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003580C (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0035B34 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0035C28 (WPP_RECORDER_SF_dqqd.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C003FC6C (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C003FC84 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C003FC98 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // r15
  int v14; // r8d
  char v15; // bp
  int v16; // ebx
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rcx
  unsigned int i; // r14d
  __int64 *v27; // rax
  char v28; // al
  unsigned int j; // ebp
  __int64 *v30; // rax
  unsigned int k; // r14d
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 *v35; // rcx
  unsigned int v36; // r14d
  unsigned int *m; // rbp
  __int64 v38; // rax
  PWDF_DRIVER_GLOBALS v39; // rcx
  unsigned int n; // ebx
  __int64 *v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  _DWORD *InputContextBufferVA; // rbp
  __int64 v45; // rbx
  int v46; // ecx
  __int64 v47; // rdx
  unsigned int ii; // ebx
  __int64 v49; // rax
  __int64 v50; // rcx
  int InputContextBufferSize; // eax
  __int64 v52; // rcx
  int v53; // [rsp+20h] [rbp-B8h]
  char v54; // [rsp+50h] [rbp-88h]
  __int64 v55; // [rsp+58h] [rbp-80h] BYREF
  __int64 v56; // [rsp+60h] [rbp-78h]
  _QWORD v57[5]; // [rsp+68h] [rbp-70h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v54 = 0;
  v7 = *(_QWORD *)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 424);
  v9 = *(_QWORD *)(v7 + 88);
  v10 = *(_QWORD *)(v7 + 144);
  v55 = v9;
  v56 = v10;
  memset(v57, 0, sizeof(v57));
  LOWORD(v57[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v8,
    v57);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v8,
          off_1C004B098);
  v12 = v57[1];
  v13 = (_BYTE *)v11;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v57[1] + 24LL) )
    {
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xCu,
        0x2Eu,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
      goto LABEL_21;
    }
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xCu,
      0x2Fu,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
LABEL_5:
    v15 = 1;
    v16 = -1073741823;
    goto LABEL_23;
  }
  v17 = *(_BYTE *)(a1 + 60);
  if ( v17 == 1 )
  {
    v18 = *(_QWORD *)(v3 + 8);
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 136) + 88LL) + 8LL);
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 136) + 80LL)
      && (*(_BYTE *)(v3 + 608) && *(_DWORD *)(v19 + 444) == 2 || *(_DWORD *)(v19 + 444) == 1) )
    {
      XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(*(_QWORD *)(v18 + 136) + 16LL), v3, 0LL, &v55);
      v20 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v21 = v3 + 568;
      if ( !*(_BYTE *)(v3 + 609) )
        v21 = v3 + 560;
      XilCoreUsbDevice_GetDeviceContextBufferVA(v21);
    }
    v22 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v20 + 72), v22, v20, 48);
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v16 = -1073741823;
LABEL_22:
      v15 = 0;
LABEL_23:
      for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
      {
        v27 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
                           off_1C004B1D8);
        Endpoint_Disable(v27, 0LL);
      }
      if ( v15 != 1 )
        goto LABEL_42;
      goto LABEL_40;
    }
    v54 = 1;
LABEL_21:
    v16 = 0;
    goto LABEL_22;
  }
  v23 = *(_QWORD *)v3;
  v24 = *(unsigned __int8 *)(a1 + 61);
  v25 = *(_QWORD *)(v3 + 8);
  if ( v17 == 11 )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v25 + 72),
      v23,
      12,
      49,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      v24,
      *(_QWORD *)v3);
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_21;
    goto LABEL_5;
  }
  LOBYTE(v23) = 2;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v25 + 72), v23, v24, 50);
  v28 = *(_BYTE *)(a1 + 60);
  switch ( v28 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 4u;
      *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v12 + 40) )
  {
    v16 = -1073741823;
LABEL_40:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v30 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
                         off_1C004B1D8);
      Endpoint_Disable(v30, 0LL);
    }
LABEL_42:
    if ( v54 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); *(_QWORD *)(v3 + 8LL * (unsigned int)v34 + 168) = v33 )
      {
        v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C004B1D8);
        v33 = v32;
        v34 = *(unsigned int *)(v32 + 144);
        v35 = *(__int64 **)(v3 + 8 * v34 + 168);
        if ( v35 && v35 != (__int64 *)v32 )
        {
          LOBYTE(v34) = 1;
          Endpoint_Disable(v35, v34);
          *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v33 + 144) + 168) = 0LL;
          LODWORD(v34) = *(_DWORD *)(v33 + 144);
        }
        ++k;
      }
    }
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      *(unsigned __int8 *)(v3 + 135),
      v14,
      52,
      v53,
      *(_BYTE *)(v3 + 135),
      v8,
      *(_QWORD *)v3,
      v16);
    if ( v16 >= 0 )
    {
      v36 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v36 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v12, m);
        ++v36;
      }
    }
    v38 = WdfFunctions_01023;
    v39 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v38 + 2104))(v39, v8, (unsigned int)v16);
    return;
  }
  if ( !*(_DWORD *)(v12 + 24) || *v13 == 1 || v13[1] == 1 )
  {
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4119, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v14, 51);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v41 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
                         off_1C004B1D8);
      Endpoint_Disable(v41, 0LL);
    }
    v42 = v3 + 568;
    v43 = v3 + 568;
    if ( !*(_BYTE *)(v3 + 609) )
      v43 = v3 + 560;
    InputContextBufferVA = (_DWORD *)XilCoreUsbDevice_GetInputContextBufferVA(v43);
    if ( (*(_DWORD *)(v55 + 104) & 4) != 0 )
    {
      memset(InputContextBufferVA, 0, 0x840uLL);
      v45 = 16LL;
    }
    else
    {
      memset(InputContextBufferVA, 0, 0x420uLL);
      v45 = 8LL;
    }
    InputContextBufferVA[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v46 = InputContextBufferVA[v45] | 0x4000000;
      InputContextBufferVA[v45] = v46;
      HIBYTE(InputContextBufferVA[v45 + 1]) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          InputContextBufferVA[v45] = v46 | 0x2000000;
        InputContextBufferVA[v45 + 2] ^= (InputContextBufferVA[v45 + 2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v3 + 136) )
    {
      v47 = *(_QWORD *)(v3 + 24);
      if ( v47 )
      {
        if ( *(int *)(v3 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           v47,
                           off_1C004B2F0)
                       + 144) > 1u )
        {
          InputContextBufferVA[v45] |= 0x2000000u;
        }
      }
    }
    for ( ii = 0; ii < *(_DWORD *)(v12 + 40); *InputContextBufferVA |= 1 << *(_DWORD *)(v49 + 144) )
      v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * ii++),
              off_1C004B1D8);
    memset((void *)(v3 + 440), 0, 0x60uLL);
    *(_QWORD *)(v3 + 488) = v3;
    *(_QWORD *)(v3 + 480) = UsbDevice_EndpointsConfigureCompletion;
    v50 = v3 + 568;
    *(_DWORD *)(v3 + 476) = *(_DWORD *)(v3 + 476) & 0xFFFF01FF | 0x3000;
    *(_BYTE *)(v3 + 479) = *(_BYTE *)(v3 + 135);
    if ( !*(_BYTE *)(v3 + 609) )
      v50 = v3 + 560;
    *(_QWORD *)(v3 + 464) = XilCoreUsbDevice_GetInputContextBufferLA(v50);
    *(_QWORD *)(v3 + 512) = InputContextBufferVA;
    if ( !*(_BYTE *)(v3 + 609) )
      v42 = v3 + 560;
    InputContextBufferSize = XilCoreUsbDevice_GetInputContextBufferSize(v42);
    v52 = v56;
    *(_DWORD *)(v3 + 520) = InputContextBufferSize;
    *(_DWORD *)(v3 + 524) = 1;
    *(_QWORD *)(v3 + 528) = v3;
    Command_SendCommand(v52, v3 + 440);
  }
}
