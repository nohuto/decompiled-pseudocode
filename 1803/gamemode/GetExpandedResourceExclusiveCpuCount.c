/*
 * XREFs of GetExpandedResourceExclusiveCpuCount @ 0x180001380
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180003FD0 (__security_check_cookie.c)
 */

HRESULT __stdcall GetExpandedResourceExclusiveCpuCount(ULONG *exclusiveCpuCount)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  int LargestValidResourceRequest; // eax
  HRESULT result; // eax
  HRESULT v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  ULONG v8; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v9[4]; // [rsp+40h] [rbp-29h] BYREF
  ULONG v10; // [rsp+44h] [rbp-25h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  HRESULT *v12; // [rsp+90h] [rbp+27h]
  int v13; // [rsp+98h] [rbp+2Fh]
  int v14; // [rsp+9Ch] [rbp+33h]
  ULONG *v15; // [rsp+A0h] [rbp+37h]
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  *exclusiveCpuCount = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  if ( v7 == 5 )
  {
    *exclusiveCpuCount = 6;
  }
  else
  {
    LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v9);
    if ( LargestValidResourceRequest < 0 )
    {
      result = LargestValidResourceRequest | 0x10000000;
      goto LABEL_7;
    }
    *exclusiveCpuCount = v10;
  }
  result = 0;
LABEL_7:
  v6 = result;
  if ( (unsigned int)dword_180007000 > 4 )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v6;
    v8 = *exclusiveCpuCount;
    v15 = &v8;
    v13 = 4;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_180005914, v2, v3, 4u, &pData);
    return v6;
  }
  return result;
}
