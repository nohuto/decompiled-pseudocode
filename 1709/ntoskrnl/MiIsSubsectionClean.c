/*
 * XREFs of MiIsSubsectionClean @ 0x140211280
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
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
    if ( v11 != 17 )
      MiUnlockProtoPoolPage(v8, v11);
    v8 = MiCheckProtoPtePageState(v6, &v11, a3, a4);
    if ( v8 )
      break;
    v6 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_20:
    if ( v6 >= v7 )
      goto LABEL_25;
  }
  a4 = MiLockLeafPage((__int64 *)v6, 0LL, a3, a4);
  if ( !a4 )
  {
LABEL_19:
    v6 += 8LL;
    goto LABEL_20;
  }
  v9 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v9) = MiReadPteShadow();
  if ( (v9 & 1) == 0 )
  {
    if ( *(_WORD *)(a4 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = 2;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)(a4 + 34) & 0x18) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = 1;
      goto LABEL_25;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_19;
  }
  v10 = *(_BYTE *)(a4 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = 2 - ((v10 & 0x18) != 0);
LABEL_25:
  if ( v11 != 17 )
    MiUnlockProtoPoolPage(v8, v11);
  return v4;
}
