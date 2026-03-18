/*
 * XREFs of ?AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C0141FF0
 * Callers:
 *     ?SetBufferProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142470 (-SetBufferProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::AddSegments(
        DirectComposition::CPencilMarshaler *this,
        const struct D2D1_PENCIL_SEGMENT *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v4; // r13
  char *v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v10; // rdi
  int v11; // ebp

  v4 = *((_QWORD *)this + 22);
  v5 = (char *)this + 144;
  v6 = a3;
  v10 = 0LL;
  v11 = DirectComposition::CDCompDynamicArrayBase::Grow(
          (DirectComposition::CPencilMarshaler *)((char *)this + 144),
          a3,
          0x6B704344u);
  if ( v11 >= 0 )
  {
    if ( v6 )
    {
      do
      {
        memmove((void *)(*((_QWORD *)v5 + 1) + *((_QWORD *)v5 + 5) * (v10 + v4)), a2, *((_QWORD *)v5 + 5));
        ++v10;
        a2 = (const struct D2D1_PENCIL_SEGMENT *)((char *)a2 + 20);
      }
      while ( v10 < v6 );
    }
    *((_DWORD *)this + 4) &= ~0x80u;
    *a4 = 1;
  }
  return (unsigned int)v11;
}
