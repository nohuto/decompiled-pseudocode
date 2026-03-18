/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140124DF0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400C06B0 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiGetWsleProtection @ 0x140128180 (MiGetWsleProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     MiUpdatePfnProtection @ 0x14026391C (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned __int64 v9; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  unsigned int updated; // r15d
  ULONG_PTR v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  BOOL v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // r14
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v27; // rcx
  unsigned __int8 WsleContents; // al
  int WsleProtection; // eax
  __int64 v30; // rcx
  char v31; // al
  __int64 PrototypePteVadLookup; // rax
  int v33; // r9d
  int v34; // eax
  __int64 v35; // r8
  unsigned __int8 v36; // [rsp+30h] [rbp-148h]
  __int64 v37; // [rsp+38h] [rbp-140h]
  int v38; // [rsp+40h] [rbp-138h]
  unsigned __int64 v40; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-120h]
  unsigned __int64 v42; // [rsp+60h] [rbp-118h]
  __int64 v43; // [rsp+68h] [rbp-110h] BYREF
  int v44; // [rsp+70h] [rbp-108h] BYREF
  __int16 v45; // [rsp+74h] [rbp-104h]
  __int64 v46; // [rsp+78h] [rbp-100h]
  __int64 v47; // [rsp+80h] [rbp-F8h]
  __int64 v48; // [rsp+88h] [rbp-F0h]

  v42 = a3;
  v5 = a2;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v9 = 0LL;
  v10 = 4;
  v11 = 0;
  updated = 1;
  v44 = 1;
  v38 = 0;
  v46 = 20LL;
  v45 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v41 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v41;
  v14 = v7 + 1280;
  v15 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = v7 + 1280;
  v16 = MiLockWorkingSetShared(v7 + 1280);
  v36 = v16;
  if ( v41 <= v15 )
  {
    do
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v9 )
          goto LABEL_6;
      }
      else if ( v9 )
      {
        MiFlushTbList((__int64)&v44, v17, v18);
        MiUnlockPageTableInternal(v14, v9);
        v16 = v36;
      }
      MiMakeSystemAddressValid(v13, (__int64)&v44, (*(_DWORD *)(v5 + 48) >> 8) & 0x3F, v16, 0);
      v9 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_6:
      v19 = MiPteInShadowRange(v13);
      if ( v19 && (unsigned int)MiPteHasShadow() && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v18 )
        {
          v20 = *(_QWORD *)(v18 + 8 * ((v13 >> 3) & 0x1FF));
          v18 = v17 | 0x20;
          if ( (v20 & 0x20) == 0 )
            v18 = v17;
          v17 = v18;
          if ( (v20 & 0x42) != 0 )
            v17 = v18 | 0x42;
        }
      }
      v40 = v17;
      if ( !v17 )
        goto LABEL_47;
      if ( (v17 & 1) != 0 )
      {
        v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFLL;
        v24 = 48 * v23 - 0x58000000000LL;
        if ( *(_WORD *)(v24 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_46;
        if ( (v22 & *(_QWORD *)(v24 + 40)) != 0 )
        {
          v25 = (__int64)((v13 << 25) - (v21 << 25)) >> 16;
          ProtoPteAddress = MiGetProtoPteAddress(a2, v25 >> 12, 0, &v43);
          v17 = 0x8000000000000000uLL;
          v27 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
          if ( v27 != ProtoPteAddress
            || (WsleContents = MiGetWsleContents(v27, v25),
                WsleProtection = MiGetWsleProtection(v25, WsleContents),
                WsleProtection != v10)
            && (WsleProtection || (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v24 + 16) != v10) )
          {
            v5 = a2;
LABEL_46:
            v14 = v37;
LABEL_47:
            if ( v9 != ((v42 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              MiFlushTbList((__int64)&v44, v17, v18);
              if ( v9 )
              {
                MiUnlockPageTableInternal(v14, v9);
                v9 = 0LL;
              }
            }
            v10 = 1;
            v15 = v13 - 8;
            v13 = v41;
            v11 = -1073741755;
            v38 = -1073741755;
            updated = 4;
            goto LABEL_51;
          }
          v31 = MiGetWsleContents(v30, v25);
          MiWriteValidPteVolatile(
            ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            0x80000000LL,
            v31 & 0x8Fu | (unsigned __int8)(16 * (updated & 7)));
          v5 = a2;
        }
        else
        {
          if ( ((*(_DWORD *)(v24 + 16) >> 5) & 0x1F) != (unsigned __int64)v10 )
            goto LABEL_46;
          updated = MiUpdatePfnProtection(v5, 48 * v23 - 0x58000000000LL, updated);
        }
        MiRevertValidPte(v5, v13, updated, v23, (__int64)&v44);
        v14 = v37;
        v13 += 8LL;
        v11 = v38;
      }
      else
      {
        if ( (v17 & 0x400) != 0 )
        {
          if ( (updated & 7) != 4 )
            goto LABEL_47;
          if ( !(unsigned int)MiIsPrototypePteVadLookup(v17) )
          {
            PrototypePteVadLookup = MiMakePrototypePteVadLookup(updated);
            v40 = PrototypePteVadLookup;
            *(_QWORD *)v13 = PrototypePteVadLookup;
            if ( v33 )
              MiWritePteShadow(v13, PrototypePteVadLookup, v18);
            goto LABEL_47;
          }
          goto LABEL_42;
        }
        if ( (v17 & 0x800) == 0 )
        {
          if ( ((v17 >> 5) & 0x1F) != v10 )
            goto LABEL_47;
LABEL_42:
          v40 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
          *(_QWORD *)v13 = v40;
          if ( v19 )
            MiWritePteShadow(v13, v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0, v18);
LABEL_44:
          v13 += 8LL;
          goto LABEL_51;
        }
        v34 = MiSetProtectionOnTransitionPte(v5, (unsigned __int64 *)v13, updated, (updated & 7) == 4);
        if ( !v34 )
          goto LABEL_44;
        if ( v34 != 2 )
          goto LABEL_47;
      }
LABEL_51:
      v16 = v36;
    }
    while ( v13 <= v15 );
  }
  MiFlushTbList((__int64)&v44, v17, v18);
  if ( v9 )
    MiUnlockPageTableInternal(v14, v9);
  MiUnlockWorkingSetShared(v14, v36, v35);
  return v11;
}
