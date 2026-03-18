/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C887C
 * Callers:
 *     DoPrediction @ 0x1C01CA310 (DoPrediction.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01CA228 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 y; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+48h] BYREF
  struct tagPOINT v21; // [rsp+A8h] [rbp+50h] BYREF
  struct tagPOINT v22; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+60h] BYREF

  v22 = a3;
  v21 = a2;
  memset(a4, 0, 0x1B0uLL);
  memset((char *)a4 + 864, 0, 0x1B0uLL);
  memset((char *)a4 + 432, 0, 0x1B0uLL);
  memset((char *)a4 + 1296, 0, 0x1B0uLL);
  v9 = gPredictorRLSLambdaLearningRate;
  v10 = gPredictorRLSLambdaMax;
  v11 = gPredictorRLSLambdaMin;
  v20 = gPredictorRLSDelta;
  v19[0] = gPredictorRLSDelta;
  v23 = gPredictorRLSLambdaLearningRate;
  v17 = gPredictorRLSLambdaMax;
  v18 = gPredictorRLSLambdaMin;
  Prediction::tagRlsFilter::vInit(a4, v19, &v18, &v17, &v23);
  memset((char *)a4 + 1728, 0, 0x20uLL);
  v12 = gPredictorRLSExpoSmoothAlpha;
  *((_QWORD *)a4 + 232) = 0LL;
  *((_QWORD *)a4 + 233) = 0LL;
  if ( (__int64 *)((char *)a4 + 1856) != &v23 )
    *((_QWORD *)a4 + 232) = v12;
  *((_QWORD *)a4 + 276) = 0LL;
  v13 = (__int64)a3.x << 32;
  *((_QWORD *)a4 + 268) = v13;
  *((_QWORD *)a4 + 272) = v13;
  v17 = v20;
  v23 = v9;
  v19[0] = v10;
  v18 = v11;
  Prediction::tagRlsFilter::vInit((char *)a4 + 864, &v17, &v18, v19, &v23);
  memset((char *)a4 + 1792, 0, 0x20uLL);
  *((_QWORD *)a4 + 236) = 0LL;
  *((_QWORD *)a4 + 237) = 0LL;
  if ( (__int64 *)((char *)a4 + 1888) != &v23 )
    *((_QWORD *)a4 + 236) = v12;
  *((_QWORD *)a4 + 278) = 0LL;
  v14 = (__int64)a2.x << 32;
  *((_QWORD *)a4 + 270) = v14;
  *((_QWORD *)a4 + 274) = v14;
  v17 = v20;
  v23 = v9;
  v19[0] = v10;
  v18 = v11;
  Prediction::tagRlsFilter::vInit((char *)a4 + 432, &v17, &v18, v19, &v23);
  memset((char *)a4 + 1760, 0, 0x20uLL);
  *((_QWORD *)a4 + 234) = 0LL;
  *((_QWORD *)a4 + 235) = 0LL;
  if ( (__int64 *)((char *)a4 + 1872) != &v23 )
    *((_QWORD *)a4 + 234) = v12;
  y = v22.y;
  *((_QWORD *)a4 + 277) = 0LL;
  y <<= 32;
  *((_QWORD *)a4 + 269) = y;
  *((_QWORD *)a4 + 273) = y;
  v22 = (struct tagPOINT)v9;
  v23 = v10;
  v19[0] = v11;
  Prediction::tagRlsFilter::vInit((char *)a4 + 1296, &v20, v19, &v23, &v22);
  memset((char *)a4 + 1824, 0, 0x20uLL);
  *((_QWORD *)a4 + 238) = 0LL;
  *((_QWORD *)a4 + 239) = 0LL;
  if ( (struct tagPOINT *)((char *)a4 + 1904) != &v22 )
    *((_QWORD *)a4 + 238) = v12;
  v16 = (__int64)v21.y << 32;
  *((_QWORD *)a4 + 271) = v16;
  *((_QWORD *)a4 + 275) = v16;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset((char *)a4 + 1920, 0, 0x58uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset((char *)a4 + 2008, 0, 0x58uLL);
  *((_DWORD *)a4 + 502) = 3;
  v22.x = 0;
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter(a4, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v23, (__int64)&v20, (__int64)&v21, &v22);
  *a5 = a2;
  *a6 = a3;
}
