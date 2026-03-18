/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1402520D8
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // rbp
  __int64 UsedPtesHandle; // rdi
  __int64 DemandZeroPte; // rbx
  unsigned __int8 v25; // r13
  __int64 v26; // r8
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-78h]
  unsigned __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  unsigned __int8 v38; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+C8h] [rbp+20h]

  v3 = a1 + 1280;
  v5 = 0LL;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v33 = 0LL;
  v7 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  ProtoPteAddress = MiGetProtoPteAddress(a2, v6, 6, &v36);
  v41 = ProtoPteAddress;
  v9 = *(_QWORD *)(a2 + 80) + 8 * (v7 - v6);
  v34 = v9;
  v10 = v36;
  v11 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    v35 = v10;
    if ( !v10 )
      return v5;
    v12 = v9;
    v13 = *(_QWORD *)(v10 + 8);
    if ( v13 + 8 * (*(unsigned int *)(v10 + 44) - 1LL) <= v9 )
      v12 = v13 + 8 * (*(unsigned int *)(v10 + 44) - 1LL);
    v14 = (*(_BYTE *)(v10 + 34) & 2) == 0;
    v37 = v12;
    if ( v14 )
    {
      v15 = *(unsigned __int16 *)(v10 + 32);
      if ( (v15 & 8) == 0 || (v15 & 0xA) == 0xA )
      {
        v16 = *(_DWORD *)(v10 + 40);
        if ( v16 )
          v13 += 8 * ((unsigned __int64)(unsigned int)((v16 << 9) - 1) >> 12) + 8;
        if ( v13 <= v12 )
          break;
      }
    }
LABEL_42:
    v31 = 8LL * (unsigned int)((__int64)(v12 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v31;
    v11 += v31;
    v41 = ProtoPteAddress;
    if ( ProtoPteAddress > v9 )
      return v5;
    v10 = *(_QWORD *)(v10 + 16);
    v36 = v10;
  }
  if ( ProtoPteAddress < v13 )
  {
    v41 = v13;
    v17 = v13 - ProtoPteAddress;
    ProtoPteAddress = v13;
    v11 += 8 * (v17 >> 3);
  }
  if ( ProtoPteAddress <= v9 )
  {
    v18 = 0LL;
    if ( ProtoPteAddress <= v12 )
    {
      do
      {
        v19 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
        if ( (v19 & 1) != 0 )
        {
          LODWORD(v20) = (unsigned __int16)v15 >> 1;
        }
        else
        {
          if ( !v19 )
            break;
          v20 = v19 >> 5;
        }
        if ( (v20 & 0x1F) == 0x18 )
          break;
        v18 = (unsigned int)(v18 + 1);
        ProtoPteAddress += 8LL;
      }
      while ( ProtoPteAddress <= v12 );
      v9 = v34;
      v41 = ProtoPteAddress;
    }
    if ( (v15 & 0xA) != 0xA )
    {
      v5 += (unsigned int)v18;
      v33 = v5;
    }
    if ( !a3 || !(_DWORD)v18 )
    {
      v11 += 8 * v18;
      goto LABEL_42;
    }
    v21 = (v15 >> 1) & 0x1F;
    if ( (v21 & 4) != 0 )
      LOBYTE(v21) = v21 & 2 | 4;
    v22 = 0LL;
    UsedPtesHandle = 0LL;
    DemandZeroPte = MiMakeDemandZeroPte(v21);
    v25 = MiLockWorkingSetShared(v3);
    v38 = v25;
    while ( 1 )
    {
      if ( !v22 )
        goto LABEL_31;
      if ( (v11 & 0xFFF) == 0 )
        break;
LABEL_35:
      *(_QWORD *)v11 = DemandZeroPte;
      if ( MiPteInShadowRange(v11) )
        MiWritePteShadow(v28, DemandZeroPte, v29);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      v11 += 8LL;
      LODWORD(v18) = v18 - 1;
      if ( !(_DWORD)v18 )
      {
        ProtoPteAddress = v41;
        v12 = v37;
        v10 = v35;
        if ( v22 )
          MiUnlockPageTableInternal(v3, v22);
        MiUnlockWorkingSetShared(v3, v38, v30);
        v9 = v34;
        v5 = v33;
        goto LABEL_42;
      }
    }
    MiUnlockPageTableInternal(v3, v22);
LABEL_31:
    if ( (unsigned int)MiWorkingSetIsContended(v3) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v3, v25, v26);
      MiLockWorkingSetShared(v3);
    }
    MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v25, 0);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
    v22 = v27 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
    goto LABEL_35;
  }
  return v5;
}
