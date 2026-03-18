/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x1405E4E34 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     PipDmgIsDriverPotentiallyOnHiberPath @ 0x1401846A8 (PipDmgIsDriverPotentiallyOnHiberPath.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     PipDmgGetDriverDmarRegistryValue @ 0x1405F6D6C (PipDmgGetDriverDmarRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     VfTargetDriversIsEnabled @ 0x140821DA0 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  HANDLE v5; // rdi
  int v7; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  Handle = 0LL;
  v4 = PipOpenServiceEnumKeys(v3 + 24, 131097LL, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 >= 0 )
  {
    KeyHandle = 0LL;
    v8 = L"Parameters";
    v7 = 1441812;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
      && (int)PipDmgGetDriverDmarRegistryValue(KeyHandle, &Handle) >= 0 )
    {
      if ( (_DWORD)Handle )
      {
        if ( (_DWORD)Handle == 1 )
        {
          v2 = 2;
        }
        else if ( (_DWORD)Handle == 2 )
        {
          v2 = 3;
          if ( !PipDmgIsDriverPotentiallyOnHiberPath(KeyHandle)
            && (unsigned int)VfIsVerifierEnabled()
            && (MmVerifierData & 0x80u) != 0
            && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) )
          {
            v2 = 2;
          }
        }
      }
      else
      {
        v2 = 1;
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v2;
}
