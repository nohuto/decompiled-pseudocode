/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMMH@Z @ 0x180085460
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        unsigned int a15)
{
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+38h] [rbp-59h] BYREF
  int v25; // [rsp+3Ch] [rbp-55h]
  float v26; // [rsp+40h] [rbp-51h]
  int v27; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v28[9]; // [rsp+4Ch] [rbp-45h] BYREF
  __int128 v29; // [rsp+70h] [rbp-21h]
  char *v30; // [rsp+A8h] [rbp+17h] BYREF

  v30 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v27 = 335;
  memset_0(v28, 0, 0x2CuLL);
  *(float *)&v28[1] = a7;
  *(float *)&v28[2] = a8;
  *(float *)&v28[3] = a9;
  *(float *)&v28[4] = a10;
  *(float *)&v28[5] = a11;
  *(float *)&v28[6] = a12;
  *(float *)&v28[7] = a13;
  *(float *)&v28[8] = a14;
  v28[0] = a2;
  *(_QWORD *)&v29 = a15;
  v17 = CChannel::SendCommand(this, &v27, 0x30u);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x73Au);
  }
  else
  {
    v24 = 333;
    v26 = a3;
    v25 = a2;
    v19 = CChannel::SendCommand(this, &v24, 0xCu);
    v18 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x742u);
    }
    else
    {
      v24 = 338;
      v26 = a4;
      v25 = a2;
      v20 = CChannel::SendCommand(this, &v24, 0xCu);
      v18 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x74Au);
      }
      else
      {
        v24 = 336;
        v26 = a5;
        v25 = a2;
        v21 = CChannel::SendCommand(this, &v24, 0xCu);
        v18 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x752u);
        }
        else
        {
          v24 = 332;
          v26 = a6;
          v25 = a2;
          v22 = CChannel::SendCommand(this, &v24, 0xCu);
          v18 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x75Au);
        }
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v30);
  return v18;
}
