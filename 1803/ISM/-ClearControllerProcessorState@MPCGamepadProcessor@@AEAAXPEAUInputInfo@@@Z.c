/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095E14
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093AD0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180093B20 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  _OWORD v17[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[520]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v20; // [rsp+278h] [rbp+178h]
  __int128 v21; // [rsp+288h] [rbp+188h]
  __int128 v22; // [rsp+298h] [rbp+198h]
  __int128 v23; // [rsp+2A8h] [rbp+1A8h]
  __int64 v24; // [rsp+2B8h] [rbp+1B8h]

  v2 = 13LL;
  v3 = v19;
  do
  {
    v5 = *((_OWORD *)a2 + 1);
    *v3 = *(_OWORD *)a2;
    v6 = *((_OWORD *)a2 + 2);
    v3[1] = v5;
    v7 = *((_OWORD *)a2 + 3);
    v3[2] = v6;
    v8 = *((_OWORD *)a2 + 4);
    v3[3] = v7;
    v9 = *((_OWORD *)a2 + 5);
    v3[4] = v8;
    v10 = *((_OWORD *)a2 + 6);
    v3[5] = v9;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (struct InputInfo *)((char *)a2 + 128);
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v2;
  }
  while ( v2 );
  v12 = *((_QWORD *)a2 + 8);
  v13 = *((_OWORD *)a2 + 1);
  *v3 = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v3[1] = v13;
  v15 = *((_OWORD *)a2 + 3);
  v3[2] = v14;
  v3[3] = v15;
  *((_QWORD *)v3 + 8) = v12;
  memset_0(v17, 0, 0x48uLL);
  v16 = *((_QWORD *)this + 288);
  v20 = v17[0];
  v22 = v17[2];
  v21 = v17[1];
  v24 = v18;
  v23 = v17[3];
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 48LL))(v16, v19);
}
