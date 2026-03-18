/*
 * XREFs of RtlMarkHiberPhase @ 0x14013ED00
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     PopSetRange @ 0x14013F13C (PopSetRange.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void RtlMarkHiberPhase()
{
  ULONG_PTR v0; // r15
  ULONG_PTR v1; // rax
  unsigned __int64 v2; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // rsi
  PHYSICAL_ADDRESS v5; // r12
  __int64 j; // rdi

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v0 = qword_14034B1C0;
    if ( !qword_14034B1C0 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v1 = *(unsigned int *)(qword_14034B1C0 + 184);
    if ( (_DWORD)v1 == 8 )
    {
      v2 = ((unsigned __int64)L"Seconds" + 1) >> 12;
      for ( i = (unsigned __int64)&XpressHashFunction >> 12; i < v2; i += j )
      {
        v4 = i + 1;
        v5.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(i << 12)).QuadPart >> 12;
        for ( j = 1LL; v4 < v2; ++v4 )
        {
          if ( v4 + v5.QuadPart - i != (unsigned __int64)MmGetPhysicalAddress((PVOID)((i << 12) + (j << 12))).QuadPart >> 12 )
            break;
          ++j;
        }
        PopSetRange(v0, 0x10000);
      }
    }
    else if ( (_DWORD)v1 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v1, 0LL);
    }
  }
  PoSetHiberRange(0LL, 0x10000u, &XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
