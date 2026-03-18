/*
 * XREFs of MiMapNewSession @ 0x14060B454
 * Callers:
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 * Callees:
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiGetSystemPage @ 0x14004DEB4 (MiGetSystemPage.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiWriteTopLevelPxe @ 0x140165CA8 (MiWriteTopLevelPxe.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *SystemPage; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int16 v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 PfnLink; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 ValidPte; // rdi
  unsigned int v24; // r14d
  _QWORD *v25; // rsi
  unsigned __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v35[16]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v36[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 PteAddress; // [rsp+90h] [rbp+18h]

  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MiInitializePageColorBase(0LL, 0, (__int64)v35);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)v35);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_1403CB640, v36);
  v8 = 4LL;
  v9 = 0xFFFFFFFFFLL;
  v10 = 2560;
  do
  {
    v11 = *(__int64 **)&v35[8 * v8-- + 8];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v15 = 0LL;
    v4 = PfnLink;
    if ( v8 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_1403CB640);
      MiSetPageTablePfnBuddy(v12, a1, 0);
    }
    v16 = (__int64)((unsigned __int128)((v12 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v17 = (v16 >> 63) + v16;
    v18 = MiMakeValidPte(0LL, v17, 2415919110LL, v14) & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v8 == 3 )
    {
      MiWriteTopLevelPxe(v11, v18);
    }
    else
    {
      *v11 = v18;
      if ( MiPteInShadowRange((unsigned __int64)v11) )
        MiWritePteShadow(v20, v19, v21);
    }
    MiInitializePfnForOtherProcess(v17, (__int64)v11, v9, v10);
    v10 &= ~0x800u;
    v9 = v17;
  }
  while ( v8 != 1 );
  ValidPte = MiMakeValidPte(PteAddress, 0LL, 2684354564LL, v22);
  v24 = 0;
  v25 = (_QWORD *)MiGetPteAddress(qword_1403CB640);
  v26 = PteAddress - (_QWORD)v25;
  do
  {
    v27 = v4;
    v4 = MiGetPfnLink(v4);
    if ( v24 < 3 )
    {
      ValidPte ^= (ValidPte ^ (((v27 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      *(_QWORD *)(v27 + 8) = MiGetPteAddress(qword_1403CB640);
      MiSetPageTablePfnBuddy(v27, a1, 0);
      *(_QWORD *)((char *)v25 + v26) = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v25 + v26) )
        MiWritePteShadow(v29, ValidPte, v30);
    }
    v31 = MiMakeValidPte(0LL, (v27 + 0x58000000000LL) / 48, 2147483652LL, v28) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v27, (unsigned __int64)v25, 4u, 4);
    *v25 = v31;
    if ( MiPteInShadowRange((unsigned __int64)v25) )
      MiWritePteShadow(v32, v31, v33);
    ++v24;
    ++v25;
  }
  while ( v24 < 5 );
  return MiGetNextPageColor((__int64)v35);
}
