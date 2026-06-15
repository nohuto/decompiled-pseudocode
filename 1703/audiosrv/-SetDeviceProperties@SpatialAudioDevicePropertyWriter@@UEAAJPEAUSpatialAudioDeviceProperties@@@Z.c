/*
 * XREFs of ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CA380
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ @ 0x18003C0F0 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18003C32C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceProperties(
        SpatialAudioDevicePropertyWriter *this,
        BYTE *a2)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v10; // [rsp+30h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-61h] BYREF
  struct tagPROPVARIANT v12; // [rsp+40h] [rbp-59h] BYREF
  struct _tagpropertykey v13; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+7h] BYREF
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+B0h] [rbp+17h]
  int v17; // [rsp+B8h] [rbp+1Fh]
  int v18; // [rsp+BCh] [rbp+23h]
  LPCRITICAL_SECTION *v19; // [rsp+C0h] [rbp+27h]
  int v20; // [rsp+C8h] [rbp+2Fh]
  int v21; // [rsp+CCh] [rbp+33h]

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a2 )
  {
    *(_DWORD *)a2 = 1509949441;
    *(_QWORD *)&v12.vt = 65LL;
    v12.hVal.QuadPart = 146LL;
    v13.pid = 2;
    v12.bstrblobVal.pData = a2;
    v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v12);
    v4 = v10;
    if ( v10 >= 0 )
    {
      SpatialAudioDevicePropertyWriter::SignalChange(this);
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceProperties");
      v18 = 0;
      v21 = 0;
      p_lpCriticalSection = &lpCriticalSection;
      v17 = 4;
      v20 = 4;
      LODWORD(lpCriticalSection) = 323;
      v19 = (LPCRITICAL_SECTION *)&v10;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceProperties");
      v18 = 0;
      v21 = 0;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v10;
      v17 = 4;
      v20 = 4;
      v10 = 312;
      LODWORD(lpCriticalSection) = -2147024809;
      v19 = &lpCriticalSection;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v5, v6, 5u, &pData);
    }
  }
  return v4;
}
