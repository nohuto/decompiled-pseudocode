/*
 * XREFs of ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800D1EB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDeviceSettings(
        SpatialAudioDevicePropertyReader *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  size_t v5; // r12
  unsigned int v9; // ebx
  unsigned int v10; // edi
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  const void *v15; // rdx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v21; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v22[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v25; // [rsp+70h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp-1h]
  int *v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !*((_DWORD *)this + 130) )
  {
    v10 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetDeviceSettings");
      v21 = 689;
      v25 = &v21;
      v27 = v22;
      v26 = 4LL;
      v22[0] = -2147418113;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v11, v12, 5u, &pData);
    }
    return v10;
  }
  if ( !a2 )
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetDeviceSettings");
      v22[0] = 690;
      v25 = v22;
      v27 = &v21;
      v26 = 4LL;
      v21 = -2147024809;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v13, v14, 5u, &pData);
    }
    return v10;
  }
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 440);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 456);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 472);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 488);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 63);
  if ( (_DWORD)v5 )
  {
    v15 = (const void *)*((_QWORD *)this + 64);
    if ( !v15 )
    {
      v10 = -2147418113;
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetDeviceSettings");
        v22[0] = 696;
        v25 = v22;
        v27 = &v21;
        v26 = 4LL;
        v21 = -2147418113;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v16, v17, 5u, &pData);
      }
      return v10;
    }
    if ( !a3 || v5 != 834LL * *((unsigned int *)this + 108) )
    {
      v10 = -2147024809;
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetDeviceSettings");
        v22[0] = 697;
        v25 = v22;
        v27 = &v21;
        v26 = 4LL;
        v21 = -2147024809;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v18, v19, 5u, &pData);
      }
      return v10;
    }
    memcpy_0(a3, v15, v5);
  }
  return v9;
}
