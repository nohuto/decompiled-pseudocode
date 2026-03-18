/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C011255C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01050A0 (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C0106D50 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C0111DBC (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C01120A8 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C0115690 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01157D8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0115CE0 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
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
  __int64 v8; // rsi
  struct _HIDP_PREPARSED_DATA *v12; // rbx
  _DWORD *v13; // r12
  _DWORD *active; // rax
  __int64 v15; // rbx
  int v16; // r14d
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  PalmTelemetry *QuadPart; // rcx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v25; // r8d
  int v26; // r10d
  unsigned __int16 v27; // [rsp+20h] [rbp-61h]
  __int64 v28; // [rsp+28h] [rbp-59h]
  __int64 v29; // [rsp+30h] [rbp-51h]
  __int64 v30; // [rsp+38h] [rbp-49h]
  int v31; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-Dh] BYREF
  unsigned int v33; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v34; // [rsp+7Ch] [rbp-5h] BYREF
  __int64 v35[8]; // [rsp+80h] [rbp-1h] BYREF
  int v36; // [rsp+D8h] [rbp+57h] BYREF
  char *v37; // [rsp+E0h] [rbp+5Fh]

  v37 = a3;
  v8 = *(_QWORD *)(a2 + 472);
  v12 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  v36 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v35[0] = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x14u,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  v13 = a7;
  v27 = a5;
  *a7 = 0;
  active = (_DWORD *)rimFindOrCreateActiveContact(v8, v12, a3, a4, v27, &v36);
  v15 = (__int64)active;
  if ( active )
  {
    v17 = v36;
    if ( v36 )
    {
      if ( *(_DWORD *)(v8 + 912) == 1 )
        RIMAddToActiveDevices(a1, v8);
    }
    else if ( (active[580] & 2) != 0 )
    {
      LODWORD(v28) = *active;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x16u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v28);
      v16 = -1073741823;
      goto LABEL_10;
    }
    v16 = rimPopulateContactFrameData((__int64)a1, a2, v37, a4, a5, a6, v15, v13, &v34, &v33, &v32, &v31, v35);
    if ( v16 >= 0 )
    {
      if ( !*v13 )
      {
        if ( v17 )
        {
          *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 2456);
          *(_QWORD *)(v15 + 56) = *(_QWORD *)(v15 + 2472);
          *(_QWORD *)(v15 + 64) = *(_QWORD *)(v15 + 2432);
        }
        QuadPart = (PalmTelemetry *)a1[121].QuadPart;
        if ( QuadPart )
          PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v8, (struct tagHPD_CONTACT *)v15, v17);
        rimApplyPointerDevicePolicies(v8, v18, v19, v15, v17, v34, v33, v32, v31, v35[0]);
        if ( (*(_DWORD *)(v15 + 32) & 0x20) != 0 )
        {
          v17 = v36;
          a1[92].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        }
        *(_QWORD *)(v15 + 72) = *(_QWORD *)(v15 + 2432);
        if ( !*(_DWORD *)(v15 + 52) && (*(_DWORD *)(v15 + 2620) & 4) == 0 && (*(_DWORD *)(v15 + 2404) & 4) != 0 )
        {
          v17 = v36;
          *(_DWORD *)(v15 + 52) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        }
        v22 = *(_DWORD *)(v15 + 8);
        if ( v22 && *(_DWORD *)(v8 + 24) == 7 && v22 == 16 )
        {
          v23 = 1;
        }
        else
        {
          v23 = 0;
          if ( v22
            && (*(_DWORD *)(v15 + 2620) & 2) == 0
            && !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v15) )
          {
            LODWORD(v30) = v26;
            LODWORD(v29) = v25;
            WPP_RECORDER_SF_dDD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v24,
              v25,
              0x19u,
              (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
              *(_DWORD *)v15,
              v29,
              v30);
            goto LABEL_30;
          }
        }
        *(_DWORD *)(v15 + 2320) |= 1u;
        if ( v23 )
          *(_DWORD *)(v15 + 2404) |= 0x2000000u;
        goto LABEL_30;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x18u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
    }
    else
    {
      LODWORD(v28) = *(_DWORD *)v15;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x17u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v28);
    }
LABEL_30:
    if ( v16 >= 0 )
    {
      if ( !*v13 )
      {
        *(_DWORD *)(v15 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
LABEL_38:
      RIMCmDeactivateContact(v8, v15);
      goto LABEL_11;
    }
    if ( v17 )
      goto LABEL_38;
LABEL_10:
    *(_DWORD *)(v15 + 2320) &= 0xFFFFFFF8;
    memset((void *)(v15 + 2328), 0, 0xD8uLL);
    goto LABEL_11;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x15u,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  v16 = -1073741823;
LABEL_11:
  LODWORD(v28) = v16;
  return WPP_RECORDER_SF_d(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x1Au,
           (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
           v28);
}
