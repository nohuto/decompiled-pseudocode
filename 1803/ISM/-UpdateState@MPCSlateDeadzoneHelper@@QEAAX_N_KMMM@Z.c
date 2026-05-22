/*
 * XREFs of ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180054744
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E2B0 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180093B20 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSlateDeadzoneHelper::UpdateState(
        MPCSlateDeadzoneHelper *this,
        char a2,
        __int64 a3,
        float a4,
        float a5,
        float a6)
{
  MPCButtonHoldHelper *v7; // rcx
  char v8; // di
  __int64 v9; // rdx
  char v10; // al
  char v11; // cl
  float v12; // xmm2_4

  v7 = (MPCButtonHoldHelper *)*((_QWORD *)this + 2);
  v8 = *((_BYTE *)v7 + 8);
  MPCButtonHoldHelper::UpdateState(v7, a2, a3);
  v9 = *((_QWORD *)this + 2);
  v10 = 0;
  if ( *(_BYTE *)(v9 + 10) )
  {
    *((float *)this + 2) = a5;
    *((float *)this + 1) = a4;
  }
  else if ( *(_BYTE *)(v9 + 8) )
  {
    v11 = *((_BYTE *)this + 14);
    if ( !v11 )
    {
      v12 = a6 * *(float *)this;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - *((float *)this + 1))) & _xmm) > v12
        || (v11 = 0, (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a5 - *((float *)this + 2))) & _xmm) > v12) )
      {
        v11 = 1;
      }
      *((_BYTE *)this + 14) = v11;
    }
    if ( !*((_BYTE *)this + 13) )
    {
      if ( *(_QWORD *)(v9 + 24) && *(_BYTE *)(v9 + 9) || v11 )
        v10 = 1;
      *((_BYTE *)this + 13) = v10;
    }
    *((_BYTE *)this + 12) = v10;
  }
  else if ( v8 )
  {
    *(_QWORD *)(v9 + 32) = 0LL;
    *((_WORD *)this + 6) = 0;
    *((_BYTE *)this + 14) = 0;
    *(_QWORD *)((char *)this + 4) = 0LL;
  }
}
