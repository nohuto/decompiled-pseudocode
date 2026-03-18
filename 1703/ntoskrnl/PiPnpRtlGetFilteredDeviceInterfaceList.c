/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E4218
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PiDmGetCmObjectListFromCache @ 0x14044F10C (PiDmGetCmObjectListFromCache.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1404E4308 (PiDmGetCmObjectConstraintListFromCache.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  const WCHAR *v2; // rdx
  bool v3; // zf
  __int64 v4; // rax
  int v5; // ecx
  NTSTATUS result; // eax
  _QWORD v7[5]; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+3Fh] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(const WCHAR **)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24) == 0LL;
  LOBYTE(v7[2]) = *(_BYTE *)(a1 + 32) & 1;
  v7[3] = *(_QWORD *)(a1 + 40);
  v7[4] = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( !v2 )
      return PiDmGetCmObjectListFromCache(
               3,
               (__int64)PiPnpRtlInterfaceFilterCallback,
               (__int64)v7,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    v5 = 0;
    return PiDmGetCmObjectConstraintListFromCache(
             v5,
             (_DWORD)v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v7,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             v4);
  }
  if ( !v2 )
  {
LABEL_10:
    v4 = *(_QWORD *)(a1 + 72);
    v5 = 1;
    v2 = *(const WCHAR **)(a1 + 24);
    return PiDmGetCmObjectConstraintListFromCache(
             v5,
             (_DWORD)v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v7,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             v4);
  }
  result = RtlInitUnicodeStringEx(&DestinationString, v2);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      v7[0] = &Guid;
      goto LABEL_10;
    }
  }
  return result;
}
