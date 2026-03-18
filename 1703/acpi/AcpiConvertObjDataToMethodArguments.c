/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C005349C
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0054078 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C0025574 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C00256AC (ACPIIoctlCalculateOutputBufferSizeEx.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00543AC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x1C00546F8 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, SIZE_T *a4)
{
  void *v4; // rbp
  __int64 v7; // rbx
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // edx
  SIZE_T v12; // r14
  PVOID PoolWithTag; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  SIZE_T v23[9]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h]

  v25 = a2;
  v4 = 0LL;
  v7 = a2;
  if ( a1 )
  {
    v24 = 0;
    v10 = 0LL;
    v23[0] = 0LL;
    do
    {
      v9 = ACPIIoctlCalculateOutputBufferSizeEx(v7 + 40 * v10, v23, &v24, 0);
      if ( v9 < 0 )
      {
        v17 = 21;
        v18 = 21;
LABEL_9:
        WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v11, v17, v18);
        goto LABEL_17;
      }
      v7 = v25;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < a1 );
    v12 = v23[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23[0], 0x4E706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
      return (unsigned int)v9;
    }
    v19 = 0LL;
    v20 = (__int64)PoolWithTag;
    if ( a1 )
    {
      while ( 1 )
      {
        v9 = ACPIIoctlCalculateOutputBufferEx(v7 + 40 * v19, v20, 0, v16);
        if ( v9 < 0 )
          break;
        LOWORD(v21) = *(_WORD *)(v20 + 2);
        if ( (unsigned __int16)v21 >= 4u )
          v21 = (unsigned __int16)v21;
        else
          v21 = 4LL;
        v7 = v25;
        v20 += v21 + 4;
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= a1 )
          goto LABEL_16;
      }
      v18 = 23;
      v17 = 19;
      goto LABEL_9;
    }
LABEL_16:
    *a3 = v4;
    v9 = 0;
    *a4 = v12;
LABEL_17:
    if ( v9 < 0 && v4 )
      ExFreePoolWithTag(v4, 0x4E706341u);
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
    return 0;
  }
  return (unsigned int)v9;
}
