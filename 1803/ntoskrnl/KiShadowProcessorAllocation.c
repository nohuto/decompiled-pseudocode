/*
 * XREFs of KiShadowProcessorAllocation @ 0x14047C088
 * Callers:
 *     KeWriteProtectProcessorState @ 0x14047B720 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14013D7A0 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v4; // ebx
  PIMAGE_NT_HEADERS v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v4 = 0;
    if ( (unsigned int)MmCreateShadowMapping(a1 + 28288, 4096LL) )
    {
      v4 = 1;
      if ( *(_DWORD *)(a1 + 36) )
        return 1LL;
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                       (unsigned __int64)v6,
                       0x140000000LL,
                       (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      v8 = v7[2];
      if ( v8 <= v7[4] )
        v8 = v7[4];
      if ( (unsigned int)MmCreateShadowMapping(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
        return 1LL;
    }
    MmDeleteShadowMapping(a2, 20480LL);
    if ( v4 )
      MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return 0LL;
}
