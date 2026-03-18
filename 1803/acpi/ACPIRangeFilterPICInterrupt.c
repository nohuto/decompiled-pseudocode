/*
 * XREFs of ACPIRangeFilterPICInterrupt @ 0x1C00371EC
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRangeFilterPICInterrupt(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // r9d

  if ( a1 )
  {
    v2 = a1 + 32;
    v3 = 0;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v2 + 4);
        v5 = 0;
        if ( v4 )
          break;
LABEL_14:
        ++v3;
        v2 += 32 * v4 + 8;
        if ( v3 >= *(_DWORD *)(a1 + 28) )
          return 0LL;
      }
      while ( 1 )
      {
        v6 = 32LL * v5;
        if ( *(_BYTE *)(v6 + v2 + 9) == 2 )
        {
          v7 = *(_DWORD *)(v6 + v2 + 16);
          v8 = *(_DWORD *)(v6 + v2 + 20);
          if ( v7 == 2 )
          {
            if ( v8 != 2 )
              goto LABEL_12;
            *(_BYTE *)(v6 + v2 + 9) = 0;
          }
          else
          {
            if ( v8 != 2 )
            {
              if ( v7 >= 2 || v8 <= 2 )
                goto LABEL_13;
LABEL_12:
              *(_DWORD *)(v6 + v2 + 16) = 3;
              goto LABEL_13;
            }
            *(_DWORD *)(v6 + v2 + 20) = 1;
          }
        }
LABEL_13:
        v4 = *(_DWORD *)(v2 + 4);
        if ( ++v5 >= v4 )
          goto LABEL_14;
      }
    }
  }
  return 0LL;
}
