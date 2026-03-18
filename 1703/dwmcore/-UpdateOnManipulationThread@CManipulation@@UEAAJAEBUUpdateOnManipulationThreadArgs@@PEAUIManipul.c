/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180168680
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801679D8 (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801679EC (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180168CBC (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x180168D1C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18016933C (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        struct IManipulationTelemetryData *a3)
{
  unsigned int v6; // r12d
  char v7; // bp
  __int64 v8; // rcx
  char v9; // r10
  float *v10; // r15
  __int64 v11; // rcx
  float *v12; // rsi
  __int64 v13; // rcx
  char v14; // bp
  char v15; // bp
  char v16; // bp
  char v17; // bp
  char v18; // bp
  unsigned __int8 v19; // r10
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // dl
  char v22; // al
  char v23; // cl
  char v24; // r11
  char v25; // r10
  int v26; // eax

  v6 = 0;
  CManipulation::_UpdateCaptureState(this, (*((_BYTE *)a2 + 4) & 0x20) != 0);
  v7 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v8, *(unsigned int *)a2);
  v10 = (float *)((char *)a2 + 20);
  v11 = *(_QWORD *)((char *)a2 + 20) - 0x3F8000003F800000LL;
  if ( *(_QWORD *)((char *)a2 + 20) == 0x3F8000003F800000LL )
    v11 = *((unsigned int *)a2 + 7) - 1065353216LL;
  if ( v11 )
  {
    v7 = v9;
    *((float *)this + 22) = *((float *)this + 22) * *v10;
    *((float *)this + 23) = *((float *)a2 + 6) * *((float *)this + 23);
    *((float *)this + 24) = *((float *)a2 + 7) * *((float *)this + 24);
  }
  v12 = (float *)((char *)a2 + 8);
  v13 = *((_QWORD *)a2 + 1);
  if ( !v13 )
    v13 = *((unsigned int *)a2 + 4);
  if ( v13 )
  {
    v7 = v9;
    *((float *)this + 16) = *((float *)this + 16) + *v12;
    *((float *)this + 17) = *((float *)a2 + 3) + *((float *)this + 17);
    *((float *)this + 18) = *((float *)a2 + 4) + *((float *)this + 18);
  }
  *(_QWORD *)((char *)this + 100) = *(_QWORD *)v10;
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 7);
  *(_QWORD *)((char *)this + 76) = *(_QWORD *)v12;
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 4);
  v14 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 36, (__int64)this + 192) | v7;
  v15 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 48, (__int64)this + 204) | v14;
  v16 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 64, (__int64)this + 116) | v15;
  v17 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 8, (float *)this + 28) | v16;
  v18 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 15, (float *)this + 54) | v17;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 55)
    || v18
    || *((_DWORD *)this + 56) != *((_DWORD *)a2 + 19)
    || (v20 = *((_BYTE *)this + 232), v21 = *((_BYTE *)a2 + 4), ((unsigned __int8)(v21 ^ v20) & v19) != 0)
    || ((v21 ^ v20) & 2) != 0
    || ((v21 ^ v20) & 4) != 0
    || ((v21 ^ v20) & 8) != 0
    || ((v21 ^ v20) & 0x10) != 0 )
  {
    v22 = *((_BYTE *)this + 232);
    *((_DWORD *)this + 55) = *(_DWORD *)a2;
    *((_BYTE *)this + 232) ^= v19 & (*((_BYTE *)a2 + 4) ^ v22);
    v23 = *((_BYTE *)this + 232) ^ (*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 232)) & 2;
    *((_BYTE *)this + 232) = v23;
    v24 = v23 ^ (*((_BYTE *)a2 + 4) ^ v23) & 4;
    *((_BYTE *)this + 232) = v24;
    *((_DWORD *)this + 56) = *((_DWORD *)a2 + 19);
    v25 = v24 ^ (*((_BYTE *)a2 + 4) ^ v24) & 8;
    *((_BYTE *)this + 232) = v25;
    *((_BYTE *)this + 232) = v25 ^ (*((_BYTE *)a2 + 4) ^ v25) & 0x10;
    *((_DWORD *)this + 57) = *((_DWORD *)a2 + 20);
    v26 = CManipulation::_SendUpdateToRenderThread(
            this,
            v18,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 8),
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 20));
    v6 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x67u);
    }
    else if ( a3 )
    {
      (*(void (__fastcall **)(struct IManipulationTelemetryData *))(*(_QWORD *)a3 + 56LL))(a3);
    }
  }
  return v6;
}
