/*
 * XREFs of ReleaseExclusiveCpuSets @ 0x180001480
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     CheckCachedCapability @ 0x1800012C4 (CheckCachedCapability.c)
 *     __security_check_cookie @ 0x180002A60 (__security_check_cookie.c)
 *     memset_0 @ 0x180002F10 (memset_0.c)
 */

HRESULT __stdcall ReleaseExclusiveCpuSets()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  __int64 v2; // rcx
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  signed int LastError; // eax
  int v7; // eax
  int hProvider; // [rsp+30h] [rbp-19h] BYREF
  int hProvider_4; // [rsp+34h] [rbp-15h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-11h] BYREF
  __int64 v12; // [rsp+40h] [rbp-9h]
  int v13; // [rsp+48h] [rbp-1h]
  int v14; // [rsp+4Ch] [rbp+3h]
  int v15; // [rsp+50h] [rbp+7h]
  unsigned int v16; // [rsp+54h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+Fh] BYREF
  int *p_hProvider; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+84h] [rbp+3Bh]

  memset_0(v11, 0, 0x20uLL);
  hProvider = CheckCachedCapability();
  v2 = (unsigned int)hProvider;
  if ( hProvider >= 0 )
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &hProvider_4, 0LL);
    if ( hProvider_4 == 5 )
    {
      v2 = 2147500033LL;
LABEL_4:
      hProvider = v2;
      goto LABEL_15;
    }
    CurrentProcessId = GetCurrentProcessId();
    v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
    v5 = v4;
    if ( !v4 )
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = (unsigned int)LastError;
      goto LABEL_4;
    }
    v11[1] = 0;
    v12 = 0LL;
    v11[0] = 2;
    v13 = 2;
    v14 = 50;
    v15 = 30;
    v16 = v16 & 0xFFFFFFE0 | 0x10;
    v7 = RmGameModeRegisterProcess(v4, v11, 0LL);
    if ( v7 == -1073740008 )
    {
      RmGameModeUnregisterProcess(v5);
      v7 = RmGameModeRegisterProcess(v5, v11, 0LL);
    }
    if ( v7 >= 0 )
      hProvider = 0;
    else
      hProvider = v7 | 0x10000000;
    CloseHandle(v5);
    v2 = (unsigned int)hProvider;
  }
LABEL_15:
  if ( (unsigned int)dword_180006000 > 4 )
  {
    v20 = 0;
    p_hProvider = &hProvider;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)v2, &unk_1800046E8, v0, v1, 3u, &pData);
    LODWORD(v2) = hProvider;
  }
  return v2;
}
