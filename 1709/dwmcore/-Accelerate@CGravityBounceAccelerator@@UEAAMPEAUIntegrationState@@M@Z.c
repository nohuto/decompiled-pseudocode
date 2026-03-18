/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180193460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     IsWithinThresholdF @ 0x180193664 (IsWithinThresholdF.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(
        CGravityBounceAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  float v3; // xmm1_4
  float v4; // xmm7_4
  float v6; // xmm6_4
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  float v10; // xmm2_4
  float v11; // xmm1_4
  bool v12; // zf
  float v13; // xmm2_4
  float v14; // xmm0_4
  int v15; // edx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  float v22; // [rsp+38h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-69h] BYREF
  const GUID *v24; // [rsp+68h] [rbp-49h]
  int v25; // [rsp+70h] [rbp-41h]
  int v26; // [rsp+74h] [rbp-3Dh]
  float *v27; // [rsp+78h] [rbp-39h]
  int v28; // [rsp+80h] [rbp-31h]
  int v29; // [rsp+84h] [rbp-2Dh]
  __int64 v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+90h] [rbp-21h]
  int v32; // [rsp+94h] [rbp-1Dh]
  __int64 v33; // [rsp+98h] [rbp-19h]
  int v34; // [rsp+A0h] [rbp-11h]
  int v35; // [rsp+A4h] [rbp-Dh]
  __int64 v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+B0h] [rbp-1h]
  int v38; // [rsp+B4h] [rbp+3h]
  float *v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+C0h] [rbp+Fh]
  int v41; // [rsp+C4h] [rbp+13h]
  float v42; // [rsp+128h] [rbp+77h] BYREF

  v42 = a3;
  v3 = *((float *)this + 6);
  v4 = *((float *)a2 + 1);
  v6 = 0.0;
  v22 = 0.0;
  if ( !(unsigned __int8)IsWithinThresholdF(this, a2, this) )
  {
    LODWORD(v6) = COERCE_UNSIGNED_INT((float)((float)(v4 - v3) > 0.0) * *(float *)(v9 + 28)) ^ _xmm;
LABEL_5:
    v22 = v6;
    goto LABEL_12;
  }
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v7 + 8)) & _xmm)) & _xmm);
  if ( *(float *)(v7 + 12) > v10 )
  {
    v6 = *(float *)(v7 + 8) / -0.0099999998;
    goto LABEL_5;
  }
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  if ( v11 >= 0.0000011920929 )
  {
    v12 = *(_BYTE *)(v8 + 44) == 0;
    v6 = *(float *)(v7 + 8) * *(float *)(v8 + 36);
    v22 = v6;
    if ( v12 )
    {
      *(_BYTE *)(v8 + 44) = 1;
    }
    else
    {
      v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v8 + 40)) & _xmm);
      if ( v13 > v14 )
      {
        v6 = *(float *)(v8 + 40) * *(float *)(v8 + 32);
        v22 = v6;
      }
    }
    *(float *)(v8 + 40) = v6;
  }
LABEL_12:
  if ( *(_DWORD *)(v9 + 48) && dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v27 = &v22;
    v33 = v19 + 8;
    v39 = &v42;
    v24 = v18;
    v25 = v15;
    v28 = v15;
    v30 = v20;
    v31 = v15;
    v34 = v15;
    v36 = v19;
    v37 = v15;
    v40 = v15;
    TlgWrite(v16, &unk_180214C6C, v17, v18, 8u, &pData);
    return v22;
  }
  return v6;
}
