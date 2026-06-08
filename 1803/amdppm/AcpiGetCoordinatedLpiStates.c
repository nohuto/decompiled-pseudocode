/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C00259AC
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C001D450 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     Display_LPI @ 0x1C0007A08 (Display_LPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     AcpiParseProcessorContainer @ 0x1C0025BB4 (AcpiParseProcessorContainer.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // rbx
  SIZE_T v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rdi
  __int64 i; // rdi
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  unsigned int v16; // ebp
  unsigned int *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rcx
  _QWORD v24[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v5 = 32LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v5, 0x72637250u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_5;
    v6 = *(_QWORD *)(a1 + 16);
    v24[0] = 1LL;
    v24[1] = PoolWithTag;
    v24[2] = (unsigned int)v5;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           2703748LL,
           0LL,
           v24,
           0LL,
           &v25);
    v8 = v7;
    if ( v7 != -2147483643 )
      break;
    v5 = *v10;
    ExFreePoolWithTag(v10, 0);
  }
  if ( v7 >= 0 && v25 )
  {
    v16 = 40 * v10[1] + 8;
    v17 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x72637250u);
    v2 = v17;
    if ( !v17 )
    {
LABEL_5:
      v8 = -1073741670;
      goto LABEL_6;
    }
    memset(v17, 0, v16);
    v20 = v10[1];
    v21 = 0LL;
    *v2 = v20;
    if ( v10[1] )
    {
      while ( 1 )
      {
        v8 = AcpiParseProcessorContainer(v10, (unsigned int)v21, &v2[8 * v21 + 2 + 2 * (unsigned int)v21]);
        if ( v8 < 0 )
          break;
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v10[1] )
        {
          v20 = *v2;
          goto LABEL_26;
        }
      }
    }
    else
    {
LABEL_26:
      v22 = 0LL;
      if ( v20 )
      {
        do
        {
          v23 = *(_QWORD *)&v2[10 * v22 + 6];
          if ( v23 )
            Display_LPI(v23, *(const wchar_t **)&v2[10 * v22 + 4], v18, v19);
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < *v2 );
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
    for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
    {
      v12 = *(void **)&v2[10 * i + 4];
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      v13 = *(void **)&v2[10 * i + 10];
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v14 = *(void **)&v2[10 * i + 6];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v2, 0);
  }
  return (unsigned int)v8;
}
