/*
 * XREFs of sub_18010B5E8 @ 0x18010B5E8
 * Callers:
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     sub_18010B774 @ 0x18010B774 (sub_18010B774.c)
 */

__int64 __fastcall sub_18010B5E8(ACCESS_MASK DesiredAccess, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v6; // edi
  NTSTATUS v7; // eax
  WCHAR *Heap; // rbx
  ULONG v10; // [rsp+30h] [rbp-40h] BYREF
  void *v11; // [rsp+38h] [rbp-38h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  _UNICODE_STRING v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  ResultLength = a3;
  v10 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v6 = sub_18010B774(DesiredAccess, &v10);
  if ( v6 >= 0 && v10 == 2 )
  {
    v11 = 0LL;
    LODWORD(ResultLength) = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v7 = ZwQueryValueKey(*a4, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
    if ( (_DWORD)ResultLength && (v7 == -1073741789 || v7 == -2147483643) )
    {
      v6 = 0;
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)ResultLength);
      if ( Heap )
      {
        if ( ZwQueryValueKey(*a4, &ValueName, KeyValuePartialInformation, Heap, ResultLength, (PULONG)&ResultLength) >= 0
          && *((_DWORD *)Heap + 1) == 1 )
        {
          RtlInitUnicodeString(&v14, Heap + 6);
          if ( (int)sub_18010B774(DesiredAccess, &v10) >= 0 )
          {
            ZwClose(*a4);
            *a4 = v11;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v6;
}
