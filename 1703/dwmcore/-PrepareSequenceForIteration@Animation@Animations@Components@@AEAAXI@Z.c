/*
 * XREFs of ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x18002C0AC
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C9F8 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Animation::PrepareSequenceForIteration(
        Components::Animations::Animation *this,
        int a2)
{
  int v2; // r8d
  float v3; // xmm1_4
  char v4; // r8
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 6);
  v3 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v4 = 0;
      goto LABEL_3;
    }
    if ( (a2 & 1) != 0 )
    {
      v4 = *((_BYTE *)this + 72) < 0x80u;
      goto LABEL_3;
    }
  }
  v4 = *((_BYTE *)this + 72) >> 7;
LABEL_3:
  if ( *((int *)this + 8) >= 0 && a2 == *((_DWORD *)this + 8) && *((float *)this + 10) != 1.0 )
    v3 = *((float *)this + 10);
  v5 = *((_QWORD *)this + 1);
  *(_BYTE *)(v5 + 264) &= ~8u;
  *(_BYTE *)(v5 + 264) |= 8 * v4;
  *(_DWORD *)(*((_QWORD *)this + 1) + 256LL) = 0;
  *(float *)(*((_QWORD *)this + 1) + 260LL) = v3;
}
