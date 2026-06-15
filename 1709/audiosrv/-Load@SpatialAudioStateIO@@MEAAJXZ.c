/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x180029010
 * Callers:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180028E44 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ @ 0x180028F20 (-ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029234 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // edi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  _OWORD *v8; // rax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h]
  _OWORD *v13; // [rsp+48h] [rbp-31h]
  __int128 v14; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  int *v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B8h] [rbp+3Fh]
  int v23; // [rsp+BCh] [rbp+43h]

  pvar = 0LL;
  v12 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 66);
  v13 = 0LL;
  v15 = 2;
  v3 = *v2;
  v14 = PKEY_SpatialAudio_Endpoint_State;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, PROPVARIANT *))(v3 + 40))(v2, &v14, &pvar);
  v4 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioStateIO::Load");
      v20 = 0;
      v23 = 0;
      v18 = &v9;
      v21 = &v10;
      v9 = 28;
      v19 = 4;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v6, v7, 5u, &pData);
    }
  }
  else if ( (_WORD)pvar != 65
         || (_DWORD)v12 != 24
         || (v8 = v13,
             *((_OWORD *)this + 34) = *v13,
             *((_QWORD *)this + 70) = *((_QWORD *)v8 + 2),
             *((int *)this + 136) >= 3) )
  {
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  PropVariantClear(&pvar);
  return v4;
}
