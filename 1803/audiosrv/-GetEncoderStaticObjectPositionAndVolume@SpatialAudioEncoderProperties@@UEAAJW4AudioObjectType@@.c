/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x180104E80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume(
        SpatialAudioEncoderProperties *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v10; // ebx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // edi
  double v15; // xmm0_8
  int v17; // [rsp+30h] [rbp-59h] BYREF
  double v18; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  const char *v20; // [rsp+60h] [rbp-29h]
  __int64 v21; // [rsp+68h] [rbp-21h]
  int *v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  int *v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  LODWORD(v18) = a2;
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v13 = *((_QWORD *)this + 6);
  if ( !v13 )
  {
    v14 = -2147418113;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v21 = 71LL;
      v20 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      v17 = 426;
      v22 = &v17;
      v23 = 4LL;
      LODWORD(v18) = -2147418113;
      v24 = (int *)&v18;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v11, v12, 5u, &pData);
    }
    return v14;
  }
  if ( !a3 || !a4 || !a5 )
  {
    v14 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v21 = 71LL;
      v20 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      LODWORD(v18) = 427;
      v22 = (int *)&v18;
      v23 = 4LL;
      v17 = -2147024809;
      v24 = &v17;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v11, v12, 5u, &pData);
    }
    return v14;
  }
  v15 = (double)(LODWORD(v18) | 1);
  v18 = v15;
  *(_DWORD *)a3 = *(_OWORD *)(v13 + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024));
  *a4 = *(float *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 4);
  *a5 = *(float *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 8);
  if ( a6 )
    *a6 = *(float *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 12);
  return v10;
}
