/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180049870
 * Callers:
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x1800573A0 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x180068310 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     GetRigToHead @ 0x1800912BC (GetRigToHead.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float4x4 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  bool result; // al
  float v22; // xmm6_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm14_4
  float v27; // xmm15_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // [rsp+0h] [rbp-D8h]
  float v36; // [rsp+4h] [rbp-D4h]
  float v37; // [rsp+8h] [rbp-D0h]
  float v38; // [rsp+Ch] [rbp-CCh]
  float v39; // [rsp+10h] [rbp-C8h]
  float v40; // [rsp+14h] [rbp-C4h]
  float v41; // [rsp+18h] [rbp-C0h]
  float v42; // [rsp+1Ch] [rbp-BCh]
  float v43; // [rsp+20h] [rbp-B8h]
  float v44; // [rsp+24h] [rbp-B4h]
  float v45; // [rsp+28h] [rbp-B0h]
  float v46; // [rsp+E0h] [rbp+8h]
  float v47; // [rsp+F0h] [rbp+18h]
  float v48; // [rsp+F8h] [rbp+20h]

  v3 = *((float *)this + 10);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 8);
  v35 = *(float *)this;
  v46 = *((float *)this + 1);
  v47 = *((float *)this + 2);
  v48 = *((float *)this + 3);
  v37 = *((float *)this + 7);
  v7 = *((float *)this + 14);
  v8 = *((float *)this + 15);
  v38 = *((float *)this + 12);
  v9 = (float)(v8 * v3) - (float)(v7 * v4);
  v45 = v6;
  v42 = v4;
  v40 = *((float *)this + 13);
  v10 = (float)(v8 * v5) - (float)(v40 * v4);
  v43 = v3;
  v44 = v5;
  v11 = (float)(v7 * v5) - (float)(v40 * v3);
  v41 = *((float *)this + 4);
  v39 = *((float *)this + 5);
  v12 = (float)(v8 * v6) - (float)(v38 * v4);
  v36 = *((float *)this + 6);
  v13 = (float)(v7 * v6) - (float)(v38 * v3);
  v14 = (float)(v40 * v6) - (float)(v38 * v5);
  v15 = (float)((float)(v9 * v39) - (float)(v10 * v36)) + (float)(v11 * v37);
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(v9 * v41) - (float)(v12 * v36)) + (float)(v13 * v37)) ^ _xmm;
  v17 = (float)((float)(v10 * v41) - (float)(v12 * v39)) + (float)(v14 * v37);
  LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v11 * v41) - (float)(v13 * v39)) + (float)(v14 * v36)) ^ _xmm;
  v19 = (float)((float)((float)(v16 * v46) + (float)(v15 * *(float *)this)) + (float)(v17 * v47)) + (float)(v18 * v48);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
  if ( v20 >= 0.00000011920929 )
  {
    v22 = 1.0 / v19;
    *(float *)a2 = (float)(1.0 / v19) * v15;
    *((float *)a2 + 4) = (float)(1.0 / v19) * v16;
    *((float *)a2 + 8) = (float)(1.0 / v19) * v17;
    *((float *)a2 + 12) = (float)(1.0 / v19) * v18;
    *((float *)a2 + 5) = (float)((float)((float)(v9 * v35) - (float)(v12 * v47)) + (float)(v13 * v48))
                       * (float)(1.0 / v19);
    *((_DWORD *)a2 + 9) = COERCE_UNSIGNED_INT(
                            (float)((float)((float)(v10 * v35) - (float)(v12 * v46)) + (float)(v14 * v48))
                          * (float)(1.0 / v19)) ^ _xmm;
    *((_DWORD *)a2 + 1) = COERCE_UNSIGNED_INT(
                            (float)((float)((float)(v9 * v46) - (float)(v10 * v47)) + (float)(v11 * v48))
                          * (float)(1.0 / v19)) ^ _xmm;
    v23 = (float)(v8 * v36) - (float)(v7 * v37);
    *((float *)a2 + 13) = (float)((float)((float)(v11 * v35) - (float)(v13 * v46)) + (float)(v14 * v47))
                        * (float)(1.0 / v19);
    v24 = (float)(v8 * v39) - (float)(v40 * v37);
    v25 = (float)(v7 * v39) - (float)(v40 * v36);
    v26 = (float)(v8 * v41) - (float)(v38 * v37);
    v27 = (float)(v7 * v41) - (float)(v38 * v36);
    v28 = (float)(v40 * v41) - (float)(v38 * v39);
    *((float *)a2 + 2) = (float)((float)((float)(v23 * v46) - (float)(v24 * v47)) + (float)(v25 * v48)) * v22;
    *((_DWORD *)a2 + 6) = COERCE_UNSIGNED_INT((float)((float)((float)(v23 * v35) - (float)(v26 * v47))
                                                    + (float)(v27 * v48)) * v22) ^ _xmm;
    *((float *)a2 + 10) = (float)((float)((float)(v24 * v35) - (float)(v26 * v46)) + (float)(v28 * v48)) * v22;
    *((_DWORD *)a2 + 14) = COERCE_UNSIGNED_INT((float)((float)((float)(v25 * v35) - (float)(v27 * v46))
                                                     + (float)(v28 * v47)) * v22) ^ _xmm;
    v29 = (float)(v42 * v36) - (float)(v43 * v37);
    v30 = (float)(v42 * v39) - (float)(v44 * v37);
    v31 = (float)(v43 * v39) - (float)(v44 * v36);
    v32 = (float)(v42 * v41) - (float)(v45 * v37);
    v33 = (float)(v43 * v41) - (float)(v45 * v36);
    v34 = (float)(v44 * v41) - (float)(v45 * v39);
    result = 1;
    *((_DWORD *)a2 + 3) = COERCE_UNSIGNED_INT((float)((float)((float)(v29 * v46) - (float)(v30 * v47))
                                                    + (float)(v31 * v48)) * v22) ^ _xmm;
    *((_DWORD *)a2 + 11) = COERCE_UNSIGNED_INT((float)((float)((float)(v30 * v35) - (float)(v32 * v46))
                                                     + (float)(v34 * v48)) * v22) ^ _xmm;
    *((float *)a2 + 7) = (float)((float)((float)(v29 * v35) - (float)(v32 * v47)) + (float)(v33 * v48)) * v22;
    *((float *)a2 + 15) = (float)((float)((float)(v31 * v35) - (float)(v33 * v46)) + (float)(v34 * v47)) * v22;
  }
  else
  {
    result = 0;
    *(_OWORD *)a2 = _xmm;
    *((_OWORD *)a2 + 1) = _xmm;
    *((_OWORD *)a2 + 2) = _xmm;
    *((_OWORD *)a2 + 3) = _xmm;
  }
  return result;
}
