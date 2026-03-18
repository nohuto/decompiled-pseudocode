/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A17EC
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A13B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005198 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireSimulatorAcpiTable(void *a1, const void **a2)
{
  unsigned int *v2; // r14
  _BYTE *v3; // rbx
  int v5; // r12d
  void *v6; // rdi
  _BYTE *i; // r8
  _BYTE *PoolWithTag; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // ebp
  unsigned int *v13; // rdi
  unsigned int *v14; // r13
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+38h] [rbp-60h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = (unsigned int *)*a2;
  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v19 = a1;
  v6 = a1;
  while ( 1 )
  {
    RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v5);
    for ( i = v3; ; i = PoolWithTag )
    {
      v9 = OSReadRegValue(pszDest, v6, i, (unsigned int *)&NumberOfBytes);
      if ( v9 >= 0 )
        break;
      if ( v9 != -2147483643 )
      {
        ExFreePoolWithTag(v3, 0);
        return 0LL;
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706341u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    v11 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 8 )
      break;
    v12 = 0;
    do
    {
      v13 = (unsigned int *)&v3[v12];
      if ( v13[1] )
      {
        memmove((char *)*a2 + *v13, v13 + 2, v13[1]);
      }
      else
      {
        v14 = v2 + 1;
        if ( *v13 != v2[1] )
        {
          v15 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, *v13, 0x74706341u);
          v2 = v15;
          if ( !v15 )
          {
            ExFreePoolWithTag(v3, 0);
            return 3221225626LL;
          }
          v16 = *v14;
          if ( *v13 < *v14 )
            v16 = *v13;
          memmove(v15, *a2, v16);
          if ( *a2 )
            ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v2;
        }
      }
      v12 += v13[1] + 8;
    }
    while ( v12 < v11 );
    v6 = v19;
    ++v5;
  }
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    22,
    40,
    (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
    NumberOfBytes);
  ExFreePoolWithTag(v3, 0);
  return 3221225473LL;
}
