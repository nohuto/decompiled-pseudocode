/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1_NPEAU2@@Z @ 0x1801CDE0C
 * Callers:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x18019F2D8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1_NPEAU2@@Z @ 0x1801CDB4C (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool a5,
        struct InteractionOutput *a6)
{
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  int v12; // xmm1_4
  unsigned int v13; // xmm0_4
  int v14; // xmm1_4
  __int128 v15; // xmm1
  int v16; // eax
  __m128 v17; // xmm2
  __int128 v18; // xmm0
  __m128 v19; // xmm1
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  _OWORD v27[7]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+110h] [rbp+10h] BYREF
  int v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  unsigned int v31; // [rsp+128h] [rbp+28h]
  unsigned int v32; // [rsp+12Ch] [rbp+2Ch]
  __int64 v33; // [rsp+130h] [rbp+30h]
  unsigned int v34; // [rsp+138h] [rbp+38h]
  unsigned int v35; // [rsp+13Ch] [rbp+3Ch]

  memset_0(&v20, 0, 0x70uLL);
  v10 = *((_DWORD *)a2 + 2);
  v11 = *((_DWORD *)a2 + 3);
  HIDWORD(v20) = 0;
  LODWORD(v23) = 0;
  *(_QWORD *)&v20 = __PAIR64__(v11, v10);
  DWORD2(v20) = *((_DWORD *)a2 + 4);
  DWORD1(v21) = *((_DWORD *)a2 + 11);
  v12 = *((_DWORD *)a2 + 10);
  DWORD1(v22) = *((_DWORD *)a2 + 7);
  v13 = *((_DWORD *)a2 + 9);
  LODWORD(v21) = v12;
  LODWORD(v22) = *((_DWORD *)a2 + 6);
  *((_QWORD *)&v22 + 1) = __PAIR64__(*((_DWORD *)a2 + 8), v13);
  DWORD2(v21) = *((_DWORD *)a2 + 12);
  DWORD1(v25) = 2;
  v14 = *((_DWORD *)a2 + 13);
  v27[0] = v20;
  HIDWORD(v21) = v14;
  v27[2] = v22;
  v27[1] = v21;
  v27[4] = v24;
  v27[3] = v23;
  v27[6] = v26;
  v27[5] = v25;
  memset_0(&v28, 0, 0x70uLL);
  CInteractionContextTransformHelper::TransformOutput(
    this,
    (const struct INTERACTION_CHANGESET *)v27,
    a3,
    a4,
    a5,
    (struct INTERACTION_CHANGESET *)&v28);
  memset_0(&v20, 0, 0x3CuLL);
  *((_QWORD *)&v20 + 1) = v28;
  LODWORD(v21) = v29;
  *((_QWORD *)&v22 + 1) = v30;
  *((_QWORD *)&v21 + 1) = v33;
  *(_QWORD *)&v22 = __PAIR64__(v34, v35);
  v15 = v21;
  v16 = DWORD2(v23);
  v17 = (__m128)v32;
  *(_OWORD *)a6 = v20;
  v18 = v22;
  *((_OWORD *)a6 + 1) = v15;
  v19 = (__m128)v31;
  *((_OWORD *)a6 + 2) = v18;
  *((_QWORD *)a6 + 6) = _mm_unpacklo_ps(v19, v17).m128_u64[0];
  *((_DWORD *)a6 + 14) = v16;
}
