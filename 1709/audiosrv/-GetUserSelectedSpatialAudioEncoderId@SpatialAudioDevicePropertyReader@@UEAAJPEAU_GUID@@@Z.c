/*
 * XREFs of ?GetUserSelectedSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x1800D2FA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  GUID v8; // xmm0
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 110) )
    {
      if ( *((_DWORD *)this + 130) )
        v8 = *(GUID *)((char *)this + 452);
      else
        v8 = *(GUID *)((char *)this + 116);
    }
    else
    {
      v8 = GUID_00000000_0000_0000_0000_000000000000;
    }
    *a2 = v8;
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioEncoderId");
      v10 = 895;
      v14 = &v10;
      v16 = &v11;
      v15 = 4LL;
      v11 = -2147024809;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
