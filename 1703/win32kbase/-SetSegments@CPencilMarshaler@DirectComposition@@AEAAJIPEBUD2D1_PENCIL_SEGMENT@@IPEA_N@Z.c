/*
 * XREFs of ?SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C0142724
 * Callers:
 *     ?SetBufferProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142470 (-SetBufferProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0141368 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::SetSegments(
        DirectComposition::CPencilMarshaler *this,
        unsigned int a2,
        const struct D2D1_PENCIL_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned int v12; // r15d
  const struct D2D1_PENCIL_SEGMENT *v13; // r15
  int v17; // [rsp+88h] [rbp+20h]

  v5 = *((_QWORD *)this + 22);
  v6 = -1LL;
  v7 = a2;
  v9 = a4;
  v10 = a4 + (unsigned __int64)a2;
  if ( v10 >= a2 )
  {
    v6 = a4 + (unsigned __int64)a2;
    if ( v5 > v10 )
      v6 = *((_QWORD *)this + 22);
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CPencilMarshaler *)((char *)this + 144),
      v6,
      0x6B704344u);
  }
  v11 = 0LL;
  v17 = DirectComposition::CDCompDynamicArrayBase::SetCount(
          (DirectComposition::CPencilMarshaler *)((char *)this + 144),
          v6,
          0x6B704344u);
  v12 = v17;
  if ( v17 >= 0 )
  {
    if ( v9 )
    {
      v13 = a3;
      do
      {
        memmove((void *)(*((_QWORD *)this + 19) + *((_QWORD *)this + 23) * (v7 + v11++)), v13, *((_QWORD *)this + 23));
        v13 = (const struct D2D1_PENCIL_SEGMENT *)((char *)v13 + 20);
      }
      while ( v11 < v9 );
      LODWORD(v7) = a2;
      v12 = v17;
    }
    if ( v6 != v5 )
      *((_DWORD *)this + 4) &= ~0x80u;
    if ( *((_DWORD *)this + 48) < (unsigned int)v7 )
      LODWORD(v7) = *((_DWORD *)this + 48);
    *((_DWORD *)this + 48) = v7;
    *a5 = 1;
  }
  return v12;
}
