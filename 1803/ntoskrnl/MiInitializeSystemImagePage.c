/*
 * XREFs of MiInitializeSystemImagePage @ 0x1408ADBC0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 */

struct _KTHREAD *__fastcall MiInitializeSystemImagePage(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v5; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  BOOL v11; // r12d
  __int64 v12; // r9
  struct _KTHREAD *result; // rax
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = MI_READ_PTE_LOCK_FREE(a3);
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  v7 = (*(_DWORD *)(v6 + 16) >> 5) & 0x1F;
  *(_QWORD *)a2 = MiMakeDemandZeroPte((*(_DWORD *)(v6 + 16) >> 5) & 0x1F);
  v11 = MiPteInShadowRange(a2);
  if ( v11 )
    MiWritePteShadow(v9, v8, v10);
  MiInitializePfn(48 * a1 - 0x58000000000LL, a2, v7, 0);
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v15 = (unsigned __int64)((__int64)(a2 << 25) >> 16);
    KeSetPagePrivilege(a1, &v15, 256);
    if ( ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 3 )
      MiMarkPfnVerified(48 * a1 - 0x58000000000LL, 0);
  }
  else
  {
    MiCopyPage(a1, v5, 0LL, 1);
  }
  result = (struct _KTHREAD *)MiMakeValidPte(a2, a1, v7 | 0xA0000000, v12);
  v16 = (__int64)result;
  *(_QWORD *)a2 = result;
  if ( v11 )
    return MiWritePteShadow(a2, (__int64)result, v14);
  return result;
}
