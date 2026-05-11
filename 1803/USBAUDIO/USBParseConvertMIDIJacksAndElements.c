/*
 * XREFs of USBParseConvertMIDIJacksAndElements @ 0x1C0023618
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x1C0023730 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0021734 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseFindDescriptor @ 0x1C002178C (USBParseFindDescriptor.c)
 */

__int64 __fastcall USBParseConvertMIDIJacksAndElements(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  PUSB_COMMON_DESCRIPTOR v9; // rdi
  PUSB_COMMON_DESCRIPTOR Descriptor; // rbx
  UCHAR bLength; // cl
  __int64 v14; // [rsp+78h] [rbp+10h]

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v14 = v2;
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_BYTE *)(v3 + 4) )
  {
    v4 = 0LL;
    v5 = *(unsigned __int8 *)(v3 + 4);
    do
    {
      v6 = *(_QWORD *)(v2 + 16);
      v7 = *(_QWORD *)(v4 + v6);
      if ( *(_BYTE *)(v7 + 6) == 3 )
      {
        DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                      (unsigned __int16 *)v3,
                                      *(char **)(v4 + v6),
                                      36,
                                      7uLL);
        v9 = DescriptorInConfiguration;
        if ( DescriptorInConfiguration )
        {
          Descriptor = USBParseFindDescriptor(
                         v3,
                         DescriptorInConfiguration,
                         *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType,
                         &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength);
          if ( Descriptor )
          {
            do
            {
              if ( v1 < 0 )
                break;
              bLength = Descriptor[1].bLength;
              if ( (unsigned __int8)(bLength - 2) <= 2u )
              {
                v1 = USBParseMidiUnitMap[bLength](a1, v7, Descriptor);
                if ( v1 >= 0 )
                  Descriptor = USBParseFindDescriptor(
                                 v3,
                                 v9,
                                 *(unsigned __int16 *)&v9[2].bDescriptorType,
                                 &Descriptor->bLength + Descriptor->bLength);
              }
            }
            while ( Descriptor );
            v2 = v14;
          }
        }
      }
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v1;
}
