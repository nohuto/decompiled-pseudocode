/*
 * XREFs of ?GetEncoderStaticObjectPosition@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM11@Z @ 0x1800D2170
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
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
  __int64 v11; // rax
  __int64 v12; // rcx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v16; // [rsp+30h] [rbp-51h] BYREF
  double v17; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-21h] BYREF
  int *v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  double *v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && a5 )
  {
    v11 = *((_QWORD *)this + 8);
    v17 = (double)(a2 | 1);
    v12 = 2LL * (unsigned int)((HIDWORD(v17) >> 20) - 1024);
    *(_DWORD *)a3 = *(_OWORD *)(v11 + 16LL * (unsigned int)((HIDWORD(v17) >> 20) - 1024));
    *a4 = *(float *)(v11 + 8 * v12 + 8);
    *a5 = *(float *)(v11 + 8 * v12 + 4);
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition");
      v16 = 594;
      v20 = &v16;
      v22 = &v17;
      v21 = 4LL;
      LODWORD(v17) = -2147024809;
      v23 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v13, v14, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v10;
}
