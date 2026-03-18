/*
 * XREFs of MiReferenceInPageFile @ 0x14005A494
 * Callers:
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 * Callees:
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MiComputeImagePteIndex @ 0x1400484D0 (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  char v8; // r10

  v1 = *(_QWORD *)(a1 + 200);
  if ( !v1 )
    return 0LL;
  v4 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 200));
  if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v1 + 112));
    v5 = *(_QWORD *)(a1 + 248);
    v6 = *(_QWORD *)(v1 + 96);
    if ( !v5 )
      v5 = a1 + 264;
    v7 = 48LL * *(_QWORD *)(v5 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v7);
    if ( *(_QWORD *)(v6 + 32) )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (MiFlags & 0x40000) != 0
        && (!(unsigned int)MiCanPageMove(v7)
         || (*(_DWORD *)(v1 + 92) & 0xC0000) != 0 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v7 + 16) & 2) != 0) )
      {
        *(_BYTE *)(a1 + 190) = v8 & 0xF7;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v4;
}
