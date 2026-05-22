/*
 * XREFs of ?MoveToTail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z @ 0x1800164A4
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::MoveToTail(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  int v6; // edi
  __int64 v7; // r9
  unsigned int v8; // edi
  _OWORD *v9; // r11
  _OWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  _OWORD *v24; // rcx
  _OWORD *v25; // rdx
  __int64 v26; // rcx
  _OWORD *v27; // rdx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  _OWORD *v30; // rcx
  _OWORD *v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  _BYTE v42[2864]; // [rsp+30h] [rbp-B48h] BYREF

  v2 = 0;
  if ( a2 < *(_DWORD *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 12);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 16);
    v7 = (v4 + a2) % v5;
    if ( v6 )
      v8 = v6 - 1;
    else
      v8 = v5 - 1;
    if ( (_DWORD)v7 != v8 )
    {
      v9 = *(_OWORD **)a1;
      v10 = v42;
      v11 = 22LL;
      v12 = 22LL;
      v13 = &v9[179 * v7];
      do
      {
        v14 = v13[1];
        *v10 = *v13;
        v15 = v13[2];
        v10[1] = v14;
        v16 = v13[3];
        v10[2] = v15;
        v17 = v13[4];
        v10[3] = v16;
        v18 = v13[5];
        v10[4] = v17;
        v19 = v13[6];
        v10[5] = v18;
        v20 = v13[7];
        v13 += 8;
        v10[6] = v19;
        v10 += 8;
        *(v10 - 1) = v20;
        --v12;
      }
      while ( v12 );
      v21 = v13[1];
      *v10 = *v13;
      v22 = v13[2];
      v10[1] = v21;
      v10[2] = v22;
      if ( v4 >= v8 )
      {
        memmove(&v9[179 * v7], &v9[179 * (unsigned int)(v7 + 1)], 2864LL * (v5 - (unsigned int)v7 - 1));
        v26 = 22LL;
        v27 = *(_OWORD **)a1;
        v28 = (_OWORD *)(*(_QWORD *)a1 + 2864LL * (unsigned int)(*(_DWORD *)(a1 + 8) - 1));
        do
        {
          *v28 = *v27;
          v28[1] = v27[1];
          v28[2] = v27[2];
          v28[3] = v27[3];
          v28[4] = v27[4];
          v28[5] = v27[5];
          v28[6] = v27[6];
          v28 += 8;
          v29 = v27[7];
          v27 += 8;
          *(v28 - 1) = v29;
          --v26;
        }
        while ( v26 );
        *v28 = *v27;
        v28[1] = v27[1];
        v28[2] = v27[2];
        v24 = *(_OWORD **)a1;
        v23 = v8;
        v25 = (_OWORD *)(*(_QWORD *)a1 + 2864LL);
      }
      else
      {
        v23 = v8 - (unsigned int)v7;
        v24 = &v9[179 * v7];
        v25 = &v9[179 * (unsigned int)(v7 + 1)];
      }
      memmove(v24, v25, 2864 * v23);
      v30 = v42;
      v31 = (_OWORD *)(*(_QWORD *)a1 + 2864LL * v8);
      do
      {
        v32 = v30[1];
        *v31 = *v30;
        v33 = v30[2];
        v31[1] = v32;
        v34 = v30[3];
        v31[2] = v33;
        v35 = v30[4];
        v31[3] = v34;
        v36 = v30[5];
        v31[4] = v35;
        v37 = v30[6];
        v31[5] = v36;
        v38 = v30[7];
        v30 += 8;
        v31[6] = v37;
        v31 += 8;
        *(v31 - 1) = v38;
        --v11;
      }
      while ( v11 );
      v39 = v30[1];
      *v31 = *v30;
      v40 = v30[2];
      v31[1] = v39;
      v31[2] = v40;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 4, 114, 87);
  }
  return v2;
}
