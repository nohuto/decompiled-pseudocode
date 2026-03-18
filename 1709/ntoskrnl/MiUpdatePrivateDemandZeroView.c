/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x140213E14
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 *ProtoPteAddress; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbp
  unsigned __int64 *v14; // rdx
  bool v15; // zf
  unsigned int v16; // r9d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v21; // rax
  int v22; // r9d
  __int64 DemandZeroPte; // rbx
  int v24; // r13d
  __int64 UsedPtesHandle; // rbp
  LONG *SharedVm; // rdi
  KIRQL v27; // al
  unsigned __int8 v28; // r12
  LONG *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-78h]
  unsigned __int64 v33; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 *v38; // [rsp+B0h] [rbp+8h]
  __int64 v41; // [rsp+C8h] [rbp+20h]

  v41 = a1 + 1280;
  v4 = 0LL;
  v5 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v6 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v32 = 0LL;
  ProtoPteAddress = (unsigned __int64 *)MiGetProtoPteAddress(a2, v5, (unsigned int)(a3 != 0) + 12, &v35);
  v38 = ProtoPteAddress;
  v8 = *(_QWORD *)(a2 + 80) + 8 * (v6 - v5);
  v33 = v8;
  v9 = v35;
  v10 = 8 * (v5 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v34 = v35;
  if ( v35 )
  {
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      v13 = v8;
      v14 = *(unsigned __int64 **)(v9 + 8);
      if ( (unsigned __int64)&v14[*(unsigned int *)(v9 + 44) - 1] <= v8 )
        v13 = (unsigned __int64)&v14[*(unsigned int *)(v9 + 44) - 1];
      v15 = (*(_BYTE *)(v9 + 34) & 2) == 0;
      v36 = v13;
      if ( v15 )
      {
        v16 = *(unsigned __int16 *)(v9 + 32);
        if ( (v16 & 8) == 0 || (v16 & 0xA) == 0xA )
        {
          v17 = *(_DWORD *)(v9 + 40);
          if ( v17 )
            v14 += ((unsigned __int64)(unsigned int)((v17 << 9) - 1) >> 12) + 1;
          if ( (unsigned __int64)v14 <= v13 )
          {
            if ( ProtoPteAddress < v14 )
            {
              v38 = v14;
              v18 = (char *)v14 - (char *)ProtoPteAddress;
              ProtoPteAddress = v14;
              v10 += 8 * (v18 >> 3);
            }
            if ( (unsigned __int64)ProtoPteAddress > v8 )
              return v4;
            v19 = 0LL;
            if ( (unsigned __int64)ProtoPteAddress <= v13 )
            {
              do
              {
                PteShadow = *ProtoPteAddress;
                if ( (unsigned __int64)ProtoPteAddress >= v11 && (unsigned __int64)ProtoPteAddress <= v12 )
                  PteShadow = MiReadPteShadow();
                if ( (PteShadow & 1) != 0 )
                {
                  LODWORD(v21) = (unsigned __int16)v16 >> 1;
                }
                else
                {
                  if ( !PteShadow )
                    break;
                  v21 = PteShadow >> 5;
                }
                if ( (v21 & 0x1F) == 0x18 )
                  break;
                v19 = (unsigned int)(v19 + 1);
                ++ProtoPteAddress;
              }
              while ( (unsigned __int64)ProtoPteAddress <= v13 );
              v8 = v33;
              v38 = ProtoPteAddress;
            }
            if ( (v16 & 0xA) != 0xA )
            {
              v4 += (unsigned int)v19;
              v32 = v4;
            }
            if ( a3 && (_DWORD)v19 )
            {
              v22 = (v16 >> 1) & 0x1F;
              if ( (v22 & 4) != 0 )
                LOBYTE(v22) = v22 & 2 | 4;
              DemandZeroPte = MiMakeDemandZeroPte(v22);
              v24 = 1;
              UsedPtesHandle = 0LL;
              SharedVm = MiGetSharedVm(v41);
              v27 = ExAcquireSpinLockExclusive(SharedVm);
              SharedVm[1] = 0;
              v28 = v27;
              do
              {
                if ( v24 || (v10 & 0xFFF) == 0 )
                {
                  MiMakeSystemAddressValid(v10, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v28, 1);
                  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v10 << 25) >> 16);
                  v24 = 0;
                }
                *(_QWORD *)v10 = DemandZeroPte;
                if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow();
                MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
                v10 += 8LL;
                LODWORD(v19) = v19 - 1;
              }
              while ( (_DWORD)v19 );
              ProtoPteAddress = v38;
              v13 = v36;
              v9 = v34;
              MiPreUnlockWorkingSetExclusive(v41, v28);
              v29 = MiGetSharedVm(v41);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
              else
                *v29 = 0;
              __writecr8(v28);
              v4 = v32;
              v8 = v33;
              v11 = 0xFFFFF6FB7DBED000uLL;
              v12 = 0xFFFFF6FB7DBED7F8uLL;
            }
            else
            {
              v10 += 8 * v19;
            }
          }
        }
      }
      v30 = 8LL * (unsigned int)((__int64)(v13 - (_QWORD)ProtoPteAddress + 8) >> 3);
      ProtoPteAddress = (unsigned __int64 *)((char *)ProtoPteAddress + v30);
      v10 += v30;
      v38 = ProtoPteAddress;
      if ( (unsigned __int64)ProtoPteAddress <= v8 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        v34 = v9;
        v35 = v9;
        if ( v9 )
          continue;
      }
      return v4;
    }
  }
  return v4;
}
