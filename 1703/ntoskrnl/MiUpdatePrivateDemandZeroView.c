/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x14020CE14
 * Callers:
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // r9d
  __int64 DemandZeroPte; // rbx
  int v22; // r13d
  __int64 UsedPtesHandle; // rbp
  LONG *SharedVm; // rdi
  KIRQL v25; // al
  unsigned __int8 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  LONG *v30; // rax
  __int64 v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-78h]
  unsigned __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 v39; // [rsp+B0h] [rbp+8h]
  __int64 v42; // [rsp+C8h] [rbp+20h]

  v42 = a1 + 1280;
  v4 = 0LL;
  v5 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v6 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v33 = 0LL;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v5, (a3 != 0) + 12, &v36);
  v39 = ProtoPteAddress;
  v8 = *(_QWORD *)(a2 + 80) + 8 * (v6 - v5);
  v34 = v8;
  v9 = v36;
  v10 = 8 * (v5 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v35 = v36;
  if ( v36 )
  {
    while ( 1 )
    {
      v11 = v8;
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 + 8 * (*(unsigned int *)(v9 + 44) - 1LL) <= v8 )
        v11 = v12 + 8 * (*(unsigned int *)(v9 + 44) - 1LL);
      v13 = (*(_BYTE *)(v9 + 34) & 2) == 0;
      v37 = v11;
      if ( v13 )
      {
        v14 = *(unsigned __int16 *)(v9 + 32);
        if ( (v14 & 8) == 0 || (v14 & 0xA) == 0xA )
        {
          v15 = *(_DWORD *)(v9 + 40);
          if ( v15 )
            v12 += 8 * ((unsigned __int64)(unsigned int)((v15 << 9) - 1) >> 12) + 8;
          if ( v12 <= v11 )
          {
            if ( ProtoPteAddress < v12 )
            {
              v39 = v12;
              v16 = v12 - ProtoPteAddress;
              ProtoPteAddress = v12;
              v10 += 8 * (v16 >> 3);
            }
            if ( ProtoPteAddress > v8 )
              return v4;
            v17 = 0LL;
            if ( ProtoPteAddress <= v11 )
            {
              do
              {
                v18 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
                if ( (v18 & 1) != 0 )
                {
                  LODWORD(v19) = v14 >> 1;
                }
                else
                {
                  if ( !v18 )
                    break;
                  v19 = v18 >> 5;
                }
                if ( (v19 & 0x1F) == 0x18 )
                  break;
                v17 = (unsigned int)(v17 + 1);
                ProtoPteAddress += 8LL;
              }
              while ( ProtoPteAddress <= v11 );
              v8 = v34;
              v39 = ProtoPteAddress;
            }
            if ( (v14 & 0xA) != 0xA )
            {
              v4 += (unsigned int)v17;
              v33 = v4;
            }
            if ( a3 && (_DWORD)v17 )
            {
              v20 = (v14 >> 1) & 0x1F;
              if ( (v20 & 4) != 0 )
                LOBYTE(v20) = v20 & 2 | 4;
              DemandZeroPte = MiMakeDemandZeroPte(v20);
              v22 = 1;
              UsedPtesHandle = 0LL;
              SharedVm = MiGetSharedVm(v42);
              v25 = ExAcquireSpinLockExclusive(SharedVm);
              SharedVm[1] = 0;
              v26 = v25;
              do
              {
                if ( v22 || (v10 & 0xFFF) == 0 )
                {
                  MiMakeSystemAddressValid(v10, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v26, 1);
                  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v10 << 25) >> 16, v27, v28, v29);
                  v22 = 0;
                }
                *(_QWORD *)v10 = DemandZeroPte;
                if ( MiPteInShadowRange(v10) )
                  MiWritePteShadow();
                MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
                v10 += 8LL;
                LODWORD(v17) = v17 - 1;
              }
              while ( (_DWORD)v17 );
              ProtoPteAddress = v39;
              v11 = v37;
              v9 = v35;
              MiPreUnlockWorkingSetExclusive(v42, v26);
              v30 = MiGetSharedVm(v42);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
              else
                *v30 = 0;
              __writecr8(v26);
              v4 = v33;
              v8 = v34;
            }
            else
            {
              v10 += 8 * v17;
            }
          }
        }
      }
      v31 = 8LL * (unsigned int)((__int64)(v11 - ProtoPteAddress + 8) >> 3);
      ProtoPteAddress += v31;
      v10 += v31;
      v39 = ProtoPteAddress;
      if ( ProtoPteAddress <= v8 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        v35 = v9;
        v36 = v9;
        if ( v9 )
          continue;
      }
      return v4;
    }
  }
  return v4;
}
