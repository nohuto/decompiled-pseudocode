/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140071528
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiLockAndIncrementShareCount @ 0x14007165C (MiLockAndIncrementShareCount.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 result; // rax

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
    v11 = v10 & 0xC000000000000000uLL | 1;
  else
    v11 = v10 ^ (v10 ^ (v10 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v7 + 24) = v11;
  v12 = *(_BYTE *)(v7 + 34) | 0x10;
  *(_BYTE *)(v7 + 34) = v12;
  if ( (a4 & 0x200) != 0 )
    *(_BYTE *)(v7 + 34) = v12 & 0xF8 | 6;
  *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    result = v8;
    __writecr8(v8);
  }
  if ( (a4 & 0x800) == 0 )
    return MiLockAndIncrementShareCount(a3);
  return result;
}
