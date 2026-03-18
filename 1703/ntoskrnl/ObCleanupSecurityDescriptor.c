/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x1405A2B68
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1405A2A54 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14006F530 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ObCleanupSecurityDescriptor(void *a1)
{
  BOOLEAN v1; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN v2; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  if ( RtlGetDaclSecurityDescriptor(a1, &v1, (PACL *)&P, &v2) >= 0 )
  {
    if ( v1 )
      ExFreePoolWithTag(P, 0);
  }
}
