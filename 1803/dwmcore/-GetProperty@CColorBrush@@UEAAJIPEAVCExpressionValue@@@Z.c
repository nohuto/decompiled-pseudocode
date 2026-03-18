/*
 * XREFs of ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18009AE10
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int64 i; // r9
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i == 1 )
      goto LABEL_20;
    v6 = (&CColorBrush::k_rgAnimDef)[i];
    if ( a2 == *(_DWORD *)v6 )
      break;
  }
  if ( !v6 )
  {
LABEL_20:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x24u);
    return v3;
  }
  v7 = *((_DWORD *)v6 + 1);
  v8 = *((_QWORD *)v6 + 1);
  if ( v7 == 70 )
  {
    *((_DWORD *)a3 + 18) = 70;
    v9 = *(_OWORD *)((char *)this + v8);
    *((_BYTE *)a3 + 76) = 1;
    *(_OWORD *)a3 = v9;
  }
  else
  {
    switch ( v7 )
    {
      case 17:
        *(_BYTE *)a3 = *((_BYTE *)this + v8);
        *((_DWORD *)a3 + 18) = 17;
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 18:
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
        *((_DWORD *)a3 + 18) = 18;
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 35:
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 42:
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 52:
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 69:
        *((_DWORD *)a3 + 18) = 69;
        v11 = *(_OWORD *)((char *)this + v8);
        *((_BYTE *)a3 + 76) = 1;
        *(_OWORD *)a3 = v11;
        break;
      case 71:
        *((_DWORD *)a3 + 18) = 71;
        v12 = *(_OWORD *)((char *)this + v8);
        *((_BYTE *)a3 + 76) = 1;
        *(_OWORD *)a3 = v12;
        break;
      case 104:
        *((_DWORD *)a3 + 18) = 104;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
        *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 265:
        *((_DWORD *)a3 + 18) = 265;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
        *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
        v13 = *(_OWORD *)((char *)this + v8 + 48);
        *((_BYTE *)a3 + 76) = 1;
        *((_OWORD *)a3 + 3) = v13;
        break;
      default:
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
    }
  }
  return v3;
}
