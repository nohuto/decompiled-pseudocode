/*
 * XREFs of ?GetEncoderStaticObjectPosition@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM11@Z @ 0x180100F10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-51h] BYREF
  double v17; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  const char *v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  int *v21; // [rsp+70h] [rbp-11h]
  __int64 v22; // [rsp+78h] [rbp-9h]
  double *v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && a5 )
  {
    v13 = *((_QWORD *)this + 7);
    v17 = (double)(a2 | 1);
    v14 = 2LL * (unsigned int)((HIDWORD(v17) >> 20) - 1024);
    *(_DWORD *)a3 = *(_OWORD *)(v13 + 16LL * (unsigned int)((HIDWORD(v17) >> 20) - 1024));
    *a4 = *(float *)(v13 + 8 * v14 + 8);
    *a5 = *(float *)(v13 + 8 * v14 + 4);
  }
  else
  {
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v20 = 65LL;
      v19 = "SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition";
      v21 = &v16;
      v23 = &v17;
      v16 = 594;
      v22 = 4LL;
      LODWORD(v17) = -2147024809;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v11, v12, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v10;
}
