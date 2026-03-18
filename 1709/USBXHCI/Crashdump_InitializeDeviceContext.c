/*
 * XREFs of Crashdump_InitializeDeviceContext @ 0x1C00394FC
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C003A040 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0016518 (DeviceSlot_LocateDeviceByPortPath.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C003BC48 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C003D0DC (Crashdump_UsbDevice_Initialize.c)
 */

__int64 __fastcall Crashdump_InitializeDeviceContext(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // r15
  __int64 DeviceContextBufferVA; // rax
  int v11; // r9d
  __int64 v12; // rbp
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r12
  PVOID v19; // rax
  int v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v8 = DeviceSlot_LocateDeviceByPortPath(a1, a4, &v22);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v22;
  DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v22);
  LOBYTE(v11) = *(_BYTE *)(v9 + 135);
  v12 = DeviceContextBufferVA;
  v21 = *(_DWORD *)(a4 + 4);
  v23 = DeviceContextBufferVA;
  v8 = Crashdump_UsbDevice_Initialize(a5, a2, a3, v11, DeviceContextBufferVA, v9, v21);
  if ( v8 < 0 )
    return (unsigned int)v8;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0xC8uLL, 0x43434858u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0xC8uLL);
  v8 = Crashdump_Endpoint_Initialize((_DWORD)v14, a2, a5, 1, 0, v12);
  if ( v8 < 0 )
    goto LABEL_13;
  *(_QWORD *)(a5 + 120) = v14;
  v14 = 0LL;
  if ( !a3 || (v15 = 0LL, !*(_DWORD *)a3) )
  {
LABEL_12:
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_13:
    if ( v14 )
      ExFreePoolWithTag(v14, 0x43434858u);
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    v24 = *(_QWORD *)(a3 + 8);
    v16 = (*(unsigned __int8 *)(v24 + 8 * v15) >> 7) + 2 * (*(_BYTE *)(v24 + 8 * v15) & 0x7Fu);
    v17 = *(_QWORD *)(v9 + 8 * v16 + 168) == 0LL;
    LODWORD(v22) = (*(unsigned __int8 *)(v24 + 8 * v15) >> 7) + 2 * (*(_BYTE *)(v24 + 8 * v15) & 0x7F);
    v18 = (unsigned int)v16;
    if ( v17 )
      break;
    v19 = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0xC8uLL, 0x43434858u);
    v14 = v19;
    if ( !v19 )
    {
      v8 = -1073741670;
      goto LABEL_12;
    }
    memset(v19, 0, 0xC8uLL);
    v8 = Crashdump_Endpoint_Initialize((_DWORD)v14, a2, a5, v22, *(_DWORD *)(v24 + 8 * v15 + 4), v23);
    if ( v8 < 0 )
      goto LABEL_13;
    *(_QWORD *)(a5 + 8 * v18 + 112) = v14;
    v15 = (unsigned int)(v15 + 1);
    v14 = 0LL;
    if ( (unsigned int)v15 >= *(_DWORD *)a3 )
      goto LABEL_12;
  }
  return (unsigned int)-1073741811;
}
