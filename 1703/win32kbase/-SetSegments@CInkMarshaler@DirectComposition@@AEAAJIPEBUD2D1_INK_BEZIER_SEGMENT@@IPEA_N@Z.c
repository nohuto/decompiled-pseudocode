/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0141E78
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0141CC0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0141368 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // edi
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // ebp
  unsigned __int64 v13; // r14
  const struct D2D1_INK_BEZIER_SEGMENT *v14; // rdi

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v8 = a4;
  v9 = a2;
  v10 = a2 + (unsigned __int64)a4;
  if ( v10 < a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = a2 + (unsigned __int64)a4;
    if ( v5 > v10 )
      v11 = *((_QWORD *)this + 16);
    v13 = 0LL;
    v12 = DirectComposition::CDCompDynamicArrayBase::SetCount(
            (DirectComposition::CInkMarshaler *)((char *)this + 96),
            v11,
            0x6B694344u);
    if ( v12 >= 0 )
    {
      if ( v8 )
      {
        v14 = a3;
        do
        {
          memmove((void *)(*((_QWORD *)this + 13) + *((_QWORD *)this + 17) * (v9 + v13++)), v14, *((_QWORD *)this + 17));
          v14 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v14 + 36);
        }
        while ( v13 < v8 );
        v6 = a2;
      }
      if ( v11 != v5 )
        *((_DWORD *)this + 4) &= ~0x80u;
      if ( *((_DWORD *)this + 36) < v6 )
        v6 = *((_DWORD *)this + 36);
      *((_DWORD *)this + 36) = v6;
      *a5 = 1;
    }
  }
  return (unsigned int)v12;
}
