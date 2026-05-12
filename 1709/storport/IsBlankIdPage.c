/*
 * XREFs of IsBlankIdPage @ 0x1C0016968
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C0016834 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0016B24 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C0016B70 (StorInitVPDIdEnumeration.c)
 */

char __fastcall IsBlankIdPage(__int64 a1)
{
  char v1; // bl
  __int64 NextVPDIdDescriptor; // rax
  char v3; // r10
  char v4; // r11
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // r8
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( a1 )
  {
    if ( (unsigned __int8)StorInitVPDIdEnumeration(v8, a1) )
    {
LABEL_3:
      while ( 1 )
      {
        NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v8);
        if ( !NextVPDIdDescriptor )
          break;
        v5 = *(_BYTE *)(NextVPDIdDescriptor + 3);
        v6 = 0;
        v1 = v3;
        if ( v5 )
        {
          while ( (*(_BYTE *)(v6 + NextVPDIdDescriptor + 4) & 0xDF) == 0 )
          {
            v6 += v3;
            if ( v6 >= v5 )
              goto LABEL_3;
          }
          v4 = v3;
          break;
        }
      }
      if ( v1 && !v4 )
        return v3;
    }
    return 0;
  }
  return 0;
}
