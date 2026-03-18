/*
 * XREFs of MiDbgReleaseAddress @ 0x140227BA8
 * Callers:
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 *     MiGetLeafVa @ 0x1400D131C (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiRealVaToFlushType @ 0x14017C880 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r10
  _QWORD *v4; // rcx
  unsigned __int64 LeafVa; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // r10
  char v8; // r11

  v2 = *a2;
  v3 = a1;
  if ( v2 )
  {
    v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_140388CD4);
    *v4 = v2;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    _InterlockedDecrement(&dword_140388CD4);
    LeafVa = MiGetLeafVa(v3);
    v6 = MiRealVaToFlushType(LeafVa);
    if ( (v8 & 4) != 0 )
      KeFlushSingleCurrentTb(v7, v6);
    else
      KeFlushSingleTb(v7, v6, 2u);
  }
}
