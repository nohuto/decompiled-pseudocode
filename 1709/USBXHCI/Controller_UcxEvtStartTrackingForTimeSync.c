/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ptqqp @ 0x1C0007A14 (McTemplateK0ptqqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_II @ 0x1C0014D78 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0015430 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
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
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  PDEVICE_OBJECT result; // rax
  unsigned __int64 v20; // r8
  int v21; // edx
  int v22; // edx
  __int64 v23; // r14
  int v24; // eax
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
  __int64 v35; // [rsp+20h] [rbp-89h]
  __int64 v36; // [rsp+28h] [rbp-81h]
  __int64 v37; // [rsp+30h] [rbp-79h]
  __int64 v38; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-61h]
  __int64 *v40; // [rsp+50h] [rbp-59h] BYREF
  __int64 v41; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v42[7]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-1h]
  __int128 v45; // [rsp+B8h] [rbp+Fh]
  char v47; // [rsp+128h] [rbp+7Fh] BYREF

  v38 = 0LL;
  v39 = 0LL;
  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  v12 = v9;
  v13 = v9 + 536;
  if ( a4 < 9 )
  {
    HIDWORD(v37) = HIDWORD(a4);
    HIDWORD(v36) = 0;
    WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 270);
    v15 = -1073741811;
LABEL_3:
    v16 = a2;
LABEL_4:
    v17 = v39;
    goto LABEL_5;
  }
  v20 = a4;
  v16 = a2;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01015 + 2152))(
          WdfDriverGlobals,
          a2,
          v20,
          &v41,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( *(_QWORD *)v41 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), 2u, 4u, 0x10Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
LABEL_19:
    v15 = -1073741811;
    goto LABEL_4;
  }
  v7 = *(_BYTE *)(v41 + 8);
  if ( a3 < 9 )
  {
    HIDWORD(v37) = HIDWORD(a3);
    HIDWORD(v36) = 0;
    WPP_RECORDER_SF_II(*(_QWORD *)(v12 + 72), v21, v14, 272);
    goto LABEL_19;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v40,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( v8 == 1 )
  {
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2216))(WdfDriverGlobals, a2);
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v38,
            off_1C004E3E0);
    if ( *(_BYTE *)(v23 + 40) )
    {
      v15 = -1073741811;
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        v22,
        4,
        273,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v38);
      goto LABEL_3;
    }
  }
  else
  {
    memset(v42, 0, sizeof(v42));
    v42[3] = 0x100000001LL;
    v42[6] = off_1C004E3E0;
    LODWORD(v42[0]) = 56;
    v42[4] = *(_QWORD *)(v13 + 24);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
            WdfDriverGlobals,
            v42,
            &v38);
    v15 = v24;
    if ( v24 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 72),
        2u,
        4u,
        0x112u,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v24);
      goto LABEL_4;
    }
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v38,
            off_1C004E3E0);
    *(_BYTE *)(v23 + 52) = 0;
    *(_QWORD *)(v23 + 16) = v38;
  }
  if ( *(_DWORD *)(v12 + 328) != 1 )
  {
    v15 = -1073741436;
    goto LABEL_3;
  }
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v13 + 24)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 1144))(
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
  v43[1] = &v47;
  v28 = *(_QWORD *)(v12 + 128);
  v43[0] = v13;
  v44 = 0LL;
  v29 = *(_QWORD **)(v28 + 40);
  v45 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01015 + 1144))(
    WdfDriverGlobals,
    *v29,
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    v43);
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !v47 )
  {
    if ( !v7 )
    {
      *(_QWORD *)(v23 + 24) = a2;
      v30 = *(__int64 **)(v13 + 40);
      if ( *v30 != v13 + 32 )
        __fastfail(3u);
      *(_QWORD *)v23 = v13 + 32;
      *(_QWORD *)(v23 + 8) = v30;
      *v30 = v23;
      *(_QWORD *)(v13 + 40) = v23;
    }
    if ( !*(_BYTE *)(v13 + 56) )
    {
      v31 = WdfFunctions_01015;
      v32 = *(_QWORD *)(v13 + 48);
      v33 = WdfDriverGlobals;
      *(_BYTE *)(v13 + 56) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v31 + 3040))(v33, v32);
    }
    if ( !v7 )
    {
      v15 = 259;
      *v40 = v38;
LABEL_42:
      DynamicLock_Release(*(_QWORD *)(v13 + 8));
      goto LABEL_3;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 120))(
          WdfDriverGlobals,
          *(_QWORD *)(v13 + 24),
          v38);
  v15 = v34;
  if ( v34 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 72),
      2u,
      4u,
      0x113u,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v34);
    goto LABEL_42;
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  *(_BYTE *)(v23 + 40) = 1;
  v17 = a3;
  v15 = 0;
  v16 = a2;
  *v40 = v38;
LABEL_5:
  v18 = v38;
  ++*(_DWORD *)(v12 + 688);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x400) != 0 )
  {
    LODWORD(v37) = v15;
    LODWORD(v36) = v8;
    LODWORD(v35) = v7;
    McTemplateK0ptqqp(v7, v18, v14, *(_QWORD *)(v12 + 8), v35, v36, v37, v18);
  }
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                               *(_QWORD *)(v12 + 72),
                               v18,
                               4,
                               276,
                               (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
                               v15,
                               v38,
                               v8);
  }
  if ( v15 < 0 && !v8 && v38 )
    result = (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v15 != 259 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01015 + 2120))(
                             WdfDriverGlobals,
                             v16,
                             (unsigned int)v15,
                             v17);
  return result;
}
