/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x1800D6BD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
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
  __int64 v11; // rdx
  unsigned int v12; // edi
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  double v15; // xmm0_8
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int v19; // [rsp+30h] [rbp-59h] BYREF
  double v20; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-29h] BYREF
  int *v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  int *v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  LODWORD(v20) = a2;
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  v11 = *((_QWORD *)this + 7);
  if ( !v11 )
  {
    v12 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume");
      v19 = 424;
      v23 = &v19;
      v25 = (int *)&v20;
      v24 = 4LL;
      LODWORD(v20) = -2147418113;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v13, v14, 5u, &pData);
    }
    return v12;
  }
  if ( !a3 || !a4 || !a5 )
  {
    v12 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume");
      LODWORD(v20) = 425;
      v23 = (int *)&v20;
      v25 = &v19;
      v24 = 4LL;
      v19 = -2147024809;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v16, v17, 5u, &pData);
    }
    return v12;
  }
  v15 = (double)(LODWORD(v20) | 1);
  v20 = v15;
  *(_DWORD *)a3 = *(_OWORD *)(v11 + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024));
  *a4 = *(float *)(*((_QWORD *)this + 7) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 4);
  *a5 = *(float *)(*((_QWORD *)this + 7) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 8);
  if ( a6 )
    *a6 = *(float *)(*((_QWORD *)this + 7) + 16LL * (unsigned int)((HIDWORD(v15) >> 20) - 1024) + 12);
  return v10;
}
