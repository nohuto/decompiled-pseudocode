/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C0053FA4
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0054BB8 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0054EEC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x1C0055238 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, SIZE_T *a4)
{
  void *v4; // rsi
  __int64 v6; // rbx
  int v8; // ebx
  __int64 v9; // r10
  int v10; // edx
  __int64 v11; // r10
  SIZE_T v12; // rbp
  PVOID PoolWithTag; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r14
  __int64 v18; // r15
  int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v23; // [rsp+20h] [rbp-78h]
  SIZE_T v24[9]; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h]
  _QWORD *v27; // [rsp+B0h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v4 = 0LL;
  v6 = a2;
  if ( a1 )
  {
    v25 = 0;
    v9 = 0LL;
    v24[0] = 0LL;
    do
    {
      v8 = ACPIIoctlCalculateOutputBufferSizeV1(v6 + 40 * v9, v24, &v25, 1, 0);
      if ( v8 < 0 )
      {
        WPP_RECORDER_SF_DDDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          21,
          21,
          v23,
          v11,
          a1,
          *(_WORD *)(v26 + 40 * v11 + 2),
          v8);
        goto LABEL_17;
      }
      v6 = v26;
      v9 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v9 < a1 );
    v12 = v24[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v24[0], 0x4E706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v23, v12);
      return (unsigned int)v8;
    }
    v17 = 0LL;
    v18 = (__int64)PoolWithTag;
    if ( a1 )
    {
      while ( 1 )
      {
        v8 = ACPIIoctlCalculateOutputBufferV1(v6 + 40 * v17, v18, 1u);
        if ( v8 < 0 )
          break;
        LOWORD(v20) = *(_WORD *)(v18 + 2);
        if ( (unsigned __int16)v20 >= 4u )
          v20 = (unsigned __int16)v20;
        else
          v20 = 4LL;
        v6 = v26;
        v18 += v20 + 4;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= a1 )
          goto LABEL_16;
      }
      WPP_RECORDER_SF_DDDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        19,
        23,
        v23,
        v17,
        a1,
        *(_WORD *)(v26 + 40 * v17 + 2),
        v8);
    }
    else
    {
LABEL_16:
      v21 = v27;
      v8 = 0;
      *a4 = v12;
      *v21 = v4;
    }
LABEL_17:
    if ( v8 < 0 && v4 )
      ExFreePoolWithTag(v4, 0x4E706341u);
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
    return 0;
  }
  return (unsigned int)v8;
}
