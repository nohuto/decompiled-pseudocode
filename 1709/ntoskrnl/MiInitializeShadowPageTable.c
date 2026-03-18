/*
 * XREFs of MiInitializeShadowPageTable @ 0x14043CFEC
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14043D2B4 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x14017C11C (MiMarkPxeAsShadowed.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017C214 (MiReadWriteAnyLevelShadowPte.c)
 */

unsigned __int64 __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 PteShadow; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 *PteAddress; // rax
  int v11; // edx
  int v12; // r14d
  int v13; // edx
  int v14; // r12d
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned int v19; // r12d
  int v20; // r8d
  unsigned __int64 v21; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( a3 )
  {
    v14 = 6;
    *a2 = 0LL;
    v12 = 3;
    v8 = (__int64)(a2 + 0xB000000000LL) / 48;
    if ( a3 == 3 )
    {
      v18 = -1LL;
      goto LABEL_25;
    }
  }
  else
  {
    v5 = (__int64)(a1 << 25) >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
    {
      v9 = v4;
      do
      {
        PteAddress = (__int64 *)MiGetPteAddress(v9);
        v9 = (unsigned __int64)PteAddress;
      }
      while ( v11 != 1 );
      PteShadow = *PteAddress;
      if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow();
      }
      v8 = MiVaToPfn(v5);
    }
    else
    {
      PteShadow = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v23 = PteShadow;
      v7 = PteShadow;
      if ( (unsigned __int64)&v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v23 <= 0xFFFFF6FB7DBED7F8uLL )
        v7 = MiReadPteShadow();
      v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
    }
    v12 = 3;
    v13 = (PteShadow & 0x800) != 0 ? 4 : 1;
    v14 = v13 | 2;
    if ( PteShadow < 0 )
      v14 = v13;
  }
  v15 = MiGetPteAddress(v4);
  v17 = MiReadWriteAnyLevelShadowPte(v15, v16, 0, ZeroPte);
  v23 = v17;
  if ( (unsigned __int64)&v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v23 <= 0xFFFFF6FB7DBED7F8uLL )
    v17 = MiReadPteShadow();
  v18 = (v17 >> 12) & 0xFFFFFFFFFLL;
LABEL_25:
  v19 = v14 | 0x90000000;
  v20 = v19 | 0x8000000;
  if ( !a3 )
    v20 = v19;
  v21 = MiMakeValidPte(v4, v8, v20) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v18 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, v4, v18, 2560);
  }
  result = MiReadWriteAnyLevelShadowPte(v4, a3, 1, v21);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v4);
    do
    {
      v4 = (__int64)(v4 << 25) >> 16;
      --v12;
    }
    while ( v12 );
    return MiReplicatePteChange(v4, v4);
  }
  return result;
}
