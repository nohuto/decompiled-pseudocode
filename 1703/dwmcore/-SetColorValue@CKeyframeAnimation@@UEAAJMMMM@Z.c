/*
 * XREFs of ?SetColorValue@CKeyframeAnimation@@UEAAJMMMM@Z @ 0x180030270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetColorValue(
        CKeyframeAnimation *this,
        float a2,
        float a3,
        float a4,
        unsigned int a5)
{
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-18h]

  v5 = *((_QWORD *)this + 14);
  *(_QWORD *)&v10 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v6 = *(_DWORD *)(v5 + 16);
  *((_QWORD *)&v10 + 1) = __PAIR64__(a5, LODWORD(a4));
  if ( v6 == -1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xBFu);
LABEL_7:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x23Eu);
    return 0LL;
  }
  if ( *(_DWORD *)(v5 + 48) == v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
    goto LABEL_7;
  }
  *(_DWORD *)(v5 + 16) = v6 + 1;
  v7 = 9LL * v6;
  v8 = *(_QWORD *)(v5 + 24);
  *(_DWORD *)(v8 + 8 * v7 + 64) = 70;
  *(_OWORD *)(v8 + 8 * v7) = v10;
  *(_BYTE *)(v8 + 8 * v7 + 68) = 1;
  return 0LL;
}
