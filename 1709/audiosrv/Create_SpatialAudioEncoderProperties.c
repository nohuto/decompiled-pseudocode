/*
 * XREFs of Create_SpatialAudioEncoderProperties @ 0x1800D76EC
 * Callers:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x1800288F8 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800D4FD0 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800D5260 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x1800D6318 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 */

__int64 __fastcall Create_SpatialAudioEncoderProperties(const struct _GUID *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  SpatialAudioEncoderProperties *v13; // [rsp+38h] [rbp-21h] BYREF
  int v14[4]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  int *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]

  v14[0] = 0;
  v13 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderProperties,SpatialAudioEncoderProperties,_GUID const &,int &>(
            &v13,
            a1,
            v14);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(SpatialAudioEncoderProperties *, GUID *, _QWORD *))v13)(
             v13,
             &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9,
             a3);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioEncoderProperties");
      v19 = 0;
      v22 = 0;
      v17 = &v12;
      v18 = 4;
      v21 = 4;
      v12 = 114;
      v20 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioEncoderProperties");
      v19 = 0;
      v22 = 0;
      v17 = &v11;
      v18 = 4;
      v21 = 4;
      v11 = 109;
      v12 = -2147024809;
      v20 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
  return v5;
}
