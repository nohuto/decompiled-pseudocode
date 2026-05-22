/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180039800
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037990 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  _OWORD *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int64 v13; // rcx
  _OWORD v14[5]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v15[696]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+328h] [rbp+228h]
  __int128 v17; // [rsp+338h] [rbp+238h]
  __int128 v18; // [rsp+348h] [rbp+248h]
  __int128 v19; // [rsp+358h] [rbp+258h]
  __int64 v20; // [rsp+368h] [rbp+268h]

  v3 = v15;
  v4 = 22LL;
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
    --v4;
  }
  while ( v4 );
  v12 = *((_OWORD *)a2 + 1);
  *v3 = *(_OWORD *)a2;
  v3[1] = v12;
  memset(v14, 0, 0x48uLL);
  v13 = *((_QWORD *)this + 72);
  v16 = v14[0];
  v18 = v14[2];
  v17 = v14[1];
  v20 = *(_QWORD *)&v14[4];
  v19 = v14[3];
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 48LL))(v13, v15);
}
