/*
 * XREFs of ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z @ 0x18019D7D8
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019D3F0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector2Property(CNaturalAnimation *this, int a2, const struct D2DVector2 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // xmm0_8
  __int64 v5; // xmm0_8

  v3 = 0;
  switch ( a2 )
  {
    case '&':
      v5 = *(_QWORD *)a3;
      *((_BYTE *)this + 540) |= 0x20u;
      *((_QWORD *)this + 39) = v5;
      break;
    case '*':
      v4 = *(_QWORD *)a3;
      *((_BYTE *)this + 540) |= 0x10u;
      *((_QWORD *)this + 36) = v4;
      break;
    case '.':
      *(_QWORD *)((char *)this + 324) = *(_QWORD *)a3;
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x400u);
      break;
  }
  return v3;
}
