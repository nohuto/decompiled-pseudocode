/*
 * XREFs of RIMAllocateHidDesc @ 0x1C0054C24
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFindSiblingMouseDevice @ 0x1C00078A4 (RIMFindSiblingMouseDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005557C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C0055708 (DbgPrintRIM.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0055E9C (ApiSetInkProcessorIsInkDevice.c)
 *     RIMFreeHidDesc @ 0x1C0055EEC (RIMFreeHidDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMConfigurePointerDevice @ 0x1C008D290 (RIMConfigurePointerDevice.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C0090E60 (EtwTracePointerDeviceArrivalStart.c)
 *     RIMIsInteractiveCtrl @ 0x1C0090FE8 (RIMIsInteractiveCtrl.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0091614 (ApiSetGetPowerTransitionsState.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C0091E80 (EtwTracePointerDeviceArrivalStop.c)
 *     WPP_RECORDER_SF_S @ 0x1C0094FDC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C013DDFC (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rsi
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // edx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // edx
  unsigned __int16 v26; // r9
  int v27; // r8d
  __int16 v28; // r8
  __int16 v29; // r15
  unsigned int v30; // r13d
  int v31; // eax
  int v32; // eax
  __int64 v33; // [rsp+28h] [rbp-89h]
  __int64 v34; // [rsp+28h] [rbp-89h]
  __int64 v35; // [rsp+40h] [rbp-71h] BYREF
  int v36; // [rsp+48h] [rbp-69h]
  __int64 v37; // [rsp+50h] [rbp-61h]
  __int64 v38; // [rsp+58h] [rbp-59h]
  _BYTE v39[64]; // [rsp+60h] [rbp-51h] BYREF

  v38 = a6;
  v9 = a2;
  v37 = a7;
  if ( !a3 )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      43,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
    return 0LL;
  }
  if ( !a4[2] )
  {
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      44,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
      a4[1],
      *a4);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v13 = (__int64)v11;
  if ( !v11 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      18,
      45,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
      *(_QWORD *)(v9 + 216));
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  v14 = Win32AllocPoolNonPaged(10LL * *((unsigned __int16 *)v11 + 22), 0x70707352u);
  *(_QWORD *)(v13 + 24) = v14;
  LOBYTE(v15) = 3;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    19,
    46,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    v14);
  if ( !*(_QWORD *)(v13 + 24) )
  {
    LODWORD(v33) = *(unsigned __int16 *)(v13 + 44);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x2Fu,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
      v33);
    RIMFreeHidDesc(v13);
    return 0LL;
  }
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(a5 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 4) <= 1u || (unsigned __int16)(*a4 - 1) <= 1u) )
  {
    EtwTracePointerDeviceArrivalStart();
    v16 = *(_QWORD *)(v13 + 104);
    v36 = *(_DWORD *)(v13 + 112);
    v35 = v16;
    v17 = RIMCreatePointerDeviceInfo(a1, v9, a3, (__int16 *)a4, v38, v37, (__int64)&v35);
    if ( v17 >= 0 )
    {
      v29 = *a4;
      v18 = 65532LL;
      if ( ((*a4 - 2) & 0xFFFC) == 0 && v29 != 3 )
      {
        v30 = 0;
        memset(v39, 0, 0x38uLL);
        if ( (unsigned __int16)(v29 - 4) <= 1u )
        {
          RIMConfigurePointerDevice(a1, v9, v13);
          if ( *a4 == 5 )
            ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
        }
        ApiSetGetPowerTransitionsState(v39);
        if ( *(_QWORD *)&v39[28] )
          v30 = 1;
        v31 = RIMSendLatencyMgtDeviceRequest(v9, v13, v30);
        if ( v31 < 0 )
        {
          LODWORD(v34) = v31;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x30u,
            (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
            v34);
        }
      }
    }
    else if ( *a4 != 5 || v17 == -1073741808 )
    {
LABEL_9:
      DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n");
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        19,
        50,
        (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
        a4[1],
        *a4);
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v9 + 456) = 0LL;
      RIMFreeHidDesc(v13);
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        19,
        51,
        (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
        0);
      return 0LL;
    }
    if ( *a4 != 1 )
      RIMFindSiblingMouseDevice(v18, v13, *a4, v9);
    EtwTracePointerDeviceArrivalStop();
    goto LABEL_30;
  }
  v22 = *((_OWORD *)a4 + 1);
  *(_OWORD *)v39 = *(_OWORD *)a4;
  v23 = *((_OWORD *)a4 + 2);
  *(_OWORD *)&v39[16] = v22;
  v24 = *((_OWORD *)a4 + 3);
  *(_OWORD *)&v39[32] = v23;
  *(_OWORD *)&v39[48] = v24;
  if ( (unsigned int)RIMIsInteractiveCtrl(v39) )
  {
    *(_DWORD *)(v9 + 200) |= 0x100u;
  }
  else
  {
    if ( !(unsigned int)ApiSetInkProcessorIsInkDevice(v26, *a4, a5 + 6) )
    {
      v27 = *(_DWORD *)(v9 + 184);
      if ( (v27 & 0x2000) != 0 )
      {
        if ( (v27 & 0x4000) != 0 )
        {
          v32 = *(_DWORD *)(v13 + 112);
          v35 = *(_QWORD *)(v13 + 104);
          v36 = v32;
          if ( (int)RIMCreateHidKeyboardDeviceInfo(a1, v9, a3, a4) >= 0 )
            goto LABEL_30;
        }
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 76)) != 0
             && (!*(_DWORD *)(a1 + 80) || (v28 & 0x4000) != 0) )
      {
        goto LABEL_30;
      }
      goto LABEL_9;
    }
    *(_DWORD *)(v9 + 200) |= 0x200u;
  }
LABEL_30:
  LOBYTE(v25) = 3;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v25,
    19,
    49,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    v13);
  return v13;
}
