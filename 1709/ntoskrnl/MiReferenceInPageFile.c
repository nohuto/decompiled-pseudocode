/*
 * XREFs of MiReferenceInPageFile @ 0x1400678E4
 * Callers:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x140492E94 (MiPfExecuteReadList.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiComputeImagePteIndex @ 0x1400B6E70 (MiComputeImagePteIndex.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rsi
  char v10; // r10

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return 0LL;
  v6 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 200));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v7 = *(_QWORD *)(a1 + 248);
    v8 = *(_QWORD **)(v2 + 96);
    if ( !v7 )
      v7 = a1 + 256;
    v9 = 48LL * *(_QWORD *)(v7 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v9, a2);
    if ( *v8 )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (MiFlags & 0x40000) != 0
        && (!(unsigned int)MiCanPageMove(v9)
         || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v9 + 16) & 2) != 0) )
      {
        *(_BYTE *)(a1 + 190) = v10 & 0xF7;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v6;
}
