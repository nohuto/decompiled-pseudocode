/*
 * XREFs of CmpRecoverEnlistment @ 0x1406F9A54
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x1401A9760 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x1401AA0E0 (ZwRecoverEnlistment.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     CmpTransSearchAddTransFromRm @ 0x1405E13E4 (CmpTransSearchAddTransFromRm.c)
 */

NTSTATUS __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, GUID *a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  void *v7; // r8
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  result = RtlStringFromGUIDEx(a3, &GuidString, 1u);
  if ( result >= 0 )
  {
    v6 = CmpTransSearchAddTransFromRm(a1, 0LL, (__int64)&a3[1], 1, (__int64)&EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = (void *)a1[6];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, a3, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&GuidString);
    return v6;
  }
  return result;
}
