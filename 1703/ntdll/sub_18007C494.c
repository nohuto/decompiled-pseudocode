/*
 * XREFs of sub_18007C494 @ 0x18007C494
 * Callers:
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x180071E10 (RtlPrefixUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall sub_18007C494(HANDLE *a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  WCHAR *v3; // r13
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
  PVOID Heap; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+58h] [rbp-A8h]
  _BYTE *v22; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING String2; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v24; // [rsp+78h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v27; // [rsp+B4h] [rbp-4Ch]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]

  DesiredAccess = a2;
  v3 = (WCHAR *)KeyValueInformation;
  v4 = a1;
  v24 = a1;
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
  if ( v27 != 4 || v28 != 4 || !v29 )
    return 0;
  String2 = *a3;
  result = RtlInitUnicodeStringEx(&DestinationString, &qword_18011B588);
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.Buffer += 4;
    }
    v9 = KeyValueInformation;
    v19 = 0;
    v22 = KeyValueInformation;
    v10 = 0;
    while ( 1 )
    {
      inited = ZwEnumerateKey(*v4, v10, KeyBasicInformation, v9, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v22 + 6);
        DestinationString.MaximumLength = *((_WORD *)v22 + 6);
        DestinationString.Buffer = (PWCH)(v22 + 16);
        ObjectAttributes.RootDirectory = *v4;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
        if ( inited >= 0 )
          break;
      }
LABEL_34:
      v9 = v22;
      v10 = ++v19;
      if ( inited < 0 )
        goto LABEL_35;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
      goto LABEL_33;
    v12 = Length;
    while ( 1 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, v12, &ResultLength);
      inited = v13;
      if ( v13 != -2147483643 && v13 != -1073741789 )
        goto LABEL_27;
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, ResultLength);
      v6 = Heap;
      if ( !Heap )
        goto LABEL_26;
      v12 = ResultLength;
      v3 = (WCHAR *)Heap;
      v22 = Heap;
LABEL_27:
      if ( inited != -2147483643 && inited != -1073741789 )
      {
        Length = v12;
        v4 = v24;
        if ( inited < 0
          || *((_DWORD *)v3 + 1) != 1
          || *((_DWORD *)v3 + 2) > 0xFFFEu
          || RtlCompareUnicodeStrings(
               String2.Buffer,
               (unsigned __int64)String2.Length >> 1,
               v3 + 6,
               (unsigned __int64)(unsigned __int16)(v3[4] - 2) >> 1,
               1u) )
        {
LABEL_33:
          ZwClose(KeyHandle);
          goto LABEL_34;
        }
LABEL_35:
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
    v6 = 0LL;
LABEL_26:
    inited = -1073741801;
    goto LABEL_27;
  }
  return result;
}
