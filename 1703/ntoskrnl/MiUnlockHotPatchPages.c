/*
 * XREFs of MiUnlockHotPatchPages @ 0x1406B5D94
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1406B5468 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     RtlFindSetBitsEx @ 0x14013E9A0 (RtlFindSetBitsEx.c)
 *     KeReservePrivilegedPages @ 0x1401FC9DC (KeReservePrivilegedPages.c)
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
