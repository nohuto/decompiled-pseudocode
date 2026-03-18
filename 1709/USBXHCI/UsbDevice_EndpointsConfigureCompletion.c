/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0015430 (WPP_RECORDER_SF_dqd.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00349D4 (UsbDevice_GetEndpointOffloadInformation.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0037C2C (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0037F54 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0038048 (WPP_RECORDER_SF_dqqd.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rbp
  _BYTE *v14; // r15
  int v15; // r8d
  char v16; // r15
  int v17; // r14d
  char v18; // al
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  __int64 i; // r12
  __int64 v24; // rdi
  int v25; // r8d
  int v26; // edx
  char v27; // al
  __int64 j; // r15
  __int64 v29; // rdi
  int v30; // r8d
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r13
  unsigned int *v37; // rbx
  unsigned int k; // edi
  __int64 v39; // rax
  __int64 m; // r14
  __int64 v41; // rdi
  int v42; // r8d
  __int64 v43; // rcx
  _DWORD *v44; // rdi
  __int64 v45; // rbx
  int v46; // ecx
  __int64 v47; // rdx
  unsigned int n; // ebx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // [rsp+20h] [rbp-B8h]
  char v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h] BYREF
  __int64 v57; // [rsp+60h] [rbp-78h]
  __int64 v58; // [rsp+68h] [rbp-70h]
  _QWORD v59[5]; // [rsp+70h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v55 = 0;
  v7 = *(_QWORD *)(v3 + 8);
  v57 = *(_QWORD *)(v3 + 424);
  v8 = v57;
  v9 = *(_QWORD *)(v7 + 88);
  v10 = *(_QWORD *)(v7 + 144);
  v56 = v9;
  v58 = v10;
  memset(v59, 0, sizeof(v59));
  LOWORD(v59[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v57,
    v59);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v57,
          off_1C004E098);
  v13 = v59[1];
  v14 = (_BYTE *)v11;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v59[1] + 24LL) )
    {
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xCu,
        0x2Cu,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
LABEL_17:
      v16 = 0;
      v17 = 0;
LABEL_18:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v13 + 40); i = (unsigned int)(i + 1) )
      {
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8 * i),
                off_1C004E1D8);
        Endpoint_Disable_Internal(v24, 0, v25);
        ESM_AddEvent((PVOID)(v24 + 288));
      }
      if ( v16 != 1 )
        goto LABEL_37;
      goto LABEL_35;
    }
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xCu,
      0x2Du,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
    goto LABEL_5;
  }
  v18 = *(_BYTE *)(a1 + 60);
  if ( v18 == 1 )
  {
    v19 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(v19 + 136) + 80LL) )
      XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(*(_QWORD *)(v19 + 136) + 16LL), v3, 0LL, &v56);
    else
      XilUsbDevice_GetDeviceContextBufferVA(v3);
    v21 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v21, v20, 46);
    *(_DWORD *)(v13 + 76) = *(_DWORD *)(a1 + 64);
    if ( !*v14 && !v14[1] )
    {
      v55 = 1;
      goto LABEL_17;
    }
    v16 = 0;
LABEL_6:
    v17 = -1073741823;
    goto LABEL_18;
  }
  if ( v18 == 11 )
  {
    v22 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v22,
      12,
      47,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
    if ( !*(_DWORD *)(v13 + 24) )
      goto LABEL_17;
LABEL_5:
    v16 = 1;
    goto LABEL_6;
  }
  v26 = *(unsigned __int8 *)(a1 + 61);
  LOBYTE(v26) = 2;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v26, v12, 48);
  v27 = *(_BYTE *)(a1 + 60);
  switch ( v27 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 4u;
      *(_DWORD *)(v13 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v13 + 40) )
  {
    v17 = -1073741823;
LABEL_35:
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v13 + 24); j = (unsigned int)(j + 1) )
    {
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * j),
              off_1C004E1D8);
      Endpoint_Disable_Internal(v29, 0, v30);
      ESM_AddEvent((PVOID)(v29 + 288));
    }
