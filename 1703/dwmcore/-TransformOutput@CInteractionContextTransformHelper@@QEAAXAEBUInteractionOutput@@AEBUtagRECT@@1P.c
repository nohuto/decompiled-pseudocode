/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1PEAU2@@Z @ 0x1801B2190
 * Callers:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180190BC8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1PEAU2@@Z @ 0x1801B1EF8 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct InteractionOutput *a5)
{
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm1_4
  int v11; // xmm1_4
  unsigned int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // eax
  __int128 v15; // xmm1
  __m128 v16; // xmm2
  __int128 v17; // xmm0
  __m128 v18; // xmm1
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  _OWORD v26[7]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+110h] [rbp+10h] BYREF
  int v28; // [rsp+118h] [rbp+18h]
  __int64 v29; // [rsp+120h] [rbp+20h]
  unsigned int v30; // [rsp+128h] [rbp+28h]
  unsigned int v31; // [rsp+12Ch] [rbp+2Ch]
  __int64 v32; // [rsp+130h] [rbp+30h]
  unsigned int v33; // [rsp+138h] [rbp+38h]
  unsigned int v34; // [rsp+13Ch] [rbp+3Ch]

  memset_0(&v19, 0, 0x70uLL);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 3);
  HIDWORD(v19) = 0;
  LODWORD(v22) = 0;
  *(_QWORD *)&v19 = __PAIR64__(v10, v9);
  DWORD2(v19) = *((_DWORD *)a2 + 4);
  DWORD1(v20) = *((_DWORD *)a2 + 11);
  v11 = *((_DWORD *)a2 + 10);
  DWORD1(v21) = *((_DWORD *)a2 + 7);
  v12 = *((_DWORD *)a2 + 9);
  LODWORD(v20) = v11;
  LODWORD(v21) = *((_DWORD *)a2 + 6);
  *((_QWORD *)&v21 + 1) = __PAIR64__(*((_DWORD *)a2 + 8), v12);
  DWORD2(v20) = *((_DWORD *)a2 + 12);
  DWORD1(v24) = 2;
  v13 = *((_DWORD *)a2 + 13);
  v26[0] = v19;
  HIDWORD(v20) = v13;
  v26[2] = v21;
  v26[1] = v20;
  v26[4] = v23;
  v26[3] = v22;
  v26[6] = v25;
  v26[5] = v24;
  memset_0(&v27, 0, 0x70uLL);
  CInteractionContextTransformHelper::TransformOutput(
    this,
    (const struct INTERACTION_CHANGESET *)v26,
    a3,
    a4,
    (struct INTERACTION_CHANGESET *)&v27);
  memset_0(&v19, 0, 0x3CuLL);
  *((_QWORD *)&v19 + 1) = v27;
  LODWORD(v20) = v28;
  *((_QWORD *)&v21 + 1) = v29;
  *((_QWORD *)&v20 + 1) = v32;
  *(_QWORD *)&v21 = __PAIR64__(v33, v34);
  v14 = DWORD2(v22);
  v15 = v20;
  v16 = (__m128)v31;
  *(_OWORD *)a5 = v19;
  v17 = v21;
  *((_OWORD *)a5 + 1) = v15;
  v18 = (__m128)v30;
  *((_OWORD *)a5 + 2) = v17;
  *((_QWORD *)a5 + 6) = _mm_unpacklo_ps(v18, v16).m128_u64[0];
  *((_DWORD *)a5 + 14) = v14;
}
