/*
 * XREFs of KiShadowProcessorAllocation @ 0x14042391C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 *     KeWriteProtectProcessorState @ 0x14042572C (KeWriteProtectProcessorState.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400AE6E0 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v5; // ebx
  PIMAGE_NT_HEADERS v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v5 = 0;
    if ( (unsigned int)MmCreateShadowMapping(a1 + 28288, 4096LL) )
    {
      v5 = 1;
      if ( *(_DWORD *)(a1 + 36) )
        return 1LL;
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                       (unsigned __int64)v6,
                       0x140000000LL,
                       (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      v8 = v7[4];
      if ( v7[2] > v8 )
        v8 = v7[2];
      if ( (unsigned int)MmCreateShadowMapping(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
        return 1LL;
    }
    MmDeleteShadowMapping(a2, 20480LL);
    if ( v5 )
      MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return 0LL;
}
