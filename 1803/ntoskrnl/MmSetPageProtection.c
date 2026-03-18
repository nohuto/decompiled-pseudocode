/*
 * XREFs of MmSetPageProtection @ 0x1400C7020
 * Callers:
 *     sub_14019FDA0 @ 0x14019FDA0 (sub_14019FDA0.c)
 *     KeWriteProtectProcessorState @ 0x14047B720 (KeWriteProtectProcessorState.c)
 *     MmAllocateIsrStack @ 0x14062AFE4 (MmAllocateIsrStack.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int ProtectionMask; // eax
  __int64 v9; // r9
  char v10; // di
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 ValidPte; // rbx
  int v14; // edi
  char v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v21; // [rsp+20h] [rbp-108h] BYREF
  int v22; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+34h] [rbp-F4h]
  int v24; // [rsp+38h] [rbp-F0h]
  int v25; // [rsp+3Ch] [rbp-ECh]
  __int64 v26; // [rsp+40h] [rbp-E8h]
  __int64 v27; // [rsp+48h] [rbp-E0h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3, v6, v7);
  v10 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v26 = 0LL;
  v27 = 0LL;
  ValidPte = MiMakeValidPte(v11, 0LL, ProtectionMask | 0xA0000000, v9);
  v24 = 20;
  MiInsertTbFlushEntry((__int64)&v22, a1, v12, 0);
  if ( v12 )
  {
    v14 = v10 & 4;
    do
    {
      v21 = MI_READ_PTE_LOCK_FREE(v11);
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
      v17 = (v16 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
      v18 = v17;
      if ( v14 )
      {
        v17 |= 0x42uLL;
        if ( (v15 & 0x42) == 0 )
          v17 = v18;
      }
      else if ( (unsigned int)MiIsPfnInline(v16) )
      {
        MiLockPageAndSetDirty(48 * v19 - 0x58000000000LL, 0LL);
      }
      ValidPte = v17 | 0x20;
      MiWriteValidPteNewProtection(v11, ValidPte);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  MiFlushTbList(&v22);
  return 1;
}
