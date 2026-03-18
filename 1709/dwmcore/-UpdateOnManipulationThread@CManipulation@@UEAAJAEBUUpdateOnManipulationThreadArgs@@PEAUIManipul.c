/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180171140
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801701B0 (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801701C4 (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180171778 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801717D8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180171DE8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        struct IManipulationTelemetryData *a3)
{
  CManipulation *v4; // r12
  unsigned int v7; // r15d
  char v8; // bp
  __int64 v9; // rcx
  char v10; // r10
  float *v11; // r9
  __int64 v12; // rcx
  float *v13; // rsi
  __int64 v14; // rcx
  char v15; // bp
  char v16; // bp
  char v17; // bp
  char v18; // bp
  char v19; // bp
  const struct D2DVector3 *v20; // r9
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // dl
  char v24; // al
  char v25; // cl
  char v26; // r11
  char v27; // r10
  signed int v28; // eax

  v4 = (CManipulation *)((char *)this - 64);
  v7 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 64), (*((_BYTE *)a2 + 4) & 0x20) != 0);
  v8 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v9, *(unsigned int *)a2);
  v11 = (float *)((char *)a2 + 20);
  v12 = *(_QWORD *)((char *)a2 + 20) - 0x3F8000003F800000LL;
  if ( *(_QWORD *)((char *)a2 + 20) == 0x3F8000003F800000LL )
    v12 = *((unsigned int *)a2 + 7) - 1065353216LL;
  if ( v12 )
  {
    v8 = v10;
    *((float *)this + 8) = *((float *)this + 8) * *v11;
    *((float *)this + 9) = *((float *)a2 + 6) * *((float *)this + 9);
    *((float *)this + 10) = *((float *)a2 + 7) * *((float *)this + 10);
  }
  v13 = (float *)((char *)a2 + 8);
  v14 = *((_QWORD *)a2 + 1);
  if ( !v14 )
    v14 = *((unsigned int *)a2 + 4);
  if ( v14 )
  {
    v8 = v10;
    *((float *)this + 2) = *((float *)this + 2) + *v13;
    *((float *)this + 3) = *((float *)a2 + 3) + *((float *)this + 3);
    *((float *)this + 4) = *((float *)a2 + 4) + *((float *)this + 4);
  }
  *(_QWORD *)((char *)this + 44) = *(_QWORD *)v11;
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 7);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)v13;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 4);
  v15 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 36, (__int64)this + 136) | v8;
  v16 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 48, (__int64)this + 148) | v15;
  v17 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 64, (__int64)this + 60) | v16;
  v18 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 8, (float *)this + 14) | v17;
  v19 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 15, (float *)this + 40) | v18;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 41)
    || v19
    || *((_DWORD *)this + 42) != *((_DWORD *)a2 + 19)
    || (v22 = *((_BYTE *)a2 + 4), v23 = *((_BYTE *)this + 176), ((unsigned __int8)(v23 ^ v22) & v21) != 0)
    || ((v23 ^ v22) & 2) != 0
    || ((v23 ^ v22) & 4) != 0
    || ((v23 ^ v22) & 8) != 0
    || ((v23 ^ v22) & 0x10) != 0 )
  {
    v24 = *((_BYTE *)this + 176);
    *((_DWORD *)this + 41) = *(_DWORD *)a2;
    *((_BYTE *)this + 176) ^= v21 & (*((_BYTE *)a2 + 4) ^ v24);
    v25 = *((_BYTE *)this + 176) ^ (*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 176)) & 2;
    *((_BYTE *)this + 176) = v25;
    v26 = v25 ^ (*((_BYTE *)a2 + 4) ^ v25) & 4;
    *((_BYTE *)this + 176) = v26;
    *((_DWORD *)this + 42) = *((_DWORD *)a2 + 19);
    v27 = v26 ^ (*((_BYTE *)a2 + 4) ^ v26) & 8;
    *((_BYTE *)this + 176) = v27;
    *((_BYTE *)this + 176) = v27 ^ (*((_BYTE *)a2 + 4) ^ v27) & 0x10;
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 20);
    v28 = CManipulation::_SendUpdateToRenderThread(
            v4,
            v19,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 8),
            v20);
    v7 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x70u);
    }
    else if ( a3 )
    {
      (*(void (__fastcall **)(struct IManipulationTelemetryData *))(*(_QWORD *)a3 + 56LL))(a3);
    }
  }
  return v7;
}
