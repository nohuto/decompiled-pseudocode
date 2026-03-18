/*
 * XREFs of ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180167D74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B9C0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180167F14 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801681EC (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 */

__int64 __fastcall CManipulation::InjectManipulation(CManipulation *this, const struct InjectManipulationArgs *a2)
{
  int *v2; // r8
  __int64 v3; // xmm0_8
  bool v4; // dl
  __int64 v5; // xmm2_8
  bool v6; // cf
  int v7; // eax
  char v8; // dl
  int v9; // eax
  char v10; // dl
  int v11; // eax
  CManipulation *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-59h] BYREF
  int v15; // [rsp+28h] [rbp-51h]
  __int64 v16; // [rsp+2Ch] [rbp-4Dh]
  int v17; // [rsp+34h] [rbp-45h]
  __int64 v18; // [rsp+38h] [rbp-41h]
  int v19; // [rsp+40h] [rbp-39h]
  __int64 v20; // [rsp+44h] [rbp-35h]
  int v21; // [rsp+4Ch] [rbp-2Dh]
  int v22; // [rsp+50h] [rbp-29h]
  __int64 v23; // [rsp+54h] [rbp-25h]
  int v24; // [rsp+5Ch] [rbp-1Dh]
  __int64 v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  __int64 v27; // [rsp+ACh] [rbp+33h]
  int v28; // [rsp+B4h] [rbp+3Bh]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]
  int v31; // [rsp+C0h] [rbp+47h]
  int v32; // [rsp+C4h] [rbp+4Bh]
  char v33; // [rsp+C8h] [rbp+4Fh]

  ManipulationData::Reset((ManipulationData *)&v14);
  v3 = *((_QWORD *)v2 + 5);
  v4 = v2[1] != 0;
  v5 = *(_QWORD *)(v2 + 7);
  v15 = v2[9];
  v17 = v2[12];
  v19 = v2[15];
  v21 = v2[18];
  v24 = v2[29];
  v26 = v2[22];
  v28 = v2[25];
  v30 = *v2;
  v31 = v2[30];
  v32 = v2[31];
  v16 = v3;
  v6 = v2[2] != 0;
  v18 = *(_QWORD *)(v2 + 13);
  v7 = v2[3];
  v20 = *((_QWORD *)v2 + 8);
  v8 = (v6 ? 2 : 0) | v33 & 0xF8 | v4 & 0xF9;
  v22 = v2[19];
  v6 = v7 != 0;
  v9 = v2[4];
  v23 = *(_QWORD *)(v2 + 27);
  v25 = *((_QWORD *)v2 + 10);
  v10 = (v6 ? 4 : 0) | v8 & 0xF7;
  v6 = v9 != 0;
  v27 = *(_QWORD *)(v2 + 23);
  v11 = v2[5];
  v29 = v2[26];
  v14 = v5;
  v33 = (v11 != 0 ? 0x10 : 0) | (v6 ? 8 : 0) | v10 & 0xEF;
  return CManipulation::Update(v12, (struct ManipulationData *)&v14);
}
