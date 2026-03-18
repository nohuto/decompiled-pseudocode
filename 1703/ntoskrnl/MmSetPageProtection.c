/*
 * XREFs of MmSetPageProtection @ 0x140135210
 * Callers:
 *     sub_140175EA0 @ 0x140175EA0 (sub_140175EA0.c)
 *     KeWriteProtectProcessorState @ 0x140412AB0 (KeWriteProtectProcessorState.c)
 *     MmAllocateIsrStack @ 0x1405A77F8 (MmAllocateIsrStack.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // r11d
  unsigned int ProtectionMask; // eax
  char v6; // si
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 ValidPte; // rbx
  _KPROCESS *v10; // rdx
  int v11; // esi
  char v12; // di
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-108h] BYREF
  int v17; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+34h] [rbp-F4h]
  int v19; // [rsp+38h] [rbp-F0h]
  int v20; // [rsp+3Ch] [rbp-ECh]
  __int64 v21; // [rsp+40h] [rbp-E8h]
  __int64 v22; // [rsp+48h] [rbp-E0h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(v4);
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0LL;
  v22 = 0LL;
  ValidPte = MiMakeValidPte(v7, 0LL, ProtectionMask | 0xA0000000);
  v19 = 20;
  MiInsertTbFlushEntry((__int64)&v17, a1, v8, 0);
  if ( v8 )
  {
    v11 = v6 & 4;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v7);
      v12 = v16;
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFLL;
      ValidPte ^= (ValidPte ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
      if ( v11 )
      {
        if ( (v12 & 0x42) != 0 )
          ValidPte |= 0x42uLL;
      }
      else if ( MiIsPfnInline(v13) )
      {
        MiLockPageAndSetDirty(v14, 0);
      }
      if ( (v12 & 0x20) != 0 )
        ValidPte |= 0x20uLL;
      MiWriteValidPteNewProtection(v7);
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  MiFlushTbList((__int64)&v17, v10);
  return 1;
}
