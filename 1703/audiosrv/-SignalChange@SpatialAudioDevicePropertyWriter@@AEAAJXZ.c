/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ @ 0x18003C0F0
 * Callers:
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18003C210 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CA380 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800CA530 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18003C32C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(SpatialAudioDevicePropertyWriter *this)
{
  unsigned int v1; // ebx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  int v5; // [rsp+38h] [rbp-59h] BYREF
  int v6; // [rsp+3Ch] [rbp-55h] BYREF
  struct tagPROPVARIANT v7; // [rsp+40h] [rbp-51h] BYREF
  struct _tagpropertykey v8; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  int *v11; // [rsp+A8h] [rbp+17h]
  __int64 v12; // [rsp+B0h] [rbp+1Fh]
  int *v13; // [rsp+B8h] [rbp+27h]
  __int64 v14; // [rsp+C0h] [rbp+2Fh]

  *(_OWORD *)&v7.vt = 2uLL;
  v7.bstrblobVal.pData = 0LL;
  v8.pid = 2;
  v8.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  v6 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v8, &v7);
  v1 = v6;
  if ( v6 < 0 && (unsigned int)dword_18012A260 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SignalChange");
    v5 = 178;
    v11 = &v5;
    v13 = &v6;
    v12 = 4LL;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v3, v4, 5u, &pData);
  }
  return v1;
}
