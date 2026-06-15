/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x1800288F8
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800286D0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     Create_SpatialAudioEncoderProperties @ 0x1800D76EC (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  _OWORD *v8; // rax
  __int64 v9; // rdx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-39h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h]
  _OWORD *v19; // [rsp+58h] [rbp-29h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+7h] BYREF
  int *v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]
  int *v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]

  v20 = -2LL;
  pvar = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 52) + 40LL))(
         *((_QWORD *)this + 52),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         &pvar);
  v15 = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceProperties");
      v14 = 317;
      v23 = &v14;
      v24 = 4;
      v25 = 0;
      v26 = &v15;
      v27 = 4;
      v28 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v6, v7, 5u, &pData);
    }
  }
  else
  {
    if ( (_DWORD)v18 == 146 && (_WORD)pvar == 65 )
    {
      v8 = v19;
      *((_OWORD *)this + 7) = *v19;
      *((_OWORD *)this + 8) = v8[1];
      *((_OWORD *)this + 9) = v8[2];
      *((_OWORD *)this + 10) = v8[3];
      *((_OWORD *)this + 11) = v8[4];
      *((_OWORD *)this + 12) = v8[5];
      *((_OWORD *)this + 13) = v8[6];
      *((_OWORD *)this + 14) = v8[7];
      *((_OWORD *)this + 15) = v8[8];
      *((_WORD *)this + 128) = *((_WORD *)v8 + 72);
      if ( *((_DWORD *)this + 28) == 1509949441 )
      {
        *a2 = 0;
        v4 = 0;
      }
    }
    if ( !*a2 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      v4 = Create_SpatialAudioEncoderProperties((char *)this + 116, v9, &v16);
      v14 = v4;
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 32LL))(v16, (char *)this + 258);
        v14 = v4;
        if ( v4 < 0 && (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceProperties");
          v15 = 339;
          v23 = &v15;
          v24 = 4;
          v25 = 0;
          v26 = &v14;
          v27 = 4;
          v28 = 0;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceProperties");
        v15 = 336;
        v23 = &v15;
        v24 = 4;
        v25 = 0;
        v26 = &v14;
        v27 = 4;
        v28 = 0;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v10, v11, 5u, &pData);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
    }
  }
  PropVariantClear(&pvar);
  return (unsigned int)v4;
}
