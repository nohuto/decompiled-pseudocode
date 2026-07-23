/*
 * XREFs of RtlInitializeRXact @ 0x18008A4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlpNtQueryValueKey @ 0x18007CDF0 (RtlpNtQueryValueKey.c)
 *     RtlAbortRXact @ 0x180080090 (RtlAbortRXact.c)
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x18009C450 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall RtlInitializeRXact(void *a1, char a2, __int64 **a3)
{
  NTSTATUS result; // eax
  __int64 *Heap; // rax
  __int64 *v8; // rcx
  HANDLE v9; // rax
  int v10; // ebx
  unsigned int *v11; // rbx
  int v12; // esi
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING v19; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _DWORD Data[6]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[128]; // [rsp+E0h] [rbp-20h] BYREF

  v15 = 12;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, L"RXACT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 192;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x3001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result < 0 )
    return result;
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  *a3 = Heap;
  v8 = Heap;
  if ( !Heap )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return -1073741801;
  }
  v9 = KeyHandle;
  v8[3] = 0LL;
  v8[1] = (__int64)v9;
  *v8 = (__int64)a1;
  *((_BYTE *)v8 + 16) = 1;
  if ( Disposition == 1 )
  {
    Data[0] = 1;
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0, Data, 0xCu);
    if ( v10 >= 0 )
      return 1073741828;
    ZwDeleteKey(KeyHandle);
    goto LABEL_15;
  }
  v10 = RtlpNtQueryValueKey(KeyHandle, &v18, Data, &v15);
  if ( v10 < 0 )
  {
LABEL_15:
    ZwClose(KeyHandle);
    goto LABEL_17;
  }
  if ( v15 != 12 || Data[0] != 1 )
  {
    v10 = -1073741736;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&ValueName, L"Log");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueBasicInformation, KeyValueInformation, 0x80u, &ResultLength) < 0 )
    return 0;
  if ( !a2 )
    return -2147483624;
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( result == -1073741789 )
  {
    v11 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
    if ( v11 )
    {
      v12 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v11, ResultLength, &ResultLength);
      if ( v12 >= 0 )
      {
        (*a3)[3] = (__int64)v11 + v11[2];
        *((_BYTE *)*a3 + 16) = 0;
        v12 = sub_1800800D0(*a3);
        if ( v12 >= 0 )
        {
          ZwDeleteValueKey(KeyHandle, &ValueName);
          (*a3)[3] = (__int64)v11;
          return RtlAbortRXact((__int64)*a3);
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      v10 = v12;
LABEL_17:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
      return v10;
    }
    return -1073741801;
  }
  return result;
}
