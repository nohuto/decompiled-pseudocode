/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x140297D48
 * Callers:
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x140298150 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1402981C0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegSetExtraPresent @ 0x140299200 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x140298038 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 DescriptorValidateSafe; // rdx

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe();
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) != 0 )
  {
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
      return 0LL;
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0
      || (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) == 0
      || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) < 8 )
    {
      return 0LL;
    }
  }
  return DescriptorValidateSafe;
}
