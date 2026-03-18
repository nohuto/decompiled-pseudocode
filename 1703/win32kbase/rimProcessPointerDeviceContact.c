/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C0113A78
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0105270 (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C0105BF0 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C01132D4 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C01135C0 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C0116B14 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0116C5C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0116DE8 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v11; // r14
  struct _HIDP_PREPARSED_DATA *v12; // rbx
  _DWORD *active; // rax
  int v15; // edx
  __int64 v16; // rbx
  int v17; // r14d
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r12
  PalmTelemetry *QuadPart; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  int v27; // r8d
  int v28; // r10d
  __int64 v29; // [rsp+30h] [rbp-49h]
  __int64 v30; // [rsp+38h] [rbp-41h]
  __int64 v31; // [rsp+40h] [rbp-39h]
  int v32; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp+3h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+84h] [rbp+Bh] BYREF
  __int64 v36; // [rsp+88h] [rbp+Fh] BYREF
  int v37; // [rsp+D0h] [rbp+57h] BYREF

  v7 = *(_QWORD *)(a2 + 456);
  v8 = *(_QWORD *)(a2 + 472);
  v37 = 0;
  v11 = a2;
  v35 = 0;
  v12 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 16);
  v34 = 0;
  v36 = 0LL;
  v33 = 0;
  v32 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    19,
    (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
  *a7 = 0;
  active = (_DWORD *)rimFindOrCreateActiveContact(v8, v12, a3, a4, a5, &v37);
  v16 = (__int64)active;
  if ( active )
  {
    v18 = v37;
    if ( v37 )
    {
      if ( *(_DWORD *)(v8 + 1576) == 1 )
        RIMAddToActiveDevices(a1, v8);
    }
    else if ( (active[580] & 2) != 0 )
    {
      LODWORD(v29) = *active;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x15u,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v29);
      v17 = -1073741823;
      goto LABEL_10;
    }
    v17 = rimPopulateContactFrameData((__int64)a1, v11, a3, a4, a5, a6, v16, a7, &v35, &v34, &v33, &v32, &v36);
    if ( v17 >= 0 )
    {
      v21 = a7;
      if ( *a7 )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          20,
          23,
          (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
      }
      else
      {
        if ( v18 )
        {
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 2456);
          *(_QWORD *)(v16 + 56) = *(_QWORD *)(v16 + 2472);
          *(_QWORD *)(v16 + 64) = *(_QWORD *)(v16 + 2432);
        }
        QuadPart = (PalmTelemetry *)a1[121].QuadPart;
        if ( QuadPart )
          PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v8, (struct tagHPD_CONTACT *)v16, v18);
        rimApplyPointerDevicePolicies(v8, v19, v20, v16, v18, v35, v34, v33, v32, v36);
        if ( (*(_DWORD *)(v16 + 32) & 0x20) != 0 )
        {
          v18 = v37;
          a1[92].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        }
        *(_QWORD *)(v16 + 72) = *(_QWORD *)(v16 + 2432);
        if ( !*(_DWORD *)(v16 + 52) && (*(_DWORD *)(v16 + 2620) & 4) == 0 && (*(_DWORD *)(v16 + 2404) & 4) != 0 )
        {
          v18 = v37;
          *(_DWORD *)(v16 + 52) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        }
        v24 = *(_DWORD *)(v16 + 8);
        if ( !v24 || *(_DWORD *)(v8 + 24) != 7 || (v25 = 1, v24 != 16) )
          v25 = 0;
        if ( !v24
          || v25
          || (*(_DWORD *)(v16 + 2620) & 2) != 0
          || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v16) )
        {
          *(_DWORD *)(v16 + 2320) |= 1u;
          if ( v25 )
            *(_DWORD *)(v16 + 2404) |= 0x2000000u;
        }
        else
        {
          LODWORD(v31) = v28;
          LODWORD(v30) = v27;
          WPP_RECORDER_SF_dDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v26,
            v27,
            0x18u,
            (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
            *(_DWORD *)v16,
            v30,
            v31);
        }
      }
    }
    else
    {
      LODWORD(v29) = *(_DWORD *)v16;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x16u,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v29);
      v21 = a7;
    }
    if ( v17 >= 0 )
    {
      if ( !*v21 )
      {
        *(_DWORD *)(v16 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
LABEL_39:
      RIMCmDeactivateContact(v8, v16);
      goto LABEL_11;
    }
    if ( v18 )
      goto LABEL_39;
LABEL_10:
    *(_DWORD *)(v16 + 2320) &= 0xFFFFFFF8;
    memset((void *)(v16 + 2328), 0, 0xD8uLL);
    goto LABEL_11;
  }
  LOBYTE(v15) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    20,
    20,
    (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
  v17 = -1073741823;
LABEL_11:
  LODWORD(v29) = v17;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x19u,
           (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
           v29);
}
