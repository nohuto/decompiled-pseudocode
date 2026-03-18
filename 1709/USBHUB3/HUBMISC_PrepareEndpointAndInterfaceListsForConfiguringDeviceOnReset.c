/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x1C0028E48
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C0019650 (HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 i; // rdx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v1 + 16) - 8LL;
  v4 = *(_QWORD *)(a1 + 136);
  if ( v1 != *(_QWORD *)(v1 + 16) - 16LL )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 28) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v3 + 28), 2u);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 24); i = (unsigned int)(i + 1) )
      {
        v6 = *(_QWORD *)(v3 + 72 * i + 40);
        if ( (*(_DWORD *)(v3 + 72 * i + 52) & 1) != 0 )
        {
          *(_DWORD *)(v3 + 72 * i + 48) = 6;
          *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v6;
        }
        else
        {
          *(_DWORD *)(v3 + 72 * i + 48) = 3;
          *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v6;
        }
      }
      v3 = *(_QWORD *)(v3 + 8) - 8LL;
    }
    while ( *(_QWORD *)(a1 + 48) != v3 - 8 );
  }
  return 4077LL;
}
