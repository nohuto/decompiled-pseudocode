/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x18020E730
 * Callers:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801D8368 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x18020E46C (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        bool a6,
        struct InteractionOutput *a7)
{
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm1_4
  int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  __int128 v21; // [rsp+60h] [rbp-A0h]
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  _OWORD v26[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+120h] [rbp+20h] BYREF
  int v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  __int64 v31; // [rsp+140h] [rbp+40h]
  unsigned int v32; // [rsp+148h] [rbp+48h]
  unsigned int v33; // [rsp+14Ch] [rbp+4Ch]

  memset_0(&v19, 0, 0x70uLL);
  v11 = *((_DWORD *)a2 + 2);
  v12 = *((_DWORD *)a2 + 3);
  HIDWORD(v19) = 0;
  LODWORD(v22) = 0;
  *(_QWORD *)&v19 = __PAIR64__(v12, v11);
  DWORD2(v19) = *((_DWORD *)a2 + 4);
  DWORD1(v20) = *((_DWORD *)a2 + 11);
  v13 = *((_DWORD *)a2 + 10);
  DWORD1(v21) = *((_DWORD *)a2 + 7);
  v14 = *((_DWORD *)a2 + 9);
  LODWORD(v20) = v13;
  LODWORD(v21) = *((_DWORD *)a2 + 6);
  *((_QWORD *)&v21 + 1) = __PAIR64__(*((_DWORD *)a2 + 8), v14);
  DWORD2(v20) = *((_DWORD *)a2 + 12);
  DWORD1(v24) = 2;
  v15 = *((_DWORD *)a2 + 13);
  v26[0] = v19;
  HIDWORD(v20) = v15;
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
    a5,
    a6,
    (struct INTERACTION_CHANGESET *)&v27);
  memset_0(&v19, 0, 0x3CuLL);
  *((_QWORD *)&v19 + 1) = v27;
  LODWORD(v20) = v28;
  *((_QWORD *)&v21 + 1) = v29;
  *((_QWORD *)&v20 + 1) = v31;
  v16 = DWORD2(v22);
  *(_QWORD *)&v21 = __PAIR64__(v32, v33);
  v17 = v20;
  *(_OWORD *)a7 = v19;
  v18 = v21;
  *((_OWORD *)a7 + 1) = v17;
  *(_QWORD *)&v17 = v30;
  *((_OWORD *)a7 + 2) = v18;
  *((_QWORD *)a7 + 6) = v17;
  *((_DWORD *)a7 + 14) = v16;
}
