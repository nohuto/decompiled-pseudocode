/*
 * XREFs of ?SetScalarValue@CKeyframeAnimation@@UEAAJM@Z @ 0x1800302F0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetScalarValue(CKeyframeAnimation *this, float a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 14);
  v3 = *(_DWORD *)(v2 + 16);
  if ( v3 == -1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xBFu);
LABEL_7:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x1D6u);
    return 0LL;
  }
  if ( *(_DWORD *)(v2 + 48) == v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
    goto LABEL_7;
  }
  *(_DWORD *)(v2 + 16) = v3 + 1;
  v4 = 9LL * v3;
  v5 = *(_QWORD *)(v2 + 24);
  *(float *)(v5 + 8 * v4) = a2;
  *(_DWORD *)(v5 + 8 * v4 + 64) = 18;
  *(_BYTE *)(v5 + 8 * v4 + 68) = 1;
  return 0LL;
}
