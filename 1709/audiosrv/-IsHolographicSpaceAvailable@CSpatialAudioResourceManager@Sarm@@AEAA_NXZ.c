/*
 * XREFs of ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EA94
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EEE4 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(
        Sarm::CSpatialAudioResourceManager *this)
{
  bool v1; // bl
  HRESULT v2; // eax
  __int64 v4; // [rsp+38h] [rbp-39h] BYREF
  BOOL v5; // [rsp+40h] [rbp-31h] BYREF
  __int64 v6; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v7[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v8; // [rsp+58h] [rbp-19h]
  __int64 v9; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  void *v12; // [rsp+88h] [rbp+17h] BYREF
  int v13; // [rsp+90h] [rbp+1Fh]
  int v14; // [rsp+94h] [rbp+23h]
  void *v15; // [rsp+98h] [rbp+27h]
  int v16; // [rsp+A0h] [rbp+2Fh]
  int v17; // [rsp+A4h] [rbp+33h]
  BOOL *v18; // [rsp+A8h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+3Fh]
  int v20; // [rsp+B4h] [rbp+43h]

  v9 = -2LL;
  v1 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v4 = 0LL;
    string = 0LL;
    v2 = WindowsCreateStringReference(
           L"Windows.Graphics.Holographic.HolographicDisplay",
           0x2Fu,
           &hstringHeader,
           &string);
    if ( v2 < 0 )
    {
      RaiseException(v2, 1u, 0, 0LL);
      JUMPOUT(0x1800573BELL);
    }
    v4 = 0LL;
    if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v4) >= 0 )
    {
      v6 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 64LL))(v4, &v6) >= 0 )
        v1 = v6 != 0;
      if ( v6 )
        (*(void (**)(void))(*(_QWORD *)v6 + 16LL))();
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v5 = v1;
    v18 = &v5;
    v19 = 4;
    v20 = 0;
    v7[0] = ((unsigned int)&unk_180110D0A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v7[1] = 4;
    v8 = 0LL;
    v12 = off_18014A378;
    v13 = *(unsigned __int16 *)off_18014A378;
    v14 = 2;
    v15 = &unk_180110D15;
    v16 = 38;
    v17 = 1;
    EtwEventWriteTransfer(qword_18014A390, v7, 0LL, 0LL, 3, &v12);
  }
  return v1;
}
