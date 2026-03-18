/*
 * XREFs of MiMapNewSession @ 0x14057EF68
 * Callers:
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiGetPdeAddress @ 0x14006B954 (MiGetPdeAddress.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiGetSystemPage @ 0x140109CF0 (MiGetSystemPage.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // r14
  __int64 v5; // rbx
  unsigned __int64 *SystemPage; // rax
  unsigned __int64 PdeAddress; // rax
  __int64 v8; // rdi
  unsigned __int64 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rbx
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 ValidPte; // rbx
  unsigned int v18; // ebp
  _QWORD *v19; // rsi
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // r15
  __int64 v22; // r10
  unsigned __int64 v23; // rdi
  _WORD *v24; // rax
  _WORD *v26; // [rsp+20h] [rbp-78h] BYREF
  __int16 v27; // [rsp+28h] [rbp-70h]
  unsigned __int16 v28; // [rsp+2Ah] [rbp-6Eh]
  unsigned __int64 PteAddress; // [rsp+30h] [rbp-68h]
  _QWORD v30[3]; // [rsp+38h] [rbp-60h] BYREF

  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MiInitializePageColorBase(0LL, 0, (__int64)&v26);
  v5 = 7LL;
  do
  {
    SystemPage = (unsigned __int64 *)MiGetSystemPage(v3, (__int64)&v26);
    *SystemPage = (unsigned __int64)v4;
    v4 = SystemPage;
    --v5;
  }
  while ( v5 );
  PdeAddress = MiGetPdeAddress(qword_14036C178);
  LODWORD(v8) = 3;
  v9 = v30;
  do
  {
    *v9 = PdeAddress;
    PdeAddress = MiGetPteAddress(PdeAddress);
    v9 = (unsigned __int64 *)(v10 + 8);
  }
  while ( v11 != 1 );
  v12 = -1LL;
  do
  {
    v8 = (unsigned int)(v8 - 1);
    v13 = 0LL;
    v14 = v4;
    v4 = (unsigned __int64 *)*v4;
    if ( (_DWORD)v8 == 2 )
      v13 = a1;
    v15 = (unsigned __int64 *)v30[v8];
    *v14 = v13;
    *v15 = MiMakeValidPte(0LL, (__int64)(v14 + 0xB000000000LL) / 48, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
    if ( MiPteInShadowRange((unsigned __int64)v15) )
      MiWritePteShadow();
    MiInitializePfnForOtherProcess((__int64)(v14 + 0xB000000000LL) / 48, (__int64)v15, v12, 0);
    if ( (_DWORD)v8 == 2 )
      v14[5] |= 0xFFFFFFFFFuLL;
    MiMarkPageActive((__int64)v14);
    v12 = (__int64)(v14 + 0xB000000000LL) / 48;
  }
  while ( (_DWORD)v8 );
  v16 = PteAddress;
  ValidPte = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v18 = 0;
  v19 = (_QWORD *)MiGetPteAddress(qword_14036C178);
  v20 = v16 - (_QWORD)v19;
  do
  {
    v21 = v4;
    v4 = (unsigned __int64 *)*v4;
    v22 = (__int64)(v21 + 0xB000000000LL) / 48;
    if ( v18 < 2 )
    {
      *v21 = a1;
      ValidPte ^= (ValidPte ^ (v22 << 12)) & 0xFFFFFFFFF000LL;
      *(_QWORD *)((char *)v19 + v20) = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v19 + v20) )
        MiWritePteShadow();
    }
    v23 = MiMakeValidPte(0LL, v22, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn((__int64)v21, (__int64)v19, 4LL, 4);
    *v19 = v23;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
      MiWritePteShadow();
    ++v19;
    ++v18;
  }
  while ( v18 < 4 );
  v24 = v26;
  ++*v26;
  return v28 | (unsigned int)(unsigned __int16)(v27 & *v24);
}
