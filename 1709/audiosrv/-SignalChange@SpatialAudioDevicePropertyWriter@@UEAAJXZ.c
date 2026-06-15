/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1800D1060
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D1010 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // ebx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  struct tagPROPVARIANT v9; // [rsp+38h] [rbp-51h] BYREF
  struct _tagpropertykey v10; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  int *v13; // [rsp+A0h] [rbp+17h]
  __int64 v14; // [rsp+A8h] [rbp+1Fh]
  int *v15; // [rsp+B0h] [rbp+27h]
  __int64 v16; // [rsp+B8h] [rbp+2Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  memset(&v9, 0, sizeof(v9));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v1 )
    LeaveCriticalSection(v1);
  v9.iVal = 0;
  v10.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  v9.vt = 2;
  v10.pid = 2;
  v8 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v10, &v9);
  v3 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 26) = 0;
  }
  else if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SignalChange");
    v7 = 187;
    v13 = &v7;
    v15 = &v8;
    v14 = 4LL;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v4, v5, 5u, &pData);
  }
  return v3;
}
