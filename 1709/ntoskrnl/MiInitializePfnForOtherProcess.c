/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x1400C457C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rbx

  v7 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = 17;
    MiLockPageAtDpcInline(v7);
  }
  else
  {
    v8 = MiLockPageInline(v7);
  }
  v9 = *(_QWORD *)(v7 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL);
  *(_WORD *)(v7 + 32) = 1;
  if ( (a4 & 0x80u) == 0 )
    *(_QWORD *)(v7 + 24) = v10 & 0xC000000000000000uLL | 1;
  else
    *(_QWORD *)(v7 + 24) = v10 ^ (v10 ^ (v10 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v7 + 34) |= 0x10u;
  if ( (a4 & 0x200) != 0 )
    *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 6;
  result = (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v7 + 40) ^= result;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    result = v8;
    __writecr8(v8);
  }
  if ( (a4 & 0x800) == 0 )
  {
    v12 = 48 * a3 - 0x58000000000LL;
    LOBYTE(result) = MiLockPageInline(v12);
    *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned __int8)result;
    __writecr8((unsigned __int8)result);
  }
  return result;
}
