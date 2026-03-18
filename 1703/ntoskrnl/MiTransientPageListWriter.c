/*
 * XREFs of MiTransientPageListWriter @ 0x140225490
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // r14
  unsigned int v7; // edi
  unsigned __int64 v8; // r8

  v4 = ExAcquireSpinLockShared(&dword_14036C8A0);
  v5 = (_QWORD *)qword_14036C8A8;
  v6 = v4;
  v7 = 0;
  while ( v5 )
  {
    v8 = v5[7];
    if ( a1 > v8 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v8 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C8A0);
  __writecr8(v6);
  LOBYTE(v7) = v5 != 0LL;
  return v7;
}
