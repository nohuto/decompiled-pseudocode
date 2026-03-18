/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1C00932C0
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0078610 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x1C0003F9E (RtlAddRange_0.c)
 *     ZwClose_0 @ 0x1C0003FB6 (ZwClose_0.c)
 *     ZwOpenKey_0 @ 0x1C000400A (ZwOpenKey_0.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ArbpGetRegistryValue @ 0x1C0095638 (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS v2; // edi
  unsigned int *v3; // rsi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  int RegistryValue; // eax
  int v9; // eax
  SIZE_T v10; // r14
  PVOID PoolWithTag; // rax
  unsigned int *i; // r14
  int v13; // eax
  int v14; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  int v16; // [rsp+48h] [rbp-21h] BYREF
  const wchar_t *v17; // [rsp+50h] [rbp-19h]
  int v18; // [rsp+58h] [rbp-11h] BYREF
  const wchar_t *v19; // [rsp+60h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  void *KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v2 = 0;
  v3 = (unsigned int *)ArbMmConfigRange;
  if ( ArbMmConfigRange )
  {
LABEL_13:
    for ( i = v3 + 2; i < &v3[8 * v3[1] + 2]; i += 8 )
    {
      v13 = *((unsigned __int8 *)i + 1);
      v14 = *(_DWORD *)(a1 + 32);
      if ( v13 == v14 || (_BYTE)v13 == 7 && v14 == 3 )
      {
        v2 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
        if ( v2 < 0 )
          break;
      }
    }
    goto LABEL_20;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v17 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  v16 = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v18 = 2228258;
  v19 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    ZwClose_0(KeyHandle);
    return v7;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v2 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v2 = 0;
    goto LABEL_20;
  }
  if ( MEMORY[4] == 10 )
  {
    v3 = (unsigned int *)(MEMORY[8] + 32LL);
    v9 = *(_DWORD *)(MEMORY[8] + 0x24LL);
    if ( v9 )
    {
      v10 = (unsigned int)(32 * v9 + 8);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x4E627241u);
      ArbMmConfigRange = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, v3, (unsigned int)v10);
    }
    goto LABEL_13;
  }
  v2 = -1073741811;
LABEL_20:
  ZwClose_0(Handle);
  ZwClose_0(KeyHandle);
  return v2;
}
