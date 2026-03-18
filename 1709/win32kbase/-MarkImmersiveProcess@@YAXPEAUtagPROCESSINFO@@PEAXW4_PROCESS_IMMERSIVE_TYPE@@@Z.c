/*
 * XREFs of ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0023D94
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0024008 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkImmersiveProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v6; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 776) ^= (*(_DWORD *)(a1 + 776) ^ (16 * a3)) & 0x30;
  if ( a3 == 1 )
  {
    v6 = 0;
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v8, 0LL) >= 0 )
    {
      if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned __int64)BYTE2(v8) - 4 <= 1 )
        v6 = 512;
      *(_DWORD *)(a1 + 776) = v6 | *(_DWORD *)(a1 + 776) & 0xFFFFFDFF;
    }
    *(_DWORD *)(a1 + 776) |= 4u;
  }
  else
  {
    *(_DWORD *)(a1 + 776) &= ~0x200u;
  }
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 776) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 776) ^= result;
  return result;
}
