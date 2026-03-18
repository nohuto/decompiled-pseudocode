/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x1C0009444
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009528 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIBuildDockExtension @ 0x1C000AEF4 (ACPIBuildDockExtension.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007AA10 (AcpiGetFullyQualifiedBiosName.c)
 *     ACPIBusIommuBusInterface @ 0x1C007CC94 (ACPIBusIommuBusInterface.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 *     PcisuppSetRoutingInfo @ 0x1C008C99C (PcisuppSetRoutingInfo.c)
 *     LinkNodeFindByName @ 0x1C008D18C (LinkNodeFindByName.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C0043C60 (AMLIGetNameSpaceObjectPath.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 a1, char **a2, char a3)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  char v9; // cl
  char *v10; // rdx
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v6 = AMLIGetNameSpaceObjectPath(a1, 0LL, &NumberOfBytes);
  if ( v6 == -1073741789 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x53706341u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = AMLIGetNameSpaceObjectPath(a1, PoolWithTag, &NumberOfBytes);
      if ( v6 >= 0 )
      {
        if ( *v8 == 92 && (a3 & 1) == 0 )
          memmove(v8, v8 + 1, (unsigned int)(NumberOfBytes - 1));
        if ( (a3 & 2) != 0 )
        {
          v9 = *v8;
          v10 = v8;
          while ( v9 )
          {
            if ( (unsigned __int8)(v9 - 97) <= 0x19u )
              *v10 = v9 - 32;
            v9 = *++v10;
          }
        }
        *a2 = v8;
      }
      else
      {
        ExFreePoolWithTag(v8, 0x53706341u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
