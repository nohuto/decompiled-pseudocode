/*
 * XREFs of MiUnlockDriverCode @ 0x140583054
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiUnlockDriverCode(__int64 a1)
{
  void *v1; // rsi
  __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // rdi
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v10; // rdx

  v1 = *(void **)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    result = MiGetSystemRegionType((unsigned __int64)v1);
    if ( (_DWORD)result != 1 )
    {
      v4 = RtlImageNtHeader(v1);
      v5 = 0;
      result = v4->FileHeader.SizeOfOptionalHeader;
      if ( v4->FileHeader.NumberOfSections )
      {
        v6 = (unsigned int *)((char *)&v4->OptionalHeader.SizeOfInitializedData + result);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = *v6;
            if ( v6[2] >= *v6 )
              v7 = v6[2];
            MiGetPteAddress(((unsigned __int64)v1 + v6[1] + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL);
            PteAddress = MiGetPteAddress(v8);
            MiUnlockCodePage(PteAddress, v10);
          }
          result = v4->FileHeader.NumberOfSections;
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)result );
      }
    }
  }
  return result;
}
