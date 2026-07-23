/*
 * XREFs of sub_18003D528 @ 0x18003D528
 * Callers:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

bool __fastcall sub_18003D528(int a1, int a2)
{
  char v2; // bl
  char v3; // r14
  PVOID v4; // rsi
  void *v5; // rax
  NTSTATUS v6; // edi
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v9; // [rsp+50h] [rbp-39h] BYREF
  void *v10; // [rsp+60h] [rbp-29h]
  PVOID v11; // [rsp+68h] [rbp-21h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  v3 = a2;
  LOBYTE(a2) = 1;
  if ( (int)sub_18003E060(0, a2, a1, 0, (__int64)BaseAddress, 0LL, 0LL, (__int64)&v9) < 0 )
    return 0;
  v4 = BaseAddress[1];
  if ( (_WORD)v9 )
  {
    v5 = v10;
    *(_OWORD *)BaseAddress = v9;
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  ObjectAttributes.RootDirectory = v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((HANDLE *)v11 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return v3 != 0;
  return v2;
}
