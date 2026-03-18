/*
 * XREFs of ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0085A04
 * Callers:
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0084E94 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00856D4 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoOpenKey(struct _CIT_IMPACT_CONTEXT *a1, void **a2)
{
  void *v4; // rax
  NTSTATUS v5; // eax
  const char *v6; // rdx
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int v10; // r8d
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v15; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  v4 = (void *)*((_QWORD *)a1 + 105);
  KeyHandle = 0LL;
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\Machine");
LABEL_5:
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v15;
    RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    RtlAppendUnicodeToString(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v8 = KeyHandle;
      v7 = 0;
      *((_QWORD *)a1 + 105) = KeyHandle;
      *a2 = v8;
      KeyHandle = 0LL;
      goto LABEL_7;
    }
    v10 = 6389;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)a1 + 52) )
  {
    v7 = -1073741823;
    goto LABEL_7;
  }
  v5 = RtlFormatCurrentUserKeyPath(&KeyPath);
  v7 = v5;
  if ( v5 >= 0 )
    goto LABEL_5;
  v10 = 6366;
LABEL_14:
  CitpLogFailureWorker(v5, v6, v10);
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
