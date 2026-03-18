/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x140262E50
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140731088 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407318B0 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x140731AC4 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerBlockGetValueOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  size_t *v4; // r11
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 6), a3 - 6, &pcbLength);
  if ( result >= 0 )
  {
    if ( pcbLength + 8 < pcbLength )
    {
      return pcbLength + 8 < pcbLength ? 0xC0000095 : 0;
    }
    else
    {
      *v4 = (pcbLength + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0;
    }
  }
  return result;
}
