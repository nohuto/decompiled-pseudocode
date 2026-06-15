/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x1800D6DC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v8; // r14
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // edi
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  float *v16; // rdx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v20; // [rsp+30h] [rbp-59h] BYREF
  float *v21; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-29h] BYREF
  float **v24; // [rsp+70h] [rbp-19h]
  __int64 v25; // [rsp+78h] [rbp-11h]
  float **v26; // [rsp+80h] [rbp-9h]
  __int64 v27; // [rsp+88h] [rbp-1h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v8 = a2;
  v21 = a6;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  v12 = *((_QWORD *)this + 7);
  if ( !v12 )
  {
    v13 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex");
      v20 = 445;
      v24 = (float **)&v20;
      v26 = &v21;
      v25 = 4LL;
      LODWORD(v21) = -2147418113;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v14, v15, 5u, &pData);
    }
    return v13;
  }
  if ( !a3 || !a4 || !a5 || (unsigned int)v8 >= 0x11 )
  {
    v13 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex");
      LODWORD(v21) = 446;
      v24 = &v21;
      v26 = (float **)&v20;
      v25 = 4LL;
      v20 = -2147024809;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v17, v18, 5u, &pData);
    }
    return v13;
  }
  v16 = v21;
  *(_DWORD *)a3 = *(_OWORD *)(v12 + 16 * v8);
  *a4 = *(float *)(*((_QWORD *)this + 7) + 16 * v8 + 4);
  *a5 = *(float *)(*((_QWORD *)this + 7) + 16 * v8 + 8);
  if ( v16 )
    *v16 = *(float *)(*((_QWORD *)this + 7) + 16 * v8 + 12);
  return v11;
}
