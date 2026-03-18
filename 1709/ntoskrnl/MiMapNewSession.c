/*
 * XREFs of MiMapNewSession @ 0x1405B43F8
 * Callers:
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiGetSystemPage @ 0x1400EE160 (MiGetSystemPage.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewSession(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *SystemPage; // rax
  __int64 v8; // rax
  unsigned __int64 PdeAddress; // rax
  int v10; // ebx
  unsigned __int64 *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r12
  __int16 v15; // r15
  __int64 v16; // rdi
  unsigned __int64 *v17; // rsi
  __int64 PfnLink; // rax
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned __int64 v22; // r13
  unsigned __int64 ValidPte; // rdi
  __int64 *v24; // rsi
  unsigned __int64 v25; // r13
  __int64 v26; // r15
  unsigned __int64 v27; // rbx
  _WORD *v28; // rax
  __int16 v29; // cx
  _WORD *v32; // [rsp+28h] [rbp-70h] BYREF
  __int16 v33; // [rsp+30h] [rbp-68h]
  unsigned __int16 v34; // [rsp+32h] [rbp-66h]
  unsigned __int64 PteAddress; // [rsp+38h] [rbp-60h]
  _QWORD v36[3]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = MiPartitionIdToPointer(a2);
  PteAddress = MiGetPteAddress(v5);
  MiInitializePageColorBase(0LL, 0, (__int64)&v32);
  v6 = 7LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v4, (__int64)&v32);
    MiSetPfnLink(SystemPage, v3);
    v3 = v8;
    --v6;
  }
  while ( v6 );
  PdeAddress = MiGetPdeAddress(qword_1403884B8);
  v10 = 3;
  v11 = v36;
  do
  {
    *v11 = PdeAddress;
    PdeAddress = MiGetPteAddress(PdeAddress);
    v11 = (unsigned __int64 *)(v12 + 8);
  }
  while ( v13 != 1 );
  v14 = 0xFFFFFFFFFLL;
  v15 = 2560;
  do
  {
    --v10;
    v16 = v3;
    v17 = (unsigned __int64 *)v36[v10];
    PfnLink = MiGetPfnLink(v3);
    *v19 = 0LL;
    v3 = PfnLink;
    if ( v10 == 2 )
    {
      *(_QWORD *)(v16 + 8) = MiGetPteAddress(qword_1403884B8);
      MiSetPageTablePfnBuddy(v16, a1, 0);
    }
    v20 = (__int64)((unsigned __int128)((v16 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v21 = (v20 >> 63) + v20;
    *v17 = MiMakeValidPte(0LL, v21, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    MiInitializePfnForOtherProcess(v21, (__int64)v17, v14, v15);
    v15 &= ~0x800u;
    v14 = v21;
  }
  while ( v10 );
  v22 = PteAddress;
  ValidPte = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v24 = (__int64 *)MiGetPteAddress(qword_1403884B8);
  v25 = v22 - (_QWORD)v24;
  do
  {
    v26 = v3;
    v3 = MiGetPfnLink(v3);
    if ( v2 < 2 )
    {
      ValidPte ^= (ValidPte ^ (((v26 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      *(_QWORD *)(v26 + 8) = MiGetPteAddress(qword_1403884B8);
      MiSetPageTablePfnBuddy(v26, a1, 0);
      *(__int64 *)((char *)v24 + v25) = ValidPte;
      if ( (unsigned __int64)v24 + v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 + v25 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
    v27 = MiMakeValidPte(0LL, (v26 + 0x58000000000LL) / 48, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v26, v24, 4u, 4);
    *v24 = v27;
    if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    ++v2;
    ++v24;
  }
  while ( v2 < 4 );
  v28 = v32;
  v29 = v33;
  ++*v32;
  return v34 | (unsigned int)(unsigned __int16)(v29 & *v28);
}
