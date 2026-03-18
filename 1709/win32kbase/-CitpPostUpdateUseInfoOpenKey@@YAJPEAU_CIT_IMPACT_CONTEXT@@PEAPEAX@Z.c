/*
 * XREFs of ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0083C90
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082FBC (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0083BBC (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoOpenKey(struct _CIT_IMPACT_CONTEXT *a1, void **a2)
{
  void *v4; // rax
  unsigned int v5; // ebx
  NTSTATUS v7; // eax
  const char *v8; // rdx
  void *v9; // rax
  unsigned int v10; // r8d
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v15; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  v4 = (void *)*((_QWORD *)a1 + 63);
  KeyHandle = 0LL;
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\Machine");
LABEL_7:
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v15;
    RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    RtlAppendUnicodeToString(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = KeyHandle;
      v5 = 0;
      *((_QWORD *)a1 + 63) = KeyHandle;
      *a2 = v9;
      KeyHandle = 0LL;
      goto LABEL_9;
    }
    v10 = 4932;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)a1 + 12) )
  {
    v5 = -1073741823;
    goto LABEL_9;
  }
  v7 = RtlFormatCurrentUserKeyPath(&KeyPath);
  v5 = v7;
  if ( v7 >= 0 )
    goto LABEL_7;
  v10 = 4909;
LABEL_14:
  CitpLogFailureWorker(v7, v8, v10);
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
