/*
 * XREFs of ACPIQueryGedDeviceInterface @ 0x1C00297F4
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0078610 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C007C120 (ACPIFilterIrpStartDevice.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIQueryGedDeviceInterface(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // rax
  const char *v5; // r8
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  struct _DEVICE_OBJECT *v11; // rcx
  _QWORD v12[5]; // [rsp+50h] [rbp-19h] BYREF
  __int16 v13; // [rsp+78h] [rbp+Fh]
  GUID *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  _QWORD *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  memset(v12, 0, sizeof(v12));
  v2 = a1[115];
  if ( *(_WORD *)(*(_QWORD *)v2 + 66LL) == 6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 104LL);
    if ( *(_DWORD *)(v7 + 16) == 1599293264 )
    {
      v11 = *(struct _DEVICE_OBJECT **)(v7 + 720);
      v17 = 0LL;
      v14 = &GUID_GED_INTERFACE_STANDARD;
      v13 = 2075;
      v16 = v12;
      v15 = 65576;
      result = ACPIInternalSendSynchronousIrp(v11);
      if ( (int)result >= 0 )
      {
        a1[117] = v12[4];
        a1[118] = v12[1];
      }
    }
    else
    {
      v8 = a1[1];
      v9 = (const char *)&unk_1C005B1F0;
      v10 = (const char *)&unk_1C005B1F0;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)a1[70];
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = (const char *)a1[71];
      }
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x29u,
        (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
        v7,
        (char)a1,
        v9,
        v10);
      return 3221225473LL;
    }
  }
  else
  {
    v3 = a1[1];
    v4 = (const char *)&unk_1C005B1F0;
    v5 = (const char *)&unk_1C005B1F0;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[70];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)a1[71];
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x28u,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      (char)a1,
      v4,
      v5);
    return 3221225480LL;
  }
  return result;
}
