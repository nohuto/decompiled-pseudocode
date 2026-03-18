/*
 * XREFs of MmSetPageProtection @ 0x140139650
 * Callers:
 *     sub_140175620 @ 0x140175620 (sub_140175620.c)
 *     KeWriteProtectProcessorState @ 0x14042572C (KeWriteProtectProcessorState.c)
 *     MmAllocateIsrStack @ 0x1405B7620 (MmAllocateIsrStack.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // bp
  unsigned __int64 *v8; // r14
  __int64 v9; // r15
  __int64 ValidPte; // rsi
  _KPROCESS *v11; // rdx
  int v12; // ebp
  __int64 PteShadow; // rdi
  unsigned __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  int v20; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+34h] [rbp-F4h]
  int v22; // [rsp+38h] [rbp-F0h]
  int v23; // [rsp+3Ch] [rbp-ECh]
  __int64 v24; // [rsp+40h] [rbp-E8h]
  __int64 v25; // [rsp+48h] [rbp-E0h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v8 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v24 = 0LL;
  v25 = 0LL;
  ValidPte = MiMakeValidPte((unsigned __int64)v8, 0LL, ProtectionMask | 0xA0000000);
  v22 = 20;
  MiInsertTbFlushEntry(&v20, a1, v9, 0);
  if ( v9 )
  {
    v12 = v7 & 4;
    do
    {
      PteShadow = *v8;
      if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v8, *v8);
      v19 = PteShadow;
      v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
      v15 = ValidPte ^ (ValidPte ^ (v14 << 12)) & 0xFFFFFFFFF000LL;
      if ( v12 )
      {
        v16 = v15 | 0x42;
        if ( (PteShadow & 0x42) == 0 )
          v16 = ValidPte ^ (ValidPte ^ (v14 << 12)) & 0xFFFFFFFFF000LL;
        v15 = v16;
      }
      else if ( MiIsPfnInline(v14) )
      {
        MiLockPageAndSetDirty(48 * v17 - 0x58000000000LL, 0);
      }
      ValidPte = v15 | 0x20;
      if ( (PteShadow & 0x20) == 0 )
        ValidPte = v15;
      MiWriteValidPteNewPage(v8++, ValidPte);
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((__int64)&v20, v11);
  return 1;
}
