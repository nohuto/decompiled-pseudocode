/*
 * XREFs of ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800A3F14
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800A3CE0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::GetSampledStartingValue(CKeyframeAnimation *this, struct CExpressionValue *a2)
{
  _DWORD *v2; // rdi
  unsigned int v4; // esi
  signed int v6; // eax

  v2 = (_DWORD *)*((_QWORD *)this + 38);
  if ( *v2 || (v6 = CKeyframeAnimation::SampleStartingValue(this), v4 = v6, v6 >= 0) )
  {
    switch ( *v2 )
    {
      case 0x12:
        *(_DWORD *)a2 = v2[2];
        *((_DWORD *)a2 + 16) = 18;
        break;
      case 0x23:
        *((_DWORD *)a2 + 16) = 35;
        *(_QWORD *)a2 = *((_QWORD *)v2 + 1);
        break;
      case 0x34:
        *((_DWORD *)a2 + 16) = 52;
        *(_QWORD *)a2 = *((_QWORD *)v2 + 1);
        *((_DWORD *)a2 + 2) = v2[4];
        break;
      default:
        switch ( *v2 )
        {
          case 'E':
            *((_DWORD *)a2 + 16) = 69;
            break;
          case 'F':
            *((_DWORD *)a2 + 16) = 70;
            break;
          case 'G':
            *((_DWORD *)a2 + 16) = 71;
            break;
          default:
            v4 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x5D5u);
            return v4;
        }
        *(_OWORD *)a2 = *(_OWORD *)(v2 + 2);
        break;
    }
    *((_BYTE *)a2 + 68) = 1;
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x5B1u);
  }
  return v4;
}
