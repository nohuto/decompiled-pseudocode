/*
 * XREFs of MiPerformSafePdeWrite @ 0x1400CD48C
 * Callers:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 */

signed __int64 __fastcall MiPerformSafePdeWrite(__int64 a1, volatile signed __int64 *a2, signed __int64 a3, char a4)
{
  signed __int64 result; // rax
  unsigned __int64 v6; // rdx
  int v7; // r10d
  int v8; // r11d
  int v9; // r9d
  signed __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  signed __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx

  result = a3;
  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = a3 | 0x20;
    if ( (a4 & 1) == 0 )
      v14 = a3;
    v15 = v14 | 0x8000000000000000uLL;
    if ( (a4 & 2) == 0 )
      v15 = v14;
    v16 = v15 | 4;
    if ( (a4 & 4) == 0 )
      v16 = v15;
    return MiWriteValidPteNewProtection(a2, v16);
  }
  else
  {
    v7 = a4 & 1;
    v8 = a4 & 2;
    v9 = a4 & 4;
    do
    {
      v10 = result;
      v11 = result | 0x20;
      if ( !v7 )
        v11 = result;
      v12 = v11 | 0x8000000000000000uLL;
      if ( !v8 )
        v12 = v11;
      v13 = v12 | 4;
      if ( !v9 )
        v13 = v12;
      result = _InterlockedCompareExchange64(a2, v13, result);
    }
    while ( result != v10 );
  }
  return result;
}
