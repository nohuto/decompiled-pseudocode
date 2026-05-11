/*
 * XREFs of USBParseGetUnitString @ 0x1C001D8FC
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001DAB0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C001DC00 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001DE90 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001DFC0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001E200 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001E420 (USBParseExtensionUnit.c)
 *     USBParseMIDIInJack @ 0x1C001E680 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C001E770 (USBParseMIDIOutJack.c)
 *     USBParseMIDIElement @ 0x1C001E8E0 (USBParseMIDIElement.c)
 * Callees:
 *     memmove @ 0x1C0008100 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C001B7EC (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C001C674 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  bool v4; // zf
  int StringDescriptor; // edi
  unsigned __int8 *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // rcx
  char v10; // bl
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v12; // rsi
  void *v13; // rbx
  void *v14; // r14
  size_t v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2[2] == 7;
  StringDescriptor = 0;
  *a3 = 0LL;
  if ( v4 && (unsigned int)*((unsigned __int16 *)a2 + 2) - 1 <= 1 )
  {
    v7 = &a2[a2[6]];
    v8 = v7[11];
    v9 = v7 + 12;
  }
  else
  {
    v8 = *a2;
    v9 = a2 - 1;
  }
  v10 = v9[v8];
  if ( v10 )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFuLL, 0x41627845u);
    LODWORD(v18) = 0;
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v10, 1033, PoolWithTag, v17, (unsigned int *)&v18);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        v13 = *(void **)(a1 + 8);
        v18 = (__int64)ExAllocatePoolWithTag(PagedPool, (unsigned int)*v12 + 2, 0x41627845u);
        v14 = (void *)v18;
        if ( v18 )
          StringDescriptor = USBHwAllocateAndBag((PVOID *)&v18, v13);
        else
          StringDescriptor = -1073741670;
        if ( StringDescriptor >= 0 )
        {
          v15 = (unsigned int)*v12 - 2;
          memmove(v14, v12 + 2, v15);
          *a3 = v14;
          *((_WORD *)v14 + (v15 >> 1)) = 0;
        }
      }
      ExFreePool(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
