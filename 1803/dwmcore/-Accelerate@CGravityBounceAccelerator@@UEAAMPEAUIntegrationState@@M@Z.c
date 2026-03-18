/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1801CCD00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     IsWithinThresholdF @ 0x1801CCFB0 (IsWithinThresholdF.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(
        CGravityBounceAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  __int64 v3; // r8
  float v4; // xmm1_4
  char *v5; // rbx
  float v6; // xmm7_4
  float v8; // xmm6_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  bool v15; // zf
  float v16; // xmm2_4
  float v17; // xmm0_4
  unsigned int v18; // edx
  const struct _TlgProvider_t *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  float v24; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  float *v28; // [rsp+78h] [rbp-90h]
  unsigned int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  char *v31; // [rsp+88h] [rbp-80h]
  unsigned int v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+94h] [rbp-74h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  unsigned int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  unsigned int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  float *v40; // [rsp+B8h] [rbp-50h]
  unsigned int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  __int64 v43; // [rsp+C8h] [rbp-40h]
  unsigned int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  unsigned int v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E4h] [rbp-24h]
  float v49; // [rsp+158h] [rbp+50h] BYREF

  v49 = a3;
  v4 = *((float *)this + 6);
  v5 = (char *)a2 + 4;
  v6 = *((float *)a2 + 1);
  v8 = 0.0;
  v24 = 0.0;
  if ( !(unsigned __int8)IsWithinThresholdF(this, a2, v3, this) )
  {
    LODWORD(v8) = COERCE_UNSIGNED_INT((float)((float)(v6 - v4) > 0.0) * *(float *)(v11 + 32)) ^ _xmm;
LABEL_5:
    v24 = v8;
    goto LABEL_15;
  }
  v12 = *(float *)(v9 + 8);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm)) & _xmm);
  if ( *(float *)(v9 + 12) > v13 )
  {
    v8 = v12 / -0.0099999998;
    goto LABEL_5;
  }
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  if ( v14 >= 0.0000011920929 )
  {
    v15 = *(_BYTE *)(v10 + 48) == 0;
    v8 = v12 * *(float *)(v10 + 40);
    v24 = v8;
    if ( v15 )
    {
      *(_BYTE *)(v10 + 48) = 1;
    }
    else
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v10 + 44)) & _xmm);
      if ( v16 > v17 )
      {
        if ( (float)(*(float *)(v10 + 52) > 0.0) == (float)(v12 > 0.0) )
          v8 = *(float *)(v11 + 44) * *(float *)(v11 + 36);
        else
          v8 = v12 / -0.0099999998;
        v24 = v8;
      }
    }
    *(float *)(v11 + 44) = v8;
    *(_DWORD *)(v11 + 52) = *(_DWORD *)(v9 + 8);
  }
LABEL_15:
  if ( *(_DWORD *)(v11 + 56) && dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 4uLL) )
  {
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v28 = &v24;
    v34 = v21 + 8;
    v40 = &v49;
    v43 = v20 + 28;
    v46 = v20 + 36;
    v26 = v22;
    v27 = v18;
    v29 = v18;
    v31 = v5;
    v32 = v18;
    v35 = v18;
    v37 = v21;
    v38 = v18;
    v41 = v18;
    v44 = v18;
    v47 = v18;
    TlgWrite(v19, &unk_1802A9C07, 0LL, 0LL, 0xAu, &pData);
    return v24;
  }
  return v8;
}
