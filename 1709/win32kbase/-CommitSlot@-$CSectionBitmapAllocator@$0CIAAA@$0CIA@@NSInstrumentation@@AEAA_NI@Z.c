/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0042748
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00427B8 (-Allocate@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<163840,640>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  v4 = a2 / 6;
  if ( v4 >= v3 && v3 < 0x28 )
  {
    v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v5, 4096LL) < 0 )
      return 0;
    memset(v5, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
  }
  return 1;
}
