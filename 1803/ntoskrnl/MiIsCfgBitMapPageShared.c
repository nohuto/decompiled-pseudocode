/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x14003DC60
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int16 *v5; // r15
  unsigned __int8 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // edi
  unsigned __int16 *AnyMultiplexedVm; // rsi
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  bool v22; // zf
  __int64 PrototypePteDirect; // rax
  __int64 v24; // r9
  __int64 v26; // [rsp+20h] [rbp-118h] BYREF
  __int64 v27; // [rsp+28h] [rbp-110h] BYREF
  __int64 v28; // [rsp+30h] [rbp-108h]
  __int64 v29; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v30[22]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v6 = MiLockWorkingSetShared((__int64)v5);
  v27 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  LODWORD(v30[0]) = 2145;
  v7 = (__int64)(v4 << 25) >> 16;
  LeafVa = MiGetLeafVa(v7);
  v9 = 1;
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_1403CD100 && LeafVa <= qword_1403CBB70 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  if ( (unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v7) )
  {
    v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    LODWORD(v30[0]) |= 4u;
    v30[21] = &v27;
    v30[2] = 0LL;
    v30[20] = MiGetNextPageTableTail;
    BYTE2(v30[1]) = 1;
    v30[3] = AnyMultiplexedVm;
    BYTE4(v30[0]) = v6;
    v30[4] = (__int64)(v4 << 25) >> 16;
    v30[5] = v30[4];
    MiWalkPageTables((int *)v30);
    v12 = v28;
  }
  if ( v4 != v12 )
  {
    v9 = 3;
    goto LABEL_33;
  }
  v13 = *(_QWORD *)v4;
  if ( MiPteInShadowRange(v4)
    && (unsigned int)MiPteHasShadow(v15, v14, v11, v16)
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v17 )
    {
      v18 = v13 | 0x20;
      v19 = *(_QWORD *)(v17 + 8 * ((v4 >> 3) & 0x1FF));
      if ( (v19 & 0x20) == 0 )
        v18 = v13;
      v13 = v18;
      if ( (v19 & 0x42) != 0 )
        v13 = v18 | 0x42;
    }
  }
  v26 = v13;
  if ( !v13 )
  {
    v9 = 2;
    goto LABEL_31;
  }
  MiGetProtoPteAddress(a2, a1 >> 12, 0, &v29);
  if ( (v13 & 1) != 0 )
  {
    v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
    {
      v22 = (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) == v21;
      goto LABEL_29;
    }
  }
  else if ( (v13 & 0x400) != 0 )
  {
    if ( (unsigned int)MiIsPrototypePteVadLookup(v13) )
      goto LABEL_31;
    PrototypePteDirect = MiGetPrototypePteDirect(v13);
    v22 = v24 == PrototypePteDirect;
LABEL_29:
    if ( v22 )
      goto LABEL_31;
  }
  v9 = 0;
LABEL_31:
  if ( ((v4 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal(v5, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_33:
  MiUnlockWorkingSetShared((__int64)v5, v6, v11);
  return v9;
}
