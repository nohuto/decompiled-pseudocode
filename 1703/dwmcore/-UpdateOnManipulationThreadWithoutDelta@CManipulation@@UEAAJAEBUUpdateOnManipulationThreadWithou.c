/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180168940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180168CBC (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x180168D1C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18016933C (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // r11
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // dl
  char v10; // cl
  char v11; // al
  char v12; // cl
  int v13; // eax

  v2 = 0;
  CManipulation::_UpdateCaptureState(this, (*((_BYTE *)a2 + 4) & 0x20) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v4, *v3);
  *(_QWORD *)(v6 + 76) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(v6 + 84) = 0;
  *(_QWORD *)(v6 + 100) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *(_DWORD *)(v6 + 108) = 1065353216;
  if ( *(_DWORD *)(v6 + 220) != *(_DWORD *)v5
    || (v8 = *(_BYTE *)(v6 + 232), v9 = *(_BYTE *)(v5 + 4), ((unsigned __int8)(v9 ^ v8) & v7) != 0)
    || ((v9 ^ v8) & 2) != 0
    || ((v9 ^ v8) & 4) != 0
    || ((v9 ^ v8) & 8) != 0
    || ((v9 ^ v8) & 0x10) != 0 )
  {
    *(_DWORD *)(v6 + 216) = 0;
    *(_QWORD *)(v6 + 192) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 200) = 0;
    *(_QWORD *)(v6 + 204) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 212) = 0;
    *(_DWORD *)(v6 + 220) = *(_DWORD *)v5;
    *(_BYTE *)(v6 + 232) ^= v7 & (*(_BYTE *)(v5 + 4) ^ *(_BYTE *)(v6 + 232));
    v10 = *(_BYTE *)(v6 + 232) ^ (*(_BYTE *)(v5 + 4) ^ *(_BYTE *)(v6 + 232)) & 2;
    *(_BYTE *)(v6 + 232) = v10;
    v11 = v10 ^ (*(_BYTE *)(v5 + 4) ^ v10) & 4;
    *(_BYTE *)(v6 + 232) = v11;
    v12 = v11 ^ (*(_BYTE *)(v5 + 4) ^ v11) & 8;
    *(_BYTE *)(v6 + 232) = v12;
    *(_BYTE *)(v6 + 232) = v12 ^ (*(_BYTE *)(v5 + 4) ^ v12) & 0x10;
    v13 = CManipulation::_SendUpdateToRenderThread((CManipulation *)v6, 0, 0LL, 0LL);
    v2 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x98u);
  }
  return v2;
}
