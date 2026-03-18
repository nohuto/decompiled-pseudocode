/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x1C000D35C
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIBuildDockExtension @ 0x1C0042DA4 (ACPIBuildDockExtension.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0087CB0 (ACPIQueryDeviceBiosName.c)
 *     PcisuppSetRoutingInfo @ 0x1C008BDF4 (PcisuppSetRoutingInfo.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00A19A0 (AcpiGetFullyQualifiedBiosName.c)
 *     LinkNodeFindByName @ 0x1C00A7F48 (LinkNodeFindByName.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C000D26C (AMLIGetNameSpaceObjectPath.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 *a1, _QWORD *a2, char a3)
{
  int v6; // edi
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rbx
  _BYTE *i; // rcx
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v6 = AMLIGetNameSpaceObjectPath(a1, 0LL, &NumberOfBytes);
  if ( v6 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x53706341u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = AMLIGetNameSpaceObjectPath(a1, PoolWithTag, &NumberOfBytes);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v8, 0x53706341u);
      }
      else
      {
        if ( *v8 == 92 && (a3 & 1) == 0 )
          memmove(v8, v8 + 1, (unsigned int)(NumberOfBytes - 1));
        if ( (a3 & 2) != 0 )
        {
          for ( i = v8; *i; ++i )
          {
            if ( (unsigned __int8)(*i - 97) <= 0x19u )
              *i -= 32;
          }
        }
        *a2 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
