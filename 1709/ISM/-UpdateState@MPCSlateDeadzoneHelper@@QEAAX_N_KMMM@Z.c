/*
 * XREFs of ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004EB20 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004FC8C (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSlateDeadzoneHelper::UpdateState(
        MPCSlateDeadzoneHelper *this,
        bool a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  MPCButtonHoldHelper *v7; // rcx
  char v8; // di
  __int64 v9; // rcx
  char v10; // al
  float v11; // xmm2_4
  char v12; // dl

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
    if ( !*((_BYTE *)this + 14) )
    {
      v11 = a6 * *(float *)this;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - *((float *)this + 1))) & _xmm) > v11
        || (v12 = 0, (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a5 - *((float *)this + 2))) & _xmm) > v11) )
      {
        v12 = 1;
      }
      *((_BYTE *)this + 14) = v12;
    }
    if ( *((_BYTE *)this + 13) )
    {
      *((_BYTE *)this + 12) = 0;
    }
    else
    {
      if ( *(_QWORD *)(v9 + 24) && *(_BYTE *)(v9 + 9) || *((_BYTE *)this + 14) )
        v10 = 1;
      *((_BYTE *)this + 12) = v10;
      *((_BYTE *)this + 13) = v10;
    }
  }
  else if ( v8 )
  {
    *(_QWORD *)(v9 + 32) = 0LL;
    *((_WORD *)this + 6) = 0;
    *((_BYTE *)this + 14) = 0;
    *(_QWORD *)((char *)this + 4) = 0LL;
  }
}
