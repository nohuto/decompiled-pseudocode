/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004FC8C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  _QWORD *ButtonHoldHelper; // rax
  volatile signed __int32 *v5; // rdi
  char v6; // r14
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  char v12; // r14
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  bool v16; // zf
  __int128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+48h] [rbp-20h]

  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 495),
    *((_BYTE *)this + 4501),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 195),
    *((float *)a2 + 196),
    *((float *)a2 + 210));
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 495), &v18);
  v5 = v19;
  v6 = *(_BYTE *)(*ButtonHoldHelper + 10LL);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v7 = 2LL;
  if ( v6 )
  {
    v8 = 1;
  }
  else
  {
    v9 = *((_QWORD *)this + 495);
    if ( *(_BYTE *)(v9 + 13) )
    {
      v8 = 7;
    }
    else
    {
      v10 = MPCSlateDeadzoneHelper::GetButtonHoldHelper(v9, &v20);
      v11 = v21;
      v12 = *(_BYTE *)(*v10 + 12LL);
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      if ( v12 )
      {
        v8 = 2;
      }
      else
      {
        v8 = 0;
        if ( *((_DWORD *)a2 + 175) == 6 )
          v8 = 4;
      }
    }
  }
  v13 = (_OWORD *)((char *)this + 728);
  v14 = (_OWORD *)((char *)a2 + 776);
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    v15 = v14[7];
    v14 += 8;
    *(v13 - 1) = v15;
    --v7;
  }
  while ( v7 );
  *v13 = *v14;
  v13[1] = v14[1];
  v13[2] = v14[2];
  v13[3] = v14[3];
  v16 = *((_BYTE *)a2 + 1073) == 0;
  v17 = *(_OWORD *)((char *)a2 + 788);
  *((_DWORD *)a2 + 322) = *((_DWORD *)a2 + 195);
  *((_DWORD *)a2 + 323) = *((_DWORD *)a2 + 196);
  *((_DWORD *)a2 + 328) = *((_DWORD *)a2 + 202);
  *((_BYTE *)a2 + 1316) = !v16;
  *((_DWORD *)a2 + 318) = v8;
  *((_OWORD *)a2 + 81) = v17;
}
