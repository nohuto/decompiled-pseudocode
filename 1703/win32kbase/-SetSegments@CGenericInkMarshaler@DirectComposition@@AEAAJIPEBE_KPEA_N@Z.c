/*
 * XREFs of ?SetSegments@CGenericInkMarshaler@DirectComposition@@AEAAJIPEBE_KPEA_N@Z @ 0x1C0142CFC
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142BB0 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV?$CDCompDynamicArray@E@2@_KPEBE1@Z @ 0x1C0142820 (-CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV-$CDCompDynamicArray@E@2@_.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetSegments(
        DirectComposition::CGenericInkMarshaler *this,
        unsigned int a2,
        const unsigned __int8 *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  int v8; // edx

  v5 = *((_QWORD *)this + 16);
  v7 = a2;
  v8 = DirectComposition::CGenericInkMarshaler::CopyBytesIntoBuffer(
         (__int64)this,
         (DirectComposition::CGenericInkMarshaler *)((char *)this + 96),
         a2 * *((_QWORD *)this + 18),
         (__int64)a3,
         a4);
  if ( v8 >= 0 )
  {
    if ( *((_QWORD *)this + 16) != v5 )
      *((_DWORD *)this + 4) &= ~0x40u;
    if ( *((_DWORD *)this + 38) < v7 )
      v7 = *((_DWORD *)this + 38);
    *((_DWORD *)this + 38) = v7;
    *a5 = 1;
  }
  return (unsigned int)v8;
}
