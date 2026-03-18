/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x14010A008
 * Callers:
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, char a4)
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
  if ( a4 >= 0 )
  {
    result = 0xC000000000000001uLL;
    *(_QWORD *)(v7 + 24) = v10 & 0xC000000000000000uLL | 1;
  }
  else
  {
    result = v10 ^ (v10 ^ (v10 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v7 + 24) = result;
  }
  *(_BYTE *)(v7 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    result = v8;
    __writecr8(v8);
  }
  if ( a3 != -1 )
  {
    *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
    v12 = 48 * a3 - 0x58000000000LL;
    LOBYTE(result) = MiLockPageInline(v12);
    *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned __int8)result;
    __writecr8((unsigned __int8)result);
  }
  return result;
}
