/*
 * XREFs of GetExpandedResourceExclusiveCpuCount @ 0x1800013C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     CheckCachedCapability @ 0x1800012C4 (CheckCachedCapability.c)
 *     __security_check_cookie @ 0x180002A60 (__security_check_cookie.c)
 */

HRESULT __stdcall GetExpandedResourceExclusiveCpuCount(ULONG *exclusiveCpuCount)
{
  HRESULT result; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  int LargestValidResourceRequest; // eax
  HRESULT v6; // [rsp+30h] [rbp-39h] BYREF
  ULONG v7; // [rsp+34h] [rbp-35h] BYREF
  _BYTE v8[4]; // [rsp+38h] [rbp-31h] BYREF
  ULONG v9; // [rsp+3Ch] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  HRESULT *v11; // [rsp+80h] [rbp+17h]
  int v12; // [rsp+88h] [rbp+1Fh]
  int v13; // [rsp+8Ch] [rbp+23h]
  ULONG *v14; // [rsp+90h] [rbp+27h]
  int v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+9Ch] [rbp+33h]

  *exclusiveCpuCount = 0;
  result = CheckCachedCapability();
  v6 = result;
  if ( result >= 0 )
  {
    LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v8);
    if ( LargestValidResourceRequest >= 0 )
    {
      *exclusiveCpuCount = v9;
      result = 0;
    }
    else
    {
      result = LargestValidResourceRequest | 0x10000000;
    }
    v6 = result;
  }
  if ( (unsigned int)dword_180006000 > 4 )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v6;
    v7 = *exclusiveCpuCount;
    v14 = &v7;
    v12 = 4;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_180004714, v3, v4, 4u, &pData);
    return v6;
  }
  return result;
}
