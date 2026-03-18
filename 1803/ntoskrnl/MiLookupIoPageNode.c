/*
 * XREFs of MiLookupIoPageNode @ 0x140139B50
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si
  unsigned __int64 v5; // rcx

  v2 = ExAcquireSpinLockShared(&dword_1403CC340);
  v3 = (_QWORD *)qword_1403CC350;
  v4 = v2;
  while ( v3 )
  {
    v5 = v3[5];
    if ( a1 >= v5 )
    {
      if ( a1 < v5 + 512 )
        break;
      v3 = (_QWORD *)v3[1];
    }
    else
    {
      v3 = (_QWORD *)*v3;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CC340);
  __writecr8(v4);
  return v3;
}
