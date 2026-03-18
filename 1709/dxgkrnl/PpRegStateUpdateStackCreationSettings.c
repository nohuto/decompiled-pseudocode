/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C010E694
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C010E880 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0012398 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateWstrKey @ 0x1C010EBC4 (CmRegUtilCreateWstrKey.c)
 *     PiRegStateOpenClassKey @ 0x1C010ECB8 (PiRegStateOpenClassKey.c)
 */

__int64 __fastcall PpRegStateUpdateStackCreationSettings(int a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r9
  void *v6; // rbx
  NTSTATUS WstrKey; // ebx
  ULONG DataSize; // r9d
  void *Data; // r10
  HANDLE KeyHandle; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  result = PiRegStateOpenClassKey(a1, a2, 0, 0, (__int64)&Handle);
  if ( (int)result >= 0 )
  {
    v6 = &PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !PiRegStateDiscriptor )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(&PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &P) < 0 )
      {
        PiRegStateDiscriptor = 2;
      }
      else
      {
        PiRegStateDiscriptor = 1;
        ExFreePoolWithTag(P, 0);
      }
    }
    if ( PiRegStateDiscriptor != 1 )
      v6 = 0LL;
    P = v6;
    WstrKey = CmRegUtilCreateWstrKey(
                (_DWORD)Handle,
                (unsigned int)L"Properties",
                v4,
                v5,
                (__int64)v6,
                0LL,
                (__int64)&KeyHandle);
    ZwClose(Handle);
    if ( WstrKey >= 0 )
    {
      RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
      WstrKey = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
      if ( WstrKey >= 0 )
        WstrKey = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
      ZwClose(KeyHandle);
    }
    return (unsigned int)WstrKey;
  }
  return result;
}
