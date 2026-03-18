/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01CDB30
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE5C0 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01CDA3C (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  __int128 *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[12]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+E0h] [rbp-20h]
  __int128 v18; // [rsp+F0h] [rbp-10h]
  __int128 v19; // [rsp+100h] [rbp+0h]
  __int128 v20; // [rsp+110h] [rbp+10h]
  __int128 v21; // [rsp+120h] [rbp+20h]
  __int128 v22; // [rsp+130h] [rbp+30h]
  __int128 v23; // [rsp+140h] [rbp+40h]
  __int128 v24; // [rsp+150h] [rbp+50h]
  __int128 v25; // [rsp+160h] [rbp+60h]
  __int128 v26; // [rsp+170h] [rbp+70h]
  __int128 v27; // [rsp+180h] [rbp+80h]
  __int128 v28; // [rsp+190h] [rbp+90h]
  _DWORD v29[48]; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = (__int128 *)INPUTDEST_FROM_PWND(v29, v4);
    v6 = v5[1];
    v17 = *v5;
    v7 = v5[2];
    v18 = v6;
    v8 = v5[3];
    v19 = v7;
    v9 = v5[4];
    v20 = v8;
    v10 = v5[5];
    v21 = v9;
    v11 = v5[6];
    v22 = v10;
    v23 = v11;
    v12 = v5[7];
    v5 += 8;
    v24 = v12;
    v13 = v5[1];
    v25 = *v5;
    v14 = v5[2];
    v26 = v13;
    v15 = v5[3];
    v27 = v14;
    v28 = v15;
    v16[0] = v17;
    v16[1] = v18;
    v16[2] = v19;
    v16[3] = v20;
    v16[4] = v21;
    v16[5] = v22;
    v16[6] = v23;
    v16[7] = v24;
    v16[8] = v25;
    v16[9] = v26;
    v16[10] = v14;
    v16[11] = v15;
    if ( (gdwMitConfig & 4) != 0 )
      CTouchProcessor::AdjustEdgyFrameInputDest(gpTouchProcessor, this, v16);
    else
      Edgy::_AdjustEdgyFrameHwndWorker(this, (__int64)v16);
  }
}
