/*
 * XREFs of ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV?$CDCompDynamicArray@E@2@_KPEBE1@Z @ 0x1C0142820 (-CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV-$CDCompDynamicArray@E@2@_.c)
 *     ?SetSegments@CGenericInkMarshaler@DirectComposition@@AEAAJIPEBE_KPEA_N@Z @ 0x1C0142CFC (-SetSegments@CGenericInkMarshaler@DirectComposition@@AEAAJIPEBE_KPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetBufferProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const unsigned __int8 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 >= 5 )
  {
    if ( a4 && !(a5 % *((_QWORD *)this + 18)) )
      return DirectComposition::CGenericInkMarshaler::SetSegments(this, a3 - 5, a4, a5, a6);
  }
  else if ( a3 )
  {
    if ( a3 == 3 && a4 && !(a5 % *((_QWORD *)this + 18)) )
    {
      result = DirectComposition::CGenericInkMarshaler::CopyBytesIntoBuffer(
                 a5,
                 (DirectComposition::CGenericInkMarshaler *)((char *)this + 96),
                 *((_QWORD *)this + 16),
                 (__int64)a4,
                 a5);
      if ( (int)result < 0 )
        return result;
      *((_DWORD *)this + 4) &= ~0x40u;
      goto LABEL_8;
    }
  }
  else if ( a4 && a5 == *((_QWORD *)this + 11) )
  {
    result = DirectComposition::CGenericInkMarshaler::CopyBytesIntoBuffer(
               (__int64)this,
               (DirectComposition::CGenericInkMarshaler *)((char *)this + 40),
               0LL,
               (__int64)a4,
               a5);
    *((_DWORD *)this + 4) &= ~0x20u;
LABEL_8:
    *a6 = 1;
    return result;
  }
  return 3221225485LL;
}
