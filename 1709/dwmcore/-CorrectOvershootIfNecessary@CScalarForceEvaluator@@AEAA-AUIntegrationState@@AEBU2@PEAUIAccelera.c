/*
 * XREFs of ?CorrectOvershootIfNecessary@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEBU2@PEAUIAccelerator@@PEA_N@Z @ 0x180192EF8
 * Callers:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180192DA8 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScalarForceEvaluator::CorrectOvershootIfNecessary(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5)
{
  int v6; // edi
  int v7; // eax
  __int64 v9; // rax
  float (__fastcall *v11)(__int64 *); // rax
  unsigned int v12; // xmm0_4
  float v13; // xmm6_4
  double v14; // xmm0_8
  int v15; // eax
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  __int128 v25; // [rsp+20h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a3 + 16);
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_DWORD *)(a2 + 16) = v7;
  v9 = *a4;
  *a5 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64 *))(v9 + 48))(a4) )
  {
    v11 = *(float (__fastcall **)(__int64 *))(*a4 + 24);
    if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
    {
      *(float *)&v12 = v11(a4) - *(float *)(a1 + 16);
      if ( *(float *)(a1 + 52) != (float)(int)((__PAIR64__(*(float *)&v12 > 0.0, v12) - COERCE_UNSIGNED_INT(0.0)) >> 32) )
      {
        v13 = *(float *)(a1 + 36);
        v14 = (*(double (__fastcall **)(__int64 *))(*a4 + 24))(a4);
        v15 = *(_DWORD *)(a1 + 28);
        v16 = (float)(*(float *)&v14 - v13) / (float)(*(float *)(a1 + 16) - v13);
        v17 = 1.0 - v16;
        *(float *)&v14 = v16 * *(float *)(a1 + 16);
        v18 = v16 * *(float *)(a1 + 20);
        v25 = *(_OWORD *)(a1 + 12);
        v19 = v17;
        v20 = v17 * *(float *)(a1 + 40);
        v21 = v19 * *(float *)(a1 + 36);
        *(_BYTE *)(a1 + 64) &= ~1u;
        *((float *)&v25 + 2) = v20 + v18;
        *((float *)&v25 + 1) = v21 + *(float *)&v14;
        *(_OWORD *)a2 = v25;
        *(_DWORD *)(a2 + 16) = v15;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*a4 + 48))(a4) == 2 )
        {
          *a5 = 1;
          *(_DWORD *)(a2 + 8) = 0;
        }
      }
    }
    else
    {
      v22 = v11(a4) - *(float *)(a1 + 16);
      LOBYTE(v6) = v22 < 0.0;
      v23 = (float)((v22 > 0.0) - v6);
      *(float *)(a1 + 52) = v23;
      *(_BYTE *)(a1 + 64) &= ~1u;
      *(_BYTE *)(a1 + 64) |= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23) & _xmm) >= 0.0000011920929;
    }
  }
  return a2;
}
