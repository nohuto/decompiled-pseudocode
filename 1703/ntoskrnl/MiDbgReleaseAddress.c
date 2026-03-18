/*
 * XREFs of MiDbgReleaseAddress @ 0x14021B304
 * Callers:
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x14017CE14 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x14017CFE0 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 LeafVa; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // r10
  char v8; // r11

  v2 = *a2;
  if ( v2 )
  {
    v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_14036CAD4);
    *v3 = v2;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
      MiWritePteShadow();
    _InterlockedDecrement(&dword_14036CAD4);
    LeafVa = MiGetLeafVa(v4);
    v6 = MiRealVaToFlushType(LeafVa);
    if ( (v8 & 4) != 0 )
      KeFlushSingleCurrentTb(v7, v6);
    else
      KeFlushSingleTb(v7, v6, 2u);
  }
}
