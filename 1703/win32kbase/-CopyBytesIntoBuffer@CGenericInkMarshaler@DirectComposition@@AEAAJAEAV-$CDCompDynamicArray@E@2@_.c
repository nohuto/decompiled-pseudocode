/*
 * XREFs of ?CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV?$CDCompDynamicArray@E@2@_KPEBE1@Z @ 0x1C0142820
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142BB0 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?SetSegments@CGenericInkMarshaler@DirectComposition@@AEAAJIPEBE_KPEA_N@Z @ 0x1C0142CFC (-SetSegments@CGenericInkMarshaler@DirectComposition@@AEAAJIPEBE_KPEA_N@Z.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0141368 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::CopyBytesIntoBuffer(
        __int64 a1,
        DirectComposition::CDCompDynamicArrayBase *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  int v7; // edi
  __int64 v9; // rbx
  __int64 v10; // r14

  v5 = a5;
  v7 = 0;
  v9 = a3;
  if ( *((_QWORD *)a2 + 4) >= (unsigned __int64)(a3 + a5)
    || (v7 = DirectComposition::CDCompDynamicArrayBase::SetCount(a2, a3 + a5, 0x69674344u), v7 >= 0) )
  {
    if ( a5 )
    {
      v10 = a4 - v9;
      do
      {
        memmove((void *)(*((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 5) * v9), (const void *)(v10 + v9), *((_QWORD *)a2 + 5));
        ++v9;
        --v5;
      }
      while ( v5 );
    }
  }
  return (unsigned int)v7;
}
