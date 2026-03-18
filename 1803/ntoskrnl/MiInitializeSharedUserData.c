/*
 * XREFs of MiInitializeSharedUserData @ 0x1408C7258
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvlGetSharedPageVa @ 0x140584D94 (HvlGetSharedPageVa.c)
 */

__int64 MiInitializeSharedUserData()
{
  __int64 v0; // rsi
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rdi
  char *v6; // r15
  char *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v0 = 1LL;
  v15[0] = 0xFFFFF78000000000uLL;
  SharedPageVa = HvlGetSharedPageVa();
  v15[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidPte & 1) != 0 )
    {
      v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
      if ( MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
      {
        v0 = 2LL;
        v3 = ExGenRandom(1) & 0xF;
        if ( !v3 )
          LODWORD(v3) = 15;
        qword_1403CB680 = (unsigned int)((_DWORD)v3 << 12) + 2147352576LL;
      }
    }
  }
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 8 * v0, 0x20206D4Du);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (char *)v15 - result;
    v7 = (char *)&qword_1403CB670 - result;
    do
    {
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((*(_QWORD *)((char *)v5 + (_QWORD)v6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
      ValidPte = MiMakeValidPte(v9, v8, 536870913LL, v9);
      *v5 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v5) )
        MiWritePteShadow(v11, v10, v12);
      *(_QWORD *)((char *)v5 + (_QWORD)v7) = v5;
      v13 = 48 * v8 - 0x58000000000LL;
      MiLockPageInline(v13);
      *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4);
      *(_QWORD *)(v13 + 40) |= 0x200000000000000uLL;
      *(_QWORD *)(v13 + 8) = v5;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v14);
      ++v5;
      --v0;
    }
    while ( v0 );
    return 1LL;
  }
  return result;
}
