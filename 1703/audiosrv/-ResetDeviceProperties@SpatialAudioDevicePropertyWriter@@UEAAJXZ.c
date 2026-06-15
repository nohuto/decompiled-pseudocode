/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18003C210
 * Callers:
 *     ?ResetDeviceProperties@SpatialAudioConfigureDevice@@UEAAJXZ @ 0x18003BF40 (-ResetDeviceProperties@SpatialAudioConfigureDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ @ 0x18003C0F0 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18003C32C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  unsigned int v2; // edi
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  char v8; // [rsp+30h] [rbp-79h] BYREF
  int v9; // [rsp+34h] [rbp-75h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-71h] BYREF
  struct tagPROPVARIANT v11; // [rsp+40h] [rbp-69h] BYREF
  struct _tagpropertykey v12; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-9h] BYREF
  LPCRITICAL_SECTION *v15; // [rsp+B0h] [rbp+7h]
  __int64 v16; // [rsp+B8h] [rbp+Fh]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+C0h] [rbp+17h]
  __int64 v18; // [rsp+C8h] [rbp+1Fh]

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  *(_QWORD *)&v11.vt = 2LL;
  *(_OWORD *)&v11.decVal.Lo32 = 0u;
  v12.pid = 2;
  v12.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  LODWORD(lpCriticalSection) = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v12, &v11);
  v2 = (unsigned int)lpCriticalSection;
  if ( (int)lpCriticalSection < 0 )
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::ResetDeviceProperties");
      v9 = 196;
      v15 = (LPCRITICAL_SECTION *)&v9;
      p_lpCriticalSection = &lpCriticalSection;
      v16 = 4LL;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v4, v5, 5u, &pData);
    }
  }
  else
  {
    v8 = 0;
    v11.hVal.QuadPart = 1LL;
    *(_QWORD *)&v11.vt = 65LL;
    v12.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v11.bstrblobVal.pData = (BYTE *)&v8;
    v12.pid = 2;
    v9 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v12, &v11);
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::ResetDeviceProperties");
        LODWORD(lpCriticalSection) = 206;
        v15 = &lpCriticalSection;
        p_lpCriticalSection = (LPCRITICAL_SECTION *)&v9;
        v16 = 4LL;
        v18 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v6, v7, 5u, &pData);
      }
    }
    else
    {
      SpatialAudioDevicePropertyWriter::SignalChange(this);
    }
  }
  return v2;
}
