/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180171400
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180171778 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801717D8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180171DE8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  CManipulation *v7; // r11
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // dl
  char v10; // cl
  char v11; // al
  char v12; // dl
  signed int v13; // eax

  v2 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 64), (*((_BYTE *)a2 + 4) & 0x20) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v4, *v3);
  *(_QWORD *)(v5 + 20) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(v5 + 28) = 0;
  *(_QWORD *)(v5 + 44) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *(_DWORD *)(v5 + 52) = 1065353216;
  if ( *(_DWORD *)(v5 + 164) != *(_DWORD *)v6
    || (v8 = *(_BYTE *)(v5 + 176), v9 = *(_BYTE *)(v6 + 4), ((v9 ^ v8) & 1) != 0)
    || ((v9 ^ v8) & 2) != 0
    || ((v9 ^ v8) & 4) != 0
    || ((v9 ^ v8) & 8) != 0
    || ((v9 ^ v8) & 0x10) != 0 )
  {
    *(_DWORD *)(v5 + 160) = 0;
    *(_QWORD *)(v5 + 136) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v5 + 144) = 0;
    *(_QWORD *)(v5 + 148) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v5 + 156) = 0;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)v6;
    *(_BYTE *)(v5 + 176) ^= (*(_BYTE *)(v6 + 4) ^ *(_BYTE *)(v5 + 176)) & 1;
    v10 = *(_BYTE *)(v5 + 176) ^ (*(_BYTE *)(v6 + 4) ^ *(_BYTE *)(v5 + 176)) & 2;
    *(_BYTE *)(v5 + 176) = v10;
    v11 = v10 ^ (*(_BYTE *)(v6 + 4) ^ v10) & 4;
    *(_BYTE *)(v5 + 176) = v11;
    v12 = v11 ^ (*(_BYTE *)(v6 + 4) ^ v11) & 8;
    *(_BYTE *)(v5 + 176) = v12;
    *(_BYTE *)(v5 + 176) = v12 ^ (*(_BYTE *)(v6 + 4) ^ v12) & 0x10;
    v13 = CManipulation::_SendUpdateToRenderThread(v7, 0, 0LL, 0LL);
    v2 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xA1u);
  }
  return v2;
}
