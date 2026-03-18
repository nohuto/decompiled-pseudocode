/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x1405A38E0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x140133158 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140133230 (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x1401333B0 (PnpValidateRegistryString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PnpRegSzToString @ 0x140555E50 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int16 v4; // ax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // ax
  wchar_t *StringRoutine; // rax
  const WCHAR *v15; // rsi
  NTSTATUS RegistryValue; // ebx
  unsigned int v17; // edx
  unsigned __int16 Length; // r15
  int v19; // esi
  __int64 v20; // rsi
  UNICODE_STRING v21; // xmm0
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v25; // [rsp+50h] [rbp-31h] BYREF
  char *v26; // [rsp+58h] [rbp-29h]
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 <= 4u || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[((unsigned __int64)v4 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( a4 )
        *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_19;
    }
    goto LABEL_24;
  }
  v25 = 0;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  v26 = 0LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_DWORD *)&RemainingString.Length = 1048590;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = *a2 - 4;
    v13 = *a2 - 2;
    UnicodeString.Length = v12;
    UnicodeString.MaximumLength = v13;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v13);
    UnicodeString.Buffer = StringRoutine;
    v15 = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_24;
    memmove(StringRoutine, (const void *)(*((_QWORD *)a2 + 1) + 2LL), v12);
    v15[(unsigned __int64)v12 >> 1] = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, v15, 0, &P);
    RtlFreeUnicodeString(&UnicodeString);
    if ( RegistryValue >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( PnpValidateRegistryString(P) )
      {
        PnpRegSzToString((unsigned int *)((char *)v10 + v10[2]), v10[3], (int *)&P);
        LOWORD(v25) = (_WORD)P;
        HIWORD(v25) = *((_WORD *)v10 + 6);
        v26 = (char *)v10 + v10[2];
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
    }
  }
  v17 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( v26 )
    v17 += (unsigned __int16)v25 + 2;
  if ( (unsigned __int64)v17 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_19;
  }
  DestinationString.Length = v17;
  DestinationString.MaximumLength = v17 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v17 + 2));
  if ( !DestinationString.Buffer )
  {
LABEL_24:
    v9 = -1073741670;
    goto LABEL_19;
  }
  v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
  if ( v9 < 0 )
    goto LABEL_19;
  Length = DestinationString.Length;
  v19 = DestinationString.Length >> 1;
  if ( v26 )
  {
    v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v25);
    if ( v9 < 0 )
      goto LABEL_19;
    DestinationString.Length = RemainingString.Length + Length;
    v20 = (unsigned int)(v19 + 1);
  }
  else
  {
    v20 = v19 - (*a2 >> 1);
  }
  v21 = DestinationString;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(UNICODE_STRING *)a3 = v21;
  if ( a4 )
    RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v20));
LABEL_19:
  RtlFreeUnicodeString(&DestinationString);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
