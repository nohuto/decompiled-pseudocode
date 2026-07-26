/*
 * XREFs of ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C00ECF6C
 * Callers:
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(_DWORD *a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r8
  _DWORD *v4; // rdx
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
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int16 v18; // ax
  char *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _OWORD *v27; // rcx
  char *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 result; // rax
  _DWORD v37[6]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h]
  __int16 v39; // [rsp+48h] [rbp-C0h]
  __int16 v40; // [rsp+4Ah] [rbp-BEh]
  int v41; // [rsp+4Ch] [rbp-BCh]
  int v42; // [rsp+50h] [rbp-B8h]
  int v43; // [rsp+54h] [rbp-B4h]
  int v44; // [rsp+58h] [rbp-B0h]
  char v45; // [rsp+5Ch] [rbp-ACh] BYREF
  char v46; // [rsp+260h] [rbp+158h] BYREF

  v1 = 8LL;
  v2 = v37;
  v4 = a1;
  do
  {
    v5 = *((_OWORD *)v4 + 1);
    *(_OWORD *)v2 = *(_OWORD *)v4;
    v6 = *((_OWORD *)v4 + 2);
    *((_OWORD *)v2 + 1) = v5;
    v7 = *((_OWORD *)v4 + 3);
    *((_OWORD *)v2 + 2) = v6;
    v8 = *((_OWORD *)v4 + 4);
    *((_OWORD *)v2 + 3) = v7;
    v9 = *((_OWORD *)v4 + 5);
    *((_OWORD *)v2 + 4) = v8;
    v10 = *((_OWORD *)v4 + 6);
    *((_OWORD *)v2 + 5) = v9;
    v11 = *((_OWORD *)v4 + 7);
    v4 += 32;
    *((_OWORD *)v2 + 6) = v10;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = *((_QWORD *)v4 + 6);
  v13 = *((_OWORD *)v4 + 1);
  *(_OWORD *)v2 = *(_OWORD *)v4;
  v14 = *((_OWORD *)v4 + 2);
  *((_OWORD *)v2 + 1) = v13;
  *((_OWORD *)v2 + 2) = v14;
  *((_QWORD *)v2 + 6) = v12;
  v2[14] = v4[14];
  memset(a1, 0, 0x43CuLL);
  v15 = a1 + 13;
  *a1 = v37[0];
  v16 = 4LL;
  v17 = 4LL;
  a1[1] = v37[1];
  a1[2] = v37[2];
  a1[3] = v37[3];
  a1[4] = v37[4];
  *((_QWORD *)a1 + 3) = v38;
  *((_WORD *)a1 + 16) = v39;
  v18 = v40;
  *((_WORD *)a1 + 1) = 1084;
  *((_WORD *)a1 + 17) = v18;
  a1[9] = v41;
  a1[10] = v42;
  a1[11] = v43;
  a1[12] = v44;
  v19 = &v45;
  do
  {
    v20 = *((_OWORD *)v19 + 1);
    *v15 = *(_OWORD *)v19;
    v21 = *((_OWORD *)v19 + 2);
    v15[1] = v20;
    v22 = *((_OWORD *)v19 + 3);
    v15[2] = v21;
    v23 = *((_OWORD *)v19 + 4);
    v15[3] = v22;
    v24 = *((_OWORD *)v19 + 5);
    v15[4] = v23;
    v25 = *((_OWORD *)v19 + 6);
    v15[5] = v24;
    v26 = *((_OWORD *)v19 + 7);
    v19 += 128;
    v15[6] = v25;
    v15 += 8;
    *(v15 - 1) = v26;
    --v17;
  }
  while ( v17 );
  *(_DWORD *)v15 = *(_DWORD *)v19;
  v27 = a1 + 142;
  v28 = &v46;
  do
  {
    v29 = *((_OWORD *)v28 + 1);
    *v27 = *(_OWORD *)v28;
    v30 = *((_OWORD *)v28 + 2);
    v27[1] = v29;
    v31 = *((_OWORD *)v28 + 3);
    v27[2] = v30;
    v32 = *((_OWORD *)v28 + 4);
    v27[3] = v31;
    v33 = *((_OWORD *)v28 + 5);
    v27[4] = v32;
    v34 = *((_OWORD *)v28 + 6);
    v27[5] = v33;
    v35 = *((_OWORD *)v28 + 7);
    v28 += 128;
    v27[6] = v34;
    v27 += 8;
    *(v27 - 1) = v35;
    --v16;
  }
  while ( v16 );
  result = *(unsigned int *)v28;
  *(_DWORD *)v27 = result;
  return result;
}
