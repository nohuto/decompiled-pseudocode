/*
 * XREFs of QuerySecurityDescriptorValue @ 0x18001CC10
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001CF08 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001CFE4 (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x18001D270 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall QuerySecurityDescriptorValue(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rsi
  const wchar_t *v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  SIZE_T v8; // rdi
  _WORD *v9; // r9
  SIZE_T v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  NTSTATUS v14; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  _WORD *Heap; // [rsp+50h] [rbp-31h]
  SIZE_T Size; // [rsp+58h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v17 = 0LL;
  Heap = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v6 = RtlStringCbLengthW(a1, 0x7FFFFFFFLL, &Size);
  if ( v6 < 0 )
    goto LABEL_16;
  Size += 142LL;
  v8 = Size;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
  v9 = Heap;
  if ( !Heap )
  {
    v6 = -1073741801;
    goto LABEL_16;
  }
  WORD1(v17) = v8;
  LOWORD(v17) = v8 - 2;
  v10 = v8 >> 1;
  v7 = 2147483646LL;
  v6 = 0;
  if ( (v8 >> 1) - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    if ( !v10 )
      goto LABEL_13;
  }
  else
  {
    v5 = L"\\REGISTRY\\MACHINE\\Software\\Microsoft\\SecurityManager\\TransientObjects\\";
    v6 = 0;
    if ( v10 )
    {
      v7 = 2147483646 - v10;
      while ( v7 + v10 && *v5 )
      {
        *v9++ = *v5++;
        if ( !--v10 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      --v9;
      v6 = -2147483643;
    }
  }
  *v9 = 0;
  v9 = Heap;
LABEL_13:
  if ( v6 >= 0 )
  {
    v6 = RtlStringCbCatW(v9, v8, a1);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"SecurityDescriptor");
        v14 = NtQueryValueKey(
                KeyHandle,
                &DestinationString,
                KeyValuePartialInformation,
                KeyValueInformation,
                0x10u,
                &ResultLength);
        v6 = v14;
        if ( v14 < 0 )
        {
          if ( v14 == -2147483643 || v14 == -1073741789 )
          {
            v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
            if ( v4 )
            {
              v6 = NtQueryValueKey(
                     KeyHandle,
                     &DestinationString,
                     KeyValuePartialInformation,
                     v4,
                     ResultLength,
                     &ResultLength);
              if ( v6 >= 0 )
              {
                *a2 = v4;
                v4 = 0LL;
              }
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
        else
        {
          v6 = -1073739509;
        }
      }
    }
  }
LABEL_16:
  AccessHlprFree(v4, v5, v7);
  if ( KeyHandle )
    NtClose(KeyHandle);
  AccessHlprFree(Heap, v11, v12);
  return (unsigned int)v6;
}
