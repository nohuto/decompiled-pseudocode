/*
 * XREFs of ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800D7190
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800D73F8 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800314E8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::QueryRegisterForOverrides(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  int v3; // ebx
  int v4; // edi
  int Data3; // esi
  int Data2; // r14d
  __int64 Data1; // r9
  HKEY v8; // rcx
  HKEY v9; // rcx
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h]
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  DWORD cbData; // [rsp+70h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+74h] [rbp-8Ch] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v20[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-20h]
  wchar_t Buffer[256]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SubKey[256]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v3 = a2->Data4[1];
  v4 = a2->Data4[0];
  Data3 = a2->Data3;
  Data2 = a2->Data2;
  Data1 = a2->Data1;
  v16 = a2->Data4[7];
  v15 = a2->Data4[6];
  v14 = a2->Data4[5];
  v13 = a2->Data4[4];
  v12 = a2->Data4[3];
  v11 = a2->Data4[2];
  v20[0] = *(_OWORD *)L"Software\\Microsoft\\Multimedia\\Audio\\Spatial\\Encoder";
  v20[1] = *(_OWORD *)L"\\Microsoft\\Multimedia\\Audio\\Spatial\\Encoder";
  v20[2] = *(_OWORD *)L"ft\\Multimedia\\Audio\\Spatial\\Encoder";
  v20[3] = *(_OWORD *)L"media\\Audio\\Spatial\\Encoder";
  v20[4] = *(_OWORD *)L"dio\\Spatial\\Encoder";
  v20[5] = *(_OWORD *)L"ial\\Encoder";
  v21 = *(_QWORD *)L"der";
  StringCbPrintfW(
    Buffer,
    0xFFuLL,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    Data1,
    Data2,
    Data3,
    v4,
    v3,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  StringCbPrintfW(SubKey, 0x1FEuLL, L"%s\\%s", v20, Buffer);
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) )
  {
    *(_DWORD *)Data = *((unsigned __int16 *)this + 66);
    cbData = 4;
    RegQueryValueExW(hKey, L"MaxDynamicObjectCount", 0LL, 0LL, Data, &cbData);
    v8 = hKey;
    *((_WORD *)this + 66) = *(_WORD *)Data;
    *(_DWORD *)Data = *((_DWORD *)this + 31);
    cbData = 4;
    RegQueryValueExW(v8, L"NativeStaticObjectMask", 0LL, 0LL, Data, &cbData);
    v9 = hKey;
    *((_DWORD *)this + 31) = *(_DWORD *)Data;
    cbData = 4;
    *(_DWORD *)Data = 116;
    RegQueryValueExW(v9, L"ProjectionData", 0LL, 0LL, 0LL, &cbData);
    if ( cbData == 116 )
      RegQueryValueExW(hKey, L"ProjectionData", 0LL, 0LL, (LPBYTE)this + 134, &cbData);
  }
  return 0LL;
}
