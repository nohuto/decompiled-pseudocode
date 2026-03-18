/*
 * XREFs of MiUnlockHotPatchPages @ 0x1406E1FA8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1406E15C8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     KeReservePrivilegedPages @ 0x140202724 (KeReservePrivilegedPages.c)
 *     RtlFindSetBitsEx @ 0x140252DC0 (RtlFindSetBitsEx.c)
 */

void __fastcall MiUnlockHotPatchPages(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 PteAddress; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 SetBits; // rax
  unsigned __int64 v6; // rbx

  if ( a1[3] )
  {
    v2 = *a1;
    KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v2 + 48));
    v4 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, v4);
      v6 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage((__int64 *)(PteAddress + 8 * SetBits), PteAddress + 8 * SetBits);
      v4 = v6;
      _bittestandreset64((signed __int64 *)a1[3], v6);
    }
  }
}
