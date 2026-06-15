/*
 * XREFs of ?GetStaticObjectVolume@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM@Z @ 0x1800D2E80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetStaticObjectVolume(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-39h] BYREF
  double v13; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  double *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v10 = *((_QWORD *)this + 7);
    v13 = (double)(a2 | 1);
    *a3 = *(float *)(v10 + 16LL * (unsigned int)((HIDWORD(v13) >> 20) - 1024) + 12);
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetStaticObjectVolume");
      v12 = 631;
      v16 = &v12;
      v18 = &v13;
      v17 = 4LL;
      LODWORD(v13) = -2147024809;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v8, v9, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
