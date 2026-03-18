/*
 * XREFs of MiReadPteShadow @ 0x14017CA54
 * Callers:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 * Callees:
 *     MiPteHasShadow @ 0x14017C9F0 (MiPteHasShadow.c)
 */

__int64 MiReadPteShadow()
{
  __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  if ( (unsigned int)MiPteHasShadow() && (v0 & 1) != 0 && ((v0 & 0x20) == 0 || (v0 & 0x42) == 0) )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v3 & 0x20) != 0 )
        v0 |= 0x20uLL;
      if ( (v3 & 0x42) != 0 )
        return v0 | 0x42;
    }
  }
  return v0;
}
