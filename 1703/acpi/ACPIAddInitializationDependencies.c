/*
 * XREFs of ACPIAddInitializationDependencies @ 0x1C0008D68
 * Callers:
 *     ACPIBuildFilter @ 0x1C0006ECC (ACPIBuildFilter.c)
 *     ACPIBuildPdo @ 0x1C00089D4 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C002A314 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIReserveDependencies @ 0x1C00450A0 (ACPIReserveDependencies.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008E2C4 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIAddInitializationDependencies(__int64 a1)
{
  int v2; // edi
  char v3; // cl
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v10 = 0LL;
  v3 = 0;
  P = 0LL;
  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    if ( *(_QWORD *)(a1 + 600) )
    {
      v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(a1 + 712));
      if ( v2 < 0 )
        return (unsigned int)v2;
      if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0x4F706341u);
        *(_QWORD *)(a1 + 600) = 0LL;
      }
      v3 = 1;
    }
    v4 = 0;
    v5 = a1 + 360;
    do
    {
      if ( *(_QWORD *)v5 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
        if ( *(_QWORD *)(v8 + 96) )
        {
          v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(v8 + 32));
          if ( v2 < 0 )
            return (unsigned int)v2;
          v3 = 1;
        }
      }
      ++v4;
      v5 += 8LL;
    }
    while ( v4 <= 4 );
    v6 = *(_QWORD *)(a1 + 400);
    if ( v6 )
    {
      v9 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v9 + 96) )
      {
        v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 736), *(_QWORD *)(v9 + 32));
        if ( v2 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
    if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 && *(_QWORD *)(a1 + 920) )
    {
      v2 = ACPIReserveDependencies(*(_QWORD *)(a1 + 736));
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = 1;
    }
    if ( v3 )
      _InterlockedOr64((volatile signed __int64 *)(a1 + 952), 0x40uLL);
    v2 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v10);
    if ( v2 >= 0 )
      v2 = IoResolveDependency(&v10, *(_QWORD *)(a1 + 736));
    if ( P )
      ExFreePoolWithTag(P, 0x53706341u);
  }
  return (unsigned int)v2;
}
