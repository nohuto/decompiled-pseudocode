/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0ptqqp @ 0x1C000D57C (McTemplateK0ptqqp.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_II @ 0x1C000DA18 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C000E0D0 (WPP_RECORDER_SF_dqd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v7; // r13
  char v8; // r12
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  int v18; // edx
  PDEVICE_OBJECT result; // rax
  unsigned __int64 v20; // r8
  int v21; // edx
  __int64 v22; // r14
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rbx
  int Ulong; // eax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  PWDF_DRIVER_GLOBALS v33; // rcx
  int v34; // eax
  int v35; // edx
  __int64 v36; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-61h]
  __int64 *v38; // [rsp+50h] [rbp-59h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v40[7]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v41[2]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-1h]
  __int128 v43; // [rsp+B8h] [rbp+Fh]
  char v45; // [rsp+128h] [rbp+7Fh] BYREF

  v36 = 0LL;
  v37 = 0LL;
  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B430);
  v12 = v9;
  v13 = v9 + 552;
  if ( a4 < 9 )
  {
    WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 272);
    v15 = -1073741811;
LABEL_3:
    v16 = a2;
LABEL_4:
    v17 = v37;
    goto LABEL_5;
  }
  v20 = a4;
  v16 = a2;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          v20,
          &v39,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( *(_QWORD *)v39 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), 2u, 4u, 0x111u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
LABEL_19:
    v15 = -1073741811;
    goto LABEL_4;
  }
  v7 = *(_BYTE *)(v39 + 8);
  if ( a3 < 9 )
  {
    WPP_RECORDER_SF_II(*(_QWORD *)(v12 + 72), v21, v14, 274);
    goto LABEL_19;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v38,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( v8 == 1 )
  {
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v36,
            off_1C004B3E0);
    if ( *(_BYTE *)(v22 + 40) )
    {
      v15 = -1073741811;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        2u,
        4u,
        0x113u,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v36);
      goto LABEL_3;
    }
  }
  else
  {
    memset(v40, 0, sizeof(v40));
    v40[3] = 0x100000001LL;
    v40[6] = off_1C004B3E0;
    LODWORD(v40[0]) = 56;
    v40[4] = *(_QWORD *)(v13 + 24);
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v40,
            &v36);
    v15 = v23;
    if ( v23 < 0 )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 72),
        v24,
        4,
        276,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v23);
      goto LABEL_4;
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v36,
            off_1C004B3E0);
    *(_BYTE *)(v22 + 52) = 0;
    *(_QWORD *)(v22 + 16) = v36;
  }
  if ( *(_DWORD *)(v12 + 328) != 1 )
  {
    v15 = -1073741436;
    goto LABEL_3;
  }
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v13 + 24)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(v12 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v13);
    v25 = *(_QWORD *)(v12 + 88);
    v26 = *(_QWORD *)(v25 + 32);
    Ulong = XilRegister_ReadUlong(v25, v26);
    XilRegister_WriteUlong(*(_QWORD *)(v12 + 88), v26, Ulong | 0x400u);
    *(_BYTE *)v13 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  v41[1] = &v45;
  v28 = *(_QWORD *)(v12 + 128);
  v41[0] = v13;
  v42 = 0LL;
  v29 = *(_QWORD **)(v28 + 40);
  v43 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01023 + 1144))(
    WdfDriverGlobals,
    *v29,
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    v41);
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !v45 )
  {
    if ( !v7 )
    {
      *(_QWORD *)(v22 + 24) = a2;
      v30 = *(__int64 **)(v13 + 40);
      if ( *v30 != v13 + 32 )
        __fastfail(3u);
      *(_QWORD *)v22 = v13 + 32;
      *(_QWORD *)(v22 + 8) = v30;
      *v30 = v22;
      *(_QWORD *)(v13 + 40) = v22;
    }
    if ( !*(_BYTE *)(v13 + 56) )
    {
      v31 = WdfFunctions_01023;
      v32 = *(_QWORD *)(v13 + 48);
      v33 = WdfDriverGlobals;
      *(_BYTE *)(v13 + 56) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v31 + 3040))(v33, v32);
    }
    if ( !v7 )
    {
      v15 = 259;
      *v38 = v36;
LABEL_42:
      DynamicLock_Release(*(_QWORD *)(v13 + 8));
      goto LABEL_3;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
          WdfDriverGlobals,
          *(_QWORD *)(v13 + 24),
          v36);
  v15 = v34;
  if ( v34 < 0 )
  {
    LOBYTE(v35) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 72),
      v35,
      4,
      277,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      v34);
    goto LABEL_42;
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  *(_BYTE *)(v22 + 40) = 1;
  v17 = a3;
  v15 = 0;
  v16 = a2;
  *v38 = v36;
LABEL_5:
  v18 = v36;
  ++*(_DWORD *)(v12 + 704);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x1000) != 0 )
    McTemplateK0ptqqp(v7, v18, v14, *(_QWORD *)(v12 + 8), v7, v8, v15, v18);
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                               *(_QWORD *)(v12 + 72),
                               v18,
                               4,
                               278,
                               (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
                               v15,
                               v36,
                               v8);
  }
  if ( v15 < 0 && !v8 && v36 )
    result = (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  if ( v15 != 259 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                             WdfDriverGlobals,
                             v16,
                             (unsigned int)v15,
                             v17);
  return result;
}
