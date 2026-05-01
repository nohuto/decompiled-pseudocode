/*
 * XREFs of ReleaseExclusiveCpuSets @ 0x1800013F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x180002290 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800024D4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180002AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x180003080 (memset_0.c)
 */

HRESULT __stdcall ReleaseExclusiveCpuSets()
{
  bool *v0; // rdx
  int IsCurrentProcessStronglyNamed; // eax
  unsigned __int64 v2; // rcx
  bool *v3; // r8
  const GUID *v4; // r9
  DWORD CurrentProcessId; // eax
  HANDLE v6; // rbx
  signed int LastError; // eax
  int v8; // eax
  char v10; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v11; // [rsp+41h] [rbp-28h] BYREF
  HRESULT v12; // [rsp+44h] [rbp-25h] BYREF
  int pvData; // [rsp+48h] [rbp-21h] BYREF
  int v14; // [rsp+4Ch] [rbp-1Dh] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  int v20; // [rsp+70h] [rbp+7h]
  unsigned int v21; // [rsp+74h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+17h] BYREF
  HRESULT *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  memset_0(v16, 0, 0x28uLL);
  IsCurrentProcessStronglyNamed = CallerIdentity::IsCurrentProcessStronglyNamed((CallerIdentity *)&v10, v0);
  if ( IsCurrentProcessStronglyNamed >= 0 )
  {
    IsCurrentProcessStronglyNamed = CallerIdentity::CheckCallerCapability((CallerIdentity *)v2, &v11, v3);
    if ( IsCurrentProcessStronglyNamed >= 0 && (!v10 || !(_BYTE)v11) )
      IsCurrentProcessStronglyNamed = -2147024891;
  }
  v12 = IsCurrentProcessStronglyNamed;
  if ( IsCurrentProcessStronglyNamed >= 0 )
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &v14, 0LL);
    if ( v14 == 5 )
    {
      v12 = -2147467263;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
             L"AllowAutoGameMode",
             0x18u,
             0LL,
             &pvData,
             &pcbData)
        || pvData )
      {
        CurrentProcessId = GetCurrentProcessId();
        v6 = OpenProcess(0x1000u, 0, CurrentProcessId);
        if ( v6 )
        {
          RmGameModeInitializeResourceRequest(v16);
          v16[1] = 0;
          v17 = 0LL;
          v21 = v21 & 0xFFFFFFE0 | 0x10;
          v16[0] = 3;
          v18 = 2;
          v19 = 50;
          v20 = 30;
          v8 = RmGameModeRegisterProcess(v6, v16, 0LL);
          if ( v8 == -1073740008 )
          {
            RmGameModeUnregisterProcess(v6);
            v8 = RmGameModeRegisterProcess(v6, v16, 0LL);
          }
          if ( v8 >= 0 )
            v12 = 0;
          else
            v12 = v8 | 0x10000000;
          CloseHandle(v6);
        }
        else
        {
          LastError = GetLastError();
          v2 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v2 = (unsigned int)LastError;
          v12 = v2;
        }
      }
      else
      {
        v12 = -2147019873;
      }
    }
  }
  if ( (unsigned int)dword_180006000 > 4 )
  {
    v25 = 0;
    v23 = &v12;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)v2, &unk_1800047D8, (LPCGUID)v3, v4, 3u, &pData);
  }
  return v12;
}
