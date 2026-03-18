/*
 * XREFs of ACPIDevicePowerProcessBlockedItems @ 0x1C00285BC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIIsPowerRequestBlocked @ 0x1C0028654 (ACPIIsPowerRequestBlocked.c)
 */

__int64 ACPIDevicePowerProcessBlockedItems()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 *v3; // rax
  __int64 **v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rcx

  v0 = (__int64 *)AcpiPowerBlockedOnDependencyList;
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
  {
    do
    {
      v1 = (__int64 *)*v0;
      if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v0) )
      {
        v3 = (__int64 *)*v0;
        if ( *(__int64 **)(*v0 + 8) != v0 || (v4 = (__int64 **)v0[1], *v4 != v0) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (__int64)v4;
        v5 = v0[12];
        v6 = *(__int64 ***)(v5 + 8);
        if ( *v6 != (__int64 *)v5 )
          __fastfail(3u);
        *v0 = v5;
        v0[1] = (__int64)v6;
        *v6 = v0;
        *(_QWORD *)(v5 + 8) = v0;
        v0[12] = 0LL;
      }
      v0 = v1;
    }
    while ( v1 != &AcpiPowerBlockedOnDependencyList );
  }
  return 0LL;
}
