/*
 * XREFs of ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DD10
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall MPCManager::OnMenuPressed(__int64 a1, __int128 *a2, int a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // rbx
  __int128 *v8; // rax
  __int128 *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  __int64 *v23; // rax
  __int64 *i; // rax
  int v25; // [rsp+20h] [rbp-A78h]
  _BYTE v26[2624]; // [rsp+40h] [rbp-A58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A98h] [rbp+0h]
  __int64 v28; // [rsp+AA0h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 112);
  v7 = (__int64 *)*v3;
  while ( v7 != v3 )
  {
    v8 = a2;
    v9 = (__int128 *)v26;
    v10 = 20LL;
    do
    {
      v11 = *v8;
      v12 = v8[1];
      v8 += 8;
      *v9 = v11;
      v13 = *(v8 - 6);
      v9[1] = v12;
      v14 = *(v8 - 5);
      v9[2] = v13;
      v15 = *(v8 - 4);
      v9[3] = v14;
      v16 = *(v8 - 3);
      v9[4] = v15;
      v17 = *(v8 - 2);
      v9[5] = v16;
      v18 = *(v8 - 1);
      v9[6] = v17;
      v9 += 8;
      *(v9 - 1) = v18;
      --v10;
    }
    while ( v10 );
    v19 = v8[1];
    *v9 = *v8;
    v20 = v8[2];
    v9[1] = v19;
    v21 = v8[3];
    v28 = v7[9];
    v9[2] = v20;
    v9[3] = v21;
    LOWORD(v25) = 1;
    v22 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, __int64, int, void *, _BYTE *, int))CoreUICallSend)(
            *(_QWORD *)(a1 + 16),
            &v28,
            1LL,
            1LL,
            v25,
            &unk_1800E53E5,
            v26,
            a3);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v22);
    if ( !*((_BYTE *)v7 + 25) )
    {
      v23 = (__int64 *)v7[2];
      if ( *((_BYTE *)v23 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        do
        {
          v7 = v23;
          v23 = (__int64 *)*v23;
        }
        while ( !*((_BYTE *)v23 + 25) );
      }
    }
  }
}
