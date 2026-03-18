/*
 * XREFs of MiTransientCombineAddress @ 0x140231B94
 * Callers:
 *     MiRaisedIrqlFault @ 0x140228D0C (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  KIRQL v8; // r14
  unsigned __int64 v9; // rcx

  v2 = 0;
  if ( !dword_140388A84 )
    return 0LL;
  v6 = ExAcquireSpinLockShared(&dword_140388A80);
  v7 = (_QWORD *)qword_140388A88;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388A80);
  __writecr8(v8);
  LOBYTE(v2) = v7 != 0LL;
  return v2;
}
