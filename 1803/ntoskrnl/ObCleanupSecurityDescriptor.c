/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x14061CE30
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14061CB80 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14061CD1C (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14006CDC0 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
