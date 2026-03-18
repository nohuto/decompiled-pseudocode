/*
 * XREFs of PiProcessDriverInstance @ 0x14059C9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     PipOpenServiceEnumKeys @ 0x1405AD84C (PipOpenServiceEnumKeys.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 */

__int64 __fastcall PiProcessDriverInstance(unsigned __int16 *a1, __int64 a2, _BYTE *a3)
{
  int DevInstMatch; // ebx
  HANDLE v6; // rdi
  wchar_t *Buffer; // rax
  unsigned __int64 v8; // r14
  void *v9; // rbx
  void *v10; // r15
  unsigned __int64 v11; // rsi
  PVOID PoolWithTag; // rax
  signed __int64 v13; // rax
  int Data; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-21h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+7h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp+Fh] BYREF

  DevInstMatch = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &KeyHandle, 1);
  if ( DevInstMatch >= 0 )
  {
    v6 = KeyHandle;
    DevInstMatch = PiFindDevInstMatch(
                     (_DWORD)KeyHandle,
                     (_DWORD)a1,
                     (unsigned int)&Data,
                     (unsigned int)&UnicodeString,
                     (__int64)&ppszDestEnd);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v6);
      return (unsigned int)DevInstMatch;
    }
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer )
    {
      if ( *a3 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v6, &UnicodeString);
      if ( --Data )
        PiRearrangeDeviceInstances(v6);
    }
    else
    {
      if ( !*a3 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v8 = *a1;
      v9 = 0LL;
      v10 = (void *)*((_QWORD *)a1 + 1);
      v11 = v8;
      if ( *((_WORD *)v10 + (v8 >> 1) - 1) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8 + 2, 0x20207050u);
        v9 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v10, (unsigned int)v8);
          v10 = v9;
          LODWORD(v8) = v8 + 2;
          *((_WORD *)v9 + (v11 >> 1)) = 0;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v13 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v13 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v13;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v6, &ValueName, 0, 1u, v10, v8);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  return (unsigned int)DevInstMatch;
}
