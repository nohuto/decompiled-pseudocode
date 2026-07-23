/*
 * XREFs of sub_18003C82C @ 0x18003C82C
 * Callers:
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 */

bool __fastcall sub_18003C82C(int a1, char a2)
{
  char v2; // bl
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
  if ( (int)sub_18003D190(2, a1, 0, (unsigned int)BaseAddress, 0LL, 0LL, (__int64)&v9) < 0 )
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
    return a2 != 0;
  return v2;
}
