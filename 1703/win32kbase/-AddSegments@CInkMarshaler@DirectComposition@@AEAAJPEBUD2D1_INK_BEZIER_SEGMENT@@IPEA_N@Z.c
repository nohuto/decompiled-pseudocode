/*
 * XREFs of ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01417D0
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0141CC0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::AddSegments(
        DirectComposition::CInkMarshaler *this,
        const struct D2D1_INK_BEZIER_SEGMENT *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // rdi
  int v10; // ebp

  v4 = *((_QWORD *)this + 16);
  v6 = a3;
  v9 = 0LL;
  v10 = DirectComposition::CDCompDynamicArrayBase::Grow(
          (DirectComposition::CInkMarshaler *)((char *)this + 96),
          a3,
          0x6B694344u);
  if ( v10 >= 0 )
  {
    if ( v6 )
    {
      do
      {
        memmove((void *)(*((_QWORD *)this + 13) + *((_QWORD *)this + 17) * (v9 + v4)), a2, *((_QWORD *)this + 17));
        ++v9;
        a2 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)a2 + 36);
      }
      while ( v9 < v6 );
    }
    *((_DWORD *)this + 4) &= ~0x80u;
    *a4 = 1;
  }
  return (unsigned int)v10;
}
