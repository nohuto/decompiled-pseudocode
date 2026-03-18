/*
 * XREFs of MiDbgReleaseAddress @ 0x140260DAC
 * Callers:
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiRealVaToFlushType @ 0x1400C0374 (MiRealVaToFlushType.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // r10
  char v11; // r11

  v2 = *a2;
  if ( v2 )
  {
    v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_1403CBF94);
    *v3 = v2;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
      MiWritePteShadow(v5, v4, v6);
    _InterlockedDecrement(&dword_1403CBF94);
    LeafVa = MiGetLeafVa(v7);
    v9 = MiRealVaToFlushType(LeafVa);
    if ( (v11 & 4) != 0 )
      KeFlushSingleCurrentTb(v10, v9);
    else
      KeFlushSingleTb(v10, v9, 2u);
  }
}
