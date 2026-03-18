/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x1C000DE4C
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000DA00 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToHardwareID @ 0x1C004E700 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000E298 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToName @ 0x1C000E2C4 (ACPIAmliDoubleToName.c)
 *     ACPIGetProcessorIDWide @ 0x1C002637C (ACPIGetProcessorIDWide.c)
 *     RtlStringCchCopyNA @ 0x1C0027174 (RtlStringCchCopyNA.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  char v6; // r12
  char *v7; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  int v14; // r14d
  unsigned int v15; // r13d
  char *v16; // rax
  char *v17; // rsi
  int v18; // ebx
  __int64 v20; // rbx
  char *PoolWithTag; // rax
  int v22; // eax
  __int64 v23; // rbx
  char *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  if ( (a4 & 0x4000000) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & 0x1000000000LL) != 0 )
    {
      v18 = ACPIGetProcessorIDWide(0, a2, a3, a4, (__int64)&v24, (__int64)&v25);
      if ( v18 >= 0 )
      {
        v14 = v25;
        v17 = v24;
        goto LABEL_10;
      }
      return (unsigned int)v18;
    }
    if ( (v11 & 0x800000000000LL) != 0 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + v20) );
      v12 = v20 - 4;
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                              v12,
                              0x53706341u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v12);
        v6 = 1;
        RtlStringCchCopyNA(v7, v12, (STRSAFE_PCNZCH)(*(_QWORD *)(a1 + 560) + 5LL), v12 - 1);
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v12 = 8;
    v7 = (char *)ExAllocatePoolWithTag(
                   (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                   8uLL,
                   0x53706341u);
    if ( v7 )
    {
      *(_QWORD *)v7 = 0LL;
      v6 = 1;
      ACPIAmliDoubleToName(v7, *(unsigned int *)(a3 + 16));
LABEL_8:
      v13 = 2 * v12 + 7;
      v14 = 2 * v13;
      v15 = 2 * v13;
      v16 = (char *)ExAllocatePoolWithTag(
                      (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                      2 * v13,
                      0x53706341u);
      v17 = v16;
      if ( !v16 )
      {
        v18 = -1073741670;
LABEL_13:
        if ( v6 == 1 )
          ExFreePoolWithTag(v7, 0);
        return (unsigned int)v18;
      }
      memset(v16, 0, v15);
      RtlStringCchPrintfA(v17, v13, "ACPI\\%s", v7);
      RtlStringCchPrintfA(&v17[v12 + 5], v13 - (v12 + 5), "*%s", v7);
      ACPIAnsiStringToWideHelper(v17, v15);
LABEL_10:
      *a5 = v17;
      if ( a6 )
        *a6 = v14;
      v18 = 0;
      goto LABEL_13;
    }
    return (unsigned int)-1073741670;
  }
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v22 = *(_DWORD *)(a3 + 24);
  v7 = *(char **)(a3 + 32);
  if ( v22 )
  {
    if ( *v7 == 42 )
    {
      ++v7;
      --v22;
    }
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v7[v23] );
      v12 = v23 + 1;
      goto LABEL_8;
    }
  }
  return 3221225485LL;
}
