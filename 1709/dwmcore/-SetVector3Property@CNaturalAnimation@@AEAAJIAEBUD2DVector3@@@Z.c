/*
 * XREFs of ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x180174548
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801741A0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector3Property(CNaturalAnimation *this, int a2, const struct D2DVector3 *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // ecx

  v3 = 0;
  switch ( a2 )
  {
    case '"':
      *((_QWORD *)this + 37) = *(_QWORD *)a3;
      v6 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 524) |= 0x20u;
      *((_DWORD *)this + 76) = v6;
      break;
    case '&':
      *((_QWORD *)this + 34) = *(_QWORD *)a3;
      v5 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 524) |= 0x10u;
      *((_DWORD *)this + 70) = v5;
      break;
    case '*':
      *(_QWORD *)((char *)this + 308) = *(_QWORD *)a3;
      *((_DWORD *)this + 79) = *((_DWORD *)a3 + 2);
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x414u);
      break;
  }
  return v3;
}
