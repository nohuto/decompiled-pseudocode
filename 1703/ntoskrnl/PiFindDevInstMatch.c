/*
 * XREFs of PiFindDevInstMatch @ 0x14059CC04
 * Callers:
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     PnpRegSzToString @ 0x14059CDE8 (PnpRegSzToString.c)
 */

__int64 __fastcall PiFindDevInstMatch(void *a1, const UNICODE_STRING *a2, unsigned int *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  ULONG v9; // r13d
  unsigned int v10; // r15d
  NTSTATUS RegistryValue; // eax
  PVOID v12; // rcx
  unsigned __int16 *PoolWithTag; // rdi
  wchar_t *v14; // r14
  int v15; // esi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  wchar_t *v19; // rax
  wchar_t *v21; // rcx
  UNICODE_STRING v22; // xmm0
  __int64 v23; // [rsp+30h] [rbp-48h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h] BYREF

  v5 = a5;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = 256;
  *v5 = -1;
  *a3 = 0;
  v10 = 0;
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a1, L"Count", 0, &P);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      return (unsigned int)RegistryValue;
    return v6;
  }
  v12 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v12, 0);
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v14 )
  {
    v21 = PoolWithTag;
LABEL_22:
    ExFreePoolWithTag(v21, 0);
    return 3221225626LL;
  }
  v15 = 0;
  if ( !v10 )
    goto LABEL_15;
  while ( 1 )
  {
    LODWORD(v23) = v15;
    ppszDestEnd = v14;
    RtlStringCchPrintfExW(v14, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v23);
    ValueName.MaximumLength = 20;
    v16 = ppszDestEnd - v14;
    ValueName.Length = (_DWORD)v16 == -1 ? 20 : 2 * v16;
    ValueName.Buffer = v14;
    v17 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
    if ( v17 >= 0 )
      break;
    if ( v17 == -2147483643 || v17 == -1073741789 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      v9 = ResultLength;
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20207050u);
      if ( !PoolWithTag )
      {
        v21 = v14;
        goto LABEL_22;
      }
      --v15;
    }
LABEL_14:
    if ( ++v15 >= v10 )
      goto LABEL_15;
  }
  if ( *((_DWORD *)PoolWithTag + 1) != 1 )
    goto LABEL_14;
  v18 = *((unsigned int *)PoolWithTag + 3);
  if ( (unsigned int)v18 <= 2 )
    goto LABEL_14;
  PnpRegSzToString((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2), v18, &P);
  String1.MaximumLength = PoolWithTag[6];
  v19 = (unsigned __int16 *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
  String1.Length = (unsigned __int16)P;
  String1.Buffer = v19;
  if ( !RtlEqualUnicodeString(&String1, a2, 1u) )
    goto LABEL_14;
  v22 = ValueName;
  *a5 = v15;
  *(UNICODE_STRING *)a4 = v22;
LABEL_15:
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !*(_WORD *)a4 )
    ExFreePoolWithTag(v14, 0);
  return 0LL;
}
