/*
 * XREFs of ACPIValidateStringVendorDeviceIdFormat @ 0x1C0083E64
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0083A7C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092148 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092480 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIValidateStringVendorDeviceIdFormat(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // r8
  char v4; // cl
  unsigned __int8 v5; // cl
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx

  if ( a2 - 7 <= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)(v3 + a1);
      if ( (unsigned __int8)(v4 - 97) > 0x19u )
      {
        v8 = v4 - 48;
        if ( v8 > 0x2Au )
          break;
        v9 = v8;
        v10 = 0x7FFFFFE03FFLL;
        if ( !_bittest64(&v10, v9) )
          break;
      }
      if ( ++v3 >= (unsigned __int16)((a2 != 7) + 3) )
      {
        while ( v3 < a2 )
        {
          v5 = *(_BYTE *)(v3 + a1) - 48;
          if ( v5 > 0x36u )
            return 0;
          v6 = v5;
          v7 = 0x7E0000007E03FFLL;
          if ( !_bittest64(&v7, v6) )
            return 0;
          ++v3;
        }
        return 1;
      }
    }
  }
  return 0;
}
