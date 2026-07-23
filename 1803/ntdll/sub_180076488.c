/*
 * XREFs of sub_180076488 @ 0x180076488
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall sub_180076488(HANDLE *a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  _BYTE *v3; // r13
  HANDLE *v4; // r12
  int v5; // ebx
  void *v6; // rsi
  NTSTATUS result; // eax
  _BYTE *v9; // rcx
  ULONG v10; // eax
  NTSTATUS inited; // edi
  ULONG v12; // r12d
  NTSTATUS v13; // eax
  PVOID ProcessHeap; // rcx
  NTSTATUS v15; // eax
  PVOID Heap; // rax
  unsigned int v17; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+58h] [rbp-A8h]
  _BYTE *v24; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING String2; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v26; // [rsp+78h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+B4h] [rbp-4Ch]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]

  DesiredAccess = a2;
  v3 = KeyValueInformation;
  v4 = a1;
  v26 = a1;
  v5 = 0;
  KeyHandle = 0LL;
  Length = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *v4,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v5;
    return result;
  }
  if ( v29 != 4 || v30 != 4 || !v31 )
    return 0;
  String2 = *a3;
  result = RtlInitUnicodeStringEx(&DestinationString, &qword_18011B0B8);
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.Buffer += 4;
    }
    v9 = KeyValueInformation;
    v21 = 0;
    v24 = KeyValueInformation;
    v10 = 0;
    while ( 1 )
    {
      inited = ZwEnumerateKey(*v4, v10, KeyBasicInformation, v9, Length, &ResultLength);
      if ( inited < 0 )
        goto LABEL_39;
      DestinationString.Length = *((_WORD *)v24 + 6);
      DestinationString.MaximumLength = *((_WORD *)v24 + 6);
      DestinationString.Buffer = (PWCH)(v24 + 16);
      ObjectAttributes.RootDirectory = *v4;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( inited < 0 )
        goto LABEL_39;
      inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
      if ( inited < 0 )
        goto LABEL_38;
      v12 = Length;
      do
      {
        v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, v12, &ResultLength);
        inited = v13;
        if ( v13 == -2147483643 || v13 == -1073741789 )
        {
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( ProcessHeap )
          {
            Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, ResultLength);
            v6 = Heap;
            if ( Heap )
            {
              v12 = ResultLength;
              v3 = Heap;
              v24 = Heap;
              continue;
            }
          }
          else
          {
            v6 = 0LL;
          }
          inited = -1073741801;
        }
      }
      while ( inited == -2147483643 || inited == -1073741789 );
      Length = v12;
      v4 = v26;
      if ( inited >= 0 )
      {
        if ( *((_DWORD *)v3 + 1) == 1 )
        {
          v17 = *((_DWORD *)v3 + 2);
          if ( v17 <= 0xFFFE
            && !RtlCompareUnicodeStrings(
                  String2.Buffer,
                  (unsigned __int64)String2.Length >> 1,
                  (PCWCH)v3 + 6,
                  (unsigned __int64)(unsigned __int16)(v17 - 2) >> 1,
                  1u) )
          {
            goto LABEL_40;
          }
        }
LABEL_38:
        ZwClose(KeyHandle);
        goto LABEL_39;
      }
      ZwClose(KeyHandle);
      v15 = 0;
      if ( inited != -1073741772 )
        v15 = inited;
      inited = v15;
LABEL_39:
      v9 = v24;
      v10 = ++v21;
      if ( inited < 0 )
      {
LABEL_40:
        if ( v6 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          ZwClose(*v4);
          *v4 = KeyHandle;
        }
        if ( inited != -2147483622 )
          return inited;
        return v5;
      }
    }
  }
  return result;
}
