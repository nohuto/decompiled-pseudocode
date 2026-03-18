/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001FC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F3B0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v8; // edi
  LARGE_INTEGER v10; // rax

  *a6 = 0;
  if ( a3 == 21 )
  {
    v8 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      this[29] = KeQueryPerformanceCounter(0LL);
      v10 = *(LARGE_INTEGER *)a4;
      LOBYTE(this[31].LowPart) &= ~2u;
      this[30] = v10;
      *a6 = 1;
      this[2].LowPart &= ~0x1000u;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                           (DirectComposition::CBaseExpressionMarshaler *)this,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6);
  }
  return v8;
}
