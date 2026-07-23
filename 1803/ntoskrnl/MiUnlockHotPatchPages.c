/*
 * XREFs of MiUnlockHotPatchPages @ 0x14074CD58
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14074C3B8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140153ED0 (RtlFindSetBitsEx.c)
 *     KeReservePrivilegedPages @ 0x14023FC9C (KeReservePrivilegedPages.c)
 */

void __fastcall MiUnlockHotPatchPages(_RTL_BITMAP_EX *a1)
{
  unsigned __int64 SizeOfBitMap; // rbx
  __int64 PteAddress; // rsi
  ULONG64 v4; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v6; // rbx

  if ( a1[1].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(SizeOfBitMap + 48));
    v4 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 1, 1uLL, v4);
      v6 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits);
      v4 = v6;
      _bittestandreset64((signed __int64 *)a1[1].Buffer, v6);
    }
  }
}
