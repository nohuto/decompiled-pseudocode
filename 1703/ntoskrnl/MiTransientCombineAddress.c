/*
 * XREFs of MiTransientCombineAddress @ 0x1401316EC
 * Callers:
 *     MiRaisedIrqlFault @ 0x1401314B8 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  KIRQL v8; // r14
  unsigned __int64 v9; // rcx

  v2 = 0;
  if ( !dword_14036C704 )
    return 0LL;
  v6 = ExAcquireSpinLockShared(&dword_14036C700);
  v7 = (_QWORD *)qword_14036C708;
  v8 = v6;
  while ( v7 )
  {
    v9 = v7[3];
    if ( a1 > v9 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v9 )
        break;
      v7 = (_QWORD *)*v7;
    }
  }
  if ( v7 )
  {
    if ( v7[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      v7 = 0LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C700);
  __writecr8(v8);
  LOBYTE(v2) = v7 != 0LL;
  return v2;
}
