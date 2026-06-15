/*
 * XREFs of ?IsSpatialAudioEnabled@SpatialAudioDevicePropertyReader@@UEAAJPEAH@Z @ 0x1800D31C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::IsSpatialAudioEnabled(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  unsigned int v6; // edi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v12; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  int *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 130) )
  {
    if ( a2 )
    {
      *a2 = *((_DWORD *)this + 110);
      return v5;
    }
    v6 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::IsSpatialAudioEnabled");
      v13[0] = 711;
      v16 = v13;
      v18 = &v12;
      v17 = 4LL;
      v12 = -2147024809;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v6 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::IsSpatialAudioEnabled");
      v12 = 710;
      v16 = &v12;
      v18 = v13;
      v17 = 4LL;
      v13[0] = -2147418113;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v7, v8, 5u, &pData);
    }
  }
  return v6;
}
