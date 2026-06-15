/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1800D0300
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D1010 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // edi
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  char v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  struct tagPROPVARIANT v12; // [rsp+40h] [rbp-59h] BYREF
  struct _tagpropertykey v13; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+7h] BYREF
  int *v16; // [rsp+B0h] [rbp+17h]
  __int64 v17; // [rsp+B8h] [rbp+1Fh]
  int *v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v1 )
    LeaveCriticalSection(v1);
  *(_QWORD *)&v12.vt = 2LL;
  *(_OWORD *)&v12.decVal.Lo32 = 0u;
  v13.pid = 2;
  v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v11 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v12);
  v3 = v11;
  if ( v11 >= 0 )
  {
    v9 = 0;
    *(_QWORD *)&v12.vt = 65LL;
    v12.hVal.QuadPart = 1LL;
    v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v12.bstrblobVal.pData = (BYTE *)&v9;
    v13.pid = 2;
    v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v12);
    v3 = v10;
    if ( v10 >= 0 )
    {
      if ( !*((_DWORD *)this + 26) )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::ResetDeviceProperties");
      v11 = 232;
      v16 = &v11;
      v18 = &v10;
      v17 = 4LL;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v6, v7, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::ResetDeviceProperties");
    v10 = 222;
    v16 = &v10;
    v18 = &v11;
    v17 = 4LL;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v4, v5, 5u, &pData);
  }
  return v3;
}
