/*
 * XREFs of RIMAllocateHidDesc @ 0x1C000D844
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFindSiblingMouseDevice @ 0x1C000A2DC (RIMFindSiblingMouseDevice.c)
 *     RIMConfigurePointerDevice @ 0x1C000B1CC (RIMConfigurePointerDevice.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B81C (WPP_RECORDER_SF_S.c)
 *     RIMIsInteractiveCtrl @ 0x1C000C8DC (RIMIsInteractiveCtrl.c)
 *     RIMFreeHidDesc @ 0x1C000D2C8 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000E118 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C000E2A4 (DbgPrintRIM.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C000E55C (ApiSetInkProcessorIsInkDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C0099B60 (EtwTracePointerDeviceArrivalStart.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C009B210 (EtwTracePointerDeviceArrivalStop.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0112B38 (RIMCreateHidKeyboardDeviceInfo.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C013D1FC (ApiSetSetUserPTPEnabledPreference.c)
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
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
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
  __int64 v26; // r8
  unsigned __int16 v27; // r9
  int v28; // r8d
  __int16 v29; // r8
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  int v31; // [rsp+48h] [rbp-60h]
  _OWORD v32[4]; // [rsp+50h] [rbp-58h] BYREF

  v9 = a2;
  if ( !a3 )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      43,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
    return 0LL;
  }
  if ( !a4[2] )
  {
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      44,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
      a4[1],
      *a4);
    return 0LL;
  }
  v11 = Win32AllocPoolZInit(0x78uLL);
  v12 = v11;
  if ( !v11 )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x2Du,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
      *(const wchar_t **)(v9 + 216));
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  v13 = Win32AllocPoolNonPaged(10 * (unsigned int)*(unsigned __int16 *)(v11 + 44), 1886417746LL);
  *(_QWORD *)(v12 + 24) = v13;
  LOBYTE(v14) = 3;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    19,
    46,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    v13);
  if ( !*(_QWORD *)(v12 + 24) )
  {
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      18,
      47,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
      *(_WORD *)(v12 + 44));
    RIMFreeHidDesc(v12);
    return 0LL;
  }
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(a5 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 4) <= 1u || (unsigned __int16)(*a4 - 1) <= 1u) )
  {
    EtwTracePointerDeviceArrivalStart();
    v16 = *(_QWORD *)(v12 + 104);
    v31 = *(_DWORD *)(v12 + 112);
    v30 = v16;
    v17 = RIMCreatePointerDeviceInfo(a1, v9, a3, a4, a6, a7, &v30);
    if ( v17 >= 0 )
    {
      if ( (unsigned __int16)(*a4 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v12);
        if ( *a4 == 5 )
          ApiSetSetUserPTPEnabledPreference(v9, v12, a1);
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
        49,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
        a4[1],
        *a4);
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v9 + 456) = 0LL;
      RIMFreeHidDesc(v12);
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        19,
        50,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
        0);
      return 0LL;
    }
    if ( *a4 != 1 )
      RIMFindSiblingMouseDevice(v18, v12, *a4, v9);
    EtwTracePointerDeviceArrivalStop();
    goto LABEL_24;
  }
  v22 = *((_OWORD *)a4 + 1);
  v32[0] = *(_OWORD *)a4;
  v23 = *((_OWORD *)a4 + 2);
  v32[1] = v22;
  v24 = *((_OWORD *)a4 + 3);
  v32[2] = v23;
  v32[3] = v24;
  if ( (unsigned int)RIMIsInteractiveCtrl(v32) )
  {
    *(_DWORD *)(v9 + 200) |= 0x100u;
  }
  else
  {
    if ( !(unsigned int)ApiSetInkProcessorIsInkDevice(v27, *a4, v26 + 6) )
    {
      v28 = *(_DWORD *)(v9 + 184);
      if ( (v28 & 0x2000) != 0 )
      {
        if ( (v28 & 0x4000) != 0 && (int)RIMCreateHidKeyboardDeviceInfo(a1, v9, a3, a4) >= 0 )
          goto LABEL_24;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 76)) != 0
             && (!*(_DWORD *)(a1 + 80) || (v29 & 0x4000) != 0) )
      {
        goto LABEL_24;
      }
      goto LABEL_9;
    }
    *(_DWORD *)(v9 + 200) |= 0x200u;
  }
LABEL_24:
  LOBYTE(v25) = 3;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v25,
    19,
    48,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    v12);
  return v12;
}