LABEL_37:
    if ( v55 == 1 )
    {
      v31 = 0LL;
      if ( *(_DWORD *)(v13 + 24) )
      {
        do
        {
          v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v31),
                  off_1C004E1D8);
          v34 = v32;
          v35 = *(unsigned int *)(v32 + 144);
          v36 = *(_QWORD *)(v3 + 8 * v35 + 168);
          if ( v36 && v36 != v32 )
          {
            LOBYTE(v33) = 1;
            Endpoint_Disable_Internal(*(_QWORD *)(v3 + 8 * v35 + 168), v33, v15);
            ESM_AddEvent((PVOID)(v36 + 288));
            *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v34 + 144) + 168) = 0LL;
          }
          v31 = (unsigned int)(v31 + 1);
          *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v34 + 144) + 168) = v34;
        }
        while ( (unsigned int)v31 < *(_DWORD *)(v13 + 24) );
        v8 = v57;
      }
    }
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      *(unsigned __int8 *)(v3 + 135),
      v15,
      50,
      v54,
      *(_BYTE *)(v3 + 135),
      v8,
      *(_QWORD *)v3,
      v17);
    if ( v17 >= 0 )
    {
      v37 = *(unsigned int **)(v13 + 88);
      for ( k = 0; k < *(_DWORD *)(v13 + 84); v37 = (unsigned int *)((char *)v37 + *v37) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v13, v37);
        ++k;
      }
    }
    v39 = WdfFunctions_01015;
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v39 + 2104))(WdfDriverGlobals, v8, (unsigned int)v17);
    return;
  }
  if ( !*(_DWORD *)(v13 + 24) || *v14 == 1 || v14[1] == 1 )
  {
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4119, 0LL, 0LL, 0LL);
  }
  else
  {
    v14[1] = 1;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v15, 49);
    for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v13 + 24); m = (unsigned int)(m + 1) )
    {
      v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * m),
              off_1C004E1D8);
      Endpoint_Disable_Internal(v41, 0, v42);
      ESM_AddEvent((PVOID)(v41 + 288));
    }
    v43 = v3 + 568;
    if ( !*(_BYTE *)(v3 + 608) )
      v43 = v3 + 560;
    v44 = *(_DWORD **)(*(_QWORD *)(v43 + 32) + 16LL);
    if ( (*(_DWORD *)(v56 + 104) & 4) != 0 )
    {
      memset(v44, 0, 0x840uLL);
      v45 = 16LL;
    }
    else
    {
      memset(v44, 0, 0x420uLL);
      v45 = 8LL;
    }
    v44[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v46 = v44[v45] | 0x4000000;
      v44[v45] = v46;
      HIBYTE(v44[v45 + 1]) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          v44[v45] = v46 | 0x2000000;
        v44[v45 + 2] ^= (v44[v45 + 2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v3 + 136) )
    {
      v47 = *(_QWORD *)(v3 + 24);
      if ( v47 )
      {
        if ( *(int *)(v3 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           v47,
                           off_1C004E2F0)
                       + 144) > 1u )
        {
          v44[v45] |= 0x2000000u;
        }
      }
    }
    for ( n = 0; n < *(_DWORD *)(v13 + 40); *v44 |= 1 << *(_DWORD *)(v49 + 144) )
      v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * n++),
              off_1C004E1D8);
    memset((void *)(v3 + 440), 0, 0x60uLL);
    *(_QWORD *)(v3 + 488) = v3;
    *(_QWORD *)(v3 + 480) = UsbDevice_EndpointsConfigureCompletion;
    v50 = v3 + 568;
    v51 = v3 + 568;
    *(_DWORD *)(v3 + 476) = *(_DWORD *)(v3 + 476) & 0xFFFF01FF | 0x3000;
    *(_BYTE *)(v3 + 479) = *(_BYTE *)(v3 + 135);
    if ( !*(_BYTE *)(v3 + 608) )
      v50 = v3 + 560;
    v52 = *(_QWORD *)(v50 + 32);
    v53 = v58;
    *(_QWORD *)(v3 + 464) = *(_QWORD *)(v52 + 24);
    *(_QWORD *)(v3 + 512) = v44;
    if ( !*(_BYTE *)(v3 + 608) )
      v51 = v3 + 560;
    *(_DWORD *)(v3 + 520) = *(_DWORD *)(*(_QWORD *)(v51 + 32) + 44LL);
    *(_DWORD *)(v3 + 524) = 1;
    *(_QWORD *)(v3 + 528) = v3;
    Command_SendCommand(v53, v3 + 440);
  }
}
