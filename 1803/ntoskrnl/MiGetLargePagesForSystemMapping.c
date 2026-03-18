/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x14074D840
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiObtainSystemCharges @ 0x1400717C0 (MiObtainSystemCharges.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 */

void __fastcall MiGetLargePagesForSystemMapping(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 PteAddress; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // r14d
  unsigned __int64 v11; // rbx
  unsigned __int16 *v12; // rbx
  int v13; // r8d
  unsigned __int16 *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v3);
  v7 = v6 & (PteAddress + 8);
  if ( v5 < v7 )
  {
    v8 = *(_DWORD *)(a1 + 52);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 0;
    v11 = (__int64)(v7 - v5) >> 3;
    v16 = v11;
    if ( (v8 & 8) == 0 && *(_QWORD *)(v9 + 7528) )
    {
      if ( !(unsigned int)MiObtainSystemCharges(v9, v11, *(_DWORD *)(a1 + 48), v6) )
        return;
      *(_QWORD *)(a1 + 32) += v11;
      v10 = 1;
    }
    v12 = (unsigned __int16 *)qword_1403CB6A0;
    v13 = 0;
    v14 = (unsigned __int16 *)((char *)qword_1403CB6A0 + 2 * (unsigned __int16)KeNumberNodes);
    while ( 1 )
    {
      MiAllocateLargeZeroPages(v9, (unsigned int)&v16, v13, 4, a1, 1);
      v15 = v16;
      if ( !v16 )
        break;
      if ( ++v12 == v14 )
        break;
      v13 = *v12;
    }
    if ( v10 )
    {
      if ( v16 )
      {
        MiReturnCommit(v9, v16);
        MiReturnSystemCharges(v9, v15, *(_DWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 32) -= v15;
      }
    }
  }
}
