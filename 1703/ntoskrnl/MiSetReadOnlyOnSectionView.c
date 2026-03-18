/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x1400FA3B0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiSetProtectionOnTransitionPte @ 0x140078AD0 (MiSetProtectionOnTransitionPte.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiUpdatePfnProtection @ 0x14021C74C (MiUpdatePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int updated; // ebp
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  LONG *SharedVm; // rbx
  KIRQL v15; // al
  unsigned __int8 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v24; // rax
  _KPROCESS **v25; // r9
  unsigned __int8 v26; // cl
  unsigned int v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // rax
  volatile signed __int64 *v30; // r9
  char v31; // dl
  signed __int64 v32; // rax
  unsigned __int64 v33; // rdx
  signed __int64 v34; // rtt
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  LONG *v38; // rax
  KIRQL v39; // [rsp+30h] [rbp-138h]
  int v40; // [rsp+34h] [rbp-134h]
  __int64 PrototypePteVadLookup; // [rsp+38h] [rbp-130h] BYREF
  __int64 v42; // [rsp+40h] [rbp-128h]
  __int64 v43; // [rsp+48h] [rbp-120h]
  __int64 v44; // [rsp+50h] [rbp-118h] BYREF
  int v45; // [rsp+60h] [rbp-108h] BYREF
  __int16 v46; // [rsp+64h] [rbp-104h]
  __int64 v47; // [rsp+68h] [rbp-100h]
  __int64 v48; // [rsp+70h] [rbp-F8h]
  __int64 v49; // [rsp+78h] [rbp-F0h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  updated = 1;
  v10 = 0;
  v11 = 4;
  v40 = 0;
  v47 = 20LL;
  v45 = 1;
  v46 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v42 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v42;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = v7 + 1280;
  SharedVm = MiGetSharedVm(v7 + 1280);
  v15 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v39 = v15;
  v16 = v15;
  MiMakeSystemAddressValid(v12, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v15, 1);
  while ( v12 <= v13 )
  {
    if ( (v12 & 0xFFF) == 0 )
      MiMakeSystemAddressValid(v12, (__int64)&v45, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v16, 1);
    v18 = MI_READ_PTE_LOCK_FREE(v12);
    PrototypePteVadLookup = v18;
    v17 = v18;
    if ( !v18 )
      goto LABEL_47;
    if ( (v18 & 1) != 0 )
    {
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(&PrototypePteVadLookup);
      v22 = v21 + 48 * v20;
      if ( *(_WORD *)(v22 + 32) > 1u && (updated & 7) != 4 )
        goto LABEL_46;
      if ( (v19 & *(_QWORD *)(v22 + 40)) != 0 )
      {
        ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v12 << 25) >> 16) >> 12, 1, &v44);
        v17 = 0x8000000000000000uLL;
        if ( (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
          goto LABEL_46;
        v24 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)((__int64)(v12 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v24 & 1) != 0 )
          v26 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
        else
          v26 = 10;
        v27 = v26;
        v28 = v26 >> 4;
        if ( v27 >= 0x10 )
        {
          v17 = (unsigned __int64)*v25;
          if ( ((unsigned __int8)*v25 & 0x10) != 0 || (v17 & 8) == 0 )
          {
            if ( ((unsigned __int64)*v25 & 0x10) != 0 )
              v28 |= 8u;
          }
          else
          {
            v28 |= 0x18u;
          }
        }
        if ( v28 != v11 && (v28 || (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v22 + 16) != v11) )
        {
LABEL_46:
          v16 = v39;
LABEL_47:
          updated = 4;
          v13 = v12 - 8;
          v12 = v42;
          v10 = -1073741755;
          v40 = -1073741755;
          v11 = 1;
          continue;
        }
        v29 = MI_READ_PTE_LOCK_FREE(v25);
        if ( (v29 & 1) != 0 )
          v31 = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
        else
          v31 = 10;
        v32 = *v30;
        v33 = (unsigned __int64)(unsigned __int8)(v31 ^ (v31 ^ (16 * updated)) & 0x70) << 56;
        do
        {
          v34 = v32;
          v32 = _InterlockedCompareExchange64(v30, v33 | v32 & 0x80FFFFFFFFFFFFFFuLL, v32);
        }
        while ( v34 != v32 );
        v10 = v40;
      }
      else
      {
        if ( ((*(_DWORD *)(v22 + 16) >> 5) & 0x1F) != (unsigned __int64)v11 )
          goto LABEL_46;
        updated = MiUpdatePfnProtection(a2, v22, updated);
      }
      MiRevertValidPte(a2, v12, updated, v20, (__int64)&v45);
      v16 = v39;
      v12 += 8LL;
    }
    else
    {
      if ( (v18 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_47;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v18) )
        {
          PrototypePteVadLookup = MiMakePrototypePteVadLookup(updated);
          *(_QWORD *)v12 = PrototypePteVadLookup;
          if ( (unsigned int)MiPteInShadowRange(v12) )
            MiWritePteShadow(v35);
          goto LABEL_47;
        }
        goto LABEL_43;
      }
      if ( (v18 & 0x800) == 0 )
      {
        if ( ((v18 >> 5) & 0x1F) != v11 )
          goto LABEL_47;
LABEL_43:
        PrototypePteVadLookup = ((unsigned __int16)v17 ^ (unsigned __int16)(32 * updated)) & 0x3E0 ^ v17;
        *(_QWORD *)v12 = PrototypePteVadLookup;
        if ( (unsigned int)MiPteInShadowRange(v12) )
          MiWritePteShadow(v37);
LABEL_45:
        v12 += 8LL;
        continue;
      }
      v36 = MiSetProtectionOnTransitionPte(a2, (unsigned __int64 *)v12, updated, (updated & 7) == 4);
      if ( !v36 )
        goto LABEL_45;
      if ( v36 != 2 )
        goto LABEL_47;
    }
  }
  MiFlushTbList((__int64)&v45, (_KPROCESS *)v17);
  MiPreUnlockWorkingSetExclusive(v43, v16);
  v38 = MiGetSharedVm(v43);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38, retaddr);
  else
    *v38 = 0;
  __writecr8(v16);
  return v10;
}
