/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x1400ED7F4
 * Callers:
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x14022C174 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400ED930 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(struct _KPRCB *CurrentPrcb, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v4; // esi
  __int64 v5; // rbx
  struct _KPRCB *v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 HyperPte; // r12
  int v11; // r15d
  unsigned __int64 v12; // r12
  unsigned int v13; // r15d
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a3;
  v5 = a2;
  v6 = CurrentPrcb;
  if ( a2 )
  {
    v7 = -805306366;
    if ( (_DWORD)a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(v6, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
      v11 = HyperPte & 0xFFF;
      v12 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v13 = v11 + 1;
      v14 = (_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v14 = 0LL;
      if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v14, 0LL);
      if ( v13 == 64 )
        MiFlushHyperSpace(v9, a2, a3);
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = 0LL;
      if ( v13 != 64 )
        v15 = v13;
      v6 = (struct _KPRCB *)((char *)v6 + 1);
      result = (_UNKNOWN **)(v12 | v15);
      CurrentPrcb->HyperPte = result;
      --v5;
    }
    while ( v5 );
  }
  if ( v4 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace(CurrentPrcb, a2, a3);
  return result;
}
