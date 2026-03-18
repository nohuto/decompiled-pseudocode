/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C005EE64
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C005EED8 (-Allocate@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<77824,304>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // edx
  void *v6; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 >= 0x13 )
    return 1;
  v5 = a2 / 0xD;
  if ( v5 < v3 )
    return 1;
  v6 = (void *)((v5 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v6, 4096LL) >= 0 )
  {
    memset(v6, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
