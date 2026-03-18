/*
 * XREFs of ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x18003D610
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003D2F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::GetSampledStartingValue(CKeyframeAnimation *this, struct CExpressionValue *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v6; // eax
  __int64 v7; // rdx

  v2 = *((_QWORD *)this + 40);
  if ( *(_DWORD *)v2 || (v6 = CKeyframeAnimation::SampleStartingValue(this), v4 = v6, v6 >= 0) )
  {
    if ( *(_DWORD *)v2 == 11 )
    {
      v7 = *(_QWORD *)(v2 + 8);
      *((_DWORD *)a2 + 18) = 11;
      *((_BYTE *)a2 + 76) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((char *)a2 + 64, v7);
    }
    else
    {
      switch ( *(_DWORD *)v2 )
      {
        case 0x12:
          *(_DWORD *)a2 = *(_DWORD *)(v2 + 8);
          *((_DWORD *)a2 + 18) = 18;
          break;
        case 0x23:
          *((_DWORD *)a2 + 18) = 35;
          *(_QWORD *)a2 = *(_QWORD *)(v2 + 8);
          break;
        case 0x2A:
          *((_DWORD *)a2 + 18) = 42;
          *(_DWORD *)a2 = *(_DWORD *)(v2 + 8);
          break;
        case 0x34:
          *((_DWORD *)a2 + 18) = 52;
          *(_QWORD *)a2 = *(_QWORD *)(v2 + 8);
          *((_DWORD *)a2 + 2) = *(_DWORD *)(v2 + 16);
          break;
        default:
          switch ( *(_DWORD *)v2 )
          {
            case 'E':
              *((_DWORD *)a2 + 18) = 69;
              break;
            case 'F':
              *((_DWORD *)a2 + 18) = 70;
              break;
            case 'G':
              *((_DWORD *)a2 + 18) = 71;
              break;
            default:
              v4 = -2147467259;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x6E0u);
              return v4;
          }
          *(_OWORD *)a2 = *(_OWORD *)(v2 + 8);
          break;
      }
      *((_BYTE *)a2 + 76) = 1;
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6B4u);
  }
  return v4;
}
