/*
 * XREFs of RaidSrbExGetBidirectionalData @ 0x1C001EA34
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0008880 (RaidUnitClaimIrp.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C00097A0 (RaidXrbSetDataBufferAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0009D88 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     StorPortGetPhysicalAddress @ 0x1C001ADD0 (StorPortGetPhysicalAddress.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002E628 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbExGetBidirectionalData(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v4; // r11d
  char v5; // bl
  __int64 i; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 2) == 40 && (*(_BYTE *)(a1 + 24) & 0xC0) == 0xC0 )
  {
    v4 = *(_DWORD *)(a1 + 56);
    v5 = 0;
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v7 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v8 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v7 <= (unsigned int)v8 )
        {
          if ( *(_DWORD *)(v7 + a1) == 1 && v7 + 24 <= v8 )
          {
            v1 = v7 + a1;
            v5 = 1;
          }
          if ( v5 )
            break;
        }
      }
    }
  }
  return v1;
}
