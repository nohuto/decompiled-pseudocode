/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C0029548
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002C494 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     Display_LPI @ 0x1C0009F84 (Display_LPI.c)
 *     AcpiParseProcessorContainer @ 0x1C0029FDC (AcpiParseProcessorContainer.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  SIZE_T v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rdi
  __int64 j; // rdi
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  unsigned int v16; // ebp
  _DWORD *v17; // rax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbp
  __int64 i; // rbp
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v5 = 32LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v5, 0x72637250u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_5;
    v6 = *(_QWORD *)(a1 + 16);
    v23[0] = 1LL;
    v23[1] = PoolWithTag;
    v23[2] = (unsigned int)v5;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           2703748LL,
           0LL,
           v23,
           0LL,
           &v24);
    v8 = v7;
    if ( v7 != -2147483643 )
      break;
    v5 = *v10;
    ExFreePoolWithTag(v10, 0);
  }
  if ( v7 >= 0 && v24 )
  {
    v16 = 40 * v10[1] + 8;
    v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x72637250u);
    v2 = v17;
    if ( !v17 )
    {
LABEL_5:
      v8 = -1073741670;
      goto LABEL_6;
    }
    memset(v17, 0, v16);
    v20 = 0LL;
    *v2 = v10[1];
    if ( v10[1] )
    {
      while ( 1 )
      {
        v8 = AcpiParseProcessorContainer(v10, (unsigned int)v20, &v2[8 * v20 + 2 + 2 * (unsigned int)v20]);
        if ( v8 < 0 )
          break;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v10[1] )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
      {
        v22 = *(_QWORD *)&v2[10 * i + 6];
        if ( v22 )
          Display_LPI(v22, *(_QWORD *)&v2[10 * i + 4], v18, v19);
      }
      *a2 = v2;
      v2 = 0LL;
    }
  }
LABEL_6:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v2 )
  {
    for ( j = 0LL; (unsigned int)j < *v2; j = (unsigned int)(j + 1) )
    {
      v12 = *(void **)&v2[10 * j + 4];
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      v13 = *(void **)&v2[10 * j + 10];
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v14 = *(void **)&v2[10 * j + 6];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v2, 0);
  }
  return (unsigned int)v8;
}
