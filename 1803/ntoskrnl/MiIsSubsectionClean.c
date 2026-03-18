/*
 * XREFs of MiIsSubsectionClean @ 0x14024F640
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rsi
  char v9; // al
  char v10; // al
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v6 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v11 = 17;
  v8 = 0LL;
  if ( v6 >= v7 )
    return v4;
  while ( (v6 & 0xFFF) == 0 || v11 == 17 )
  {
    LOBYTE(a2) = v11;
    if ( v11 != 17 )
      MiUnlockProtoPoolPage(v8, a2, a3, a4);
    v8 = MiCheckProtoPtePageState(v6, &v11);
    if ( v8 )
      break;
    v6 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_16:
    if ( v6 >= v7 )
      goto LABEL_21;
  }
  a4 = MiLockLeafPage(v6, 0);
  if ( !a4 )
  {
LABEL_15:
    v6 += 8LL;
    goto LABEL_16;
  }
  if ( (MI_READ_PTE_LOCK_FREE(v6) & 1) == 0 )
  {
    if ( *(_WORD *)(a4 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = 2;
      goto LABEL_21;
    }
    v9 = *(_BYTE *)(a4 + 34);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0x18) != 0 )
    {
      v4 = 1;
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  v10 = *(_BYTE *)(a4 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = 2 - ((v10 & 0x18) != 0);
LABEL_21:
  LOBYTE(a2) = v11;
  if ( v11 != 17 )
    MiUnlockProtoPoolPage(v8, a2, a3, a4);
  return v4;
}
