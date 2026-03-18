/*
 * XREFs of ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0163604
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0163794 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoOpenKey(struct _CIT_IMPACT_CONTEXT *a1, void **a2)
{
  void *v4; // rax
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  const char *v7; // rdx
  unsigned int v8; // r8d
  const WCHAR *v9; // rdx
  char IsStateSeparationEnabled; // al
  void *v11; // rax
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  v4 = (void *)*((_QWORD *)a1 + 65);
  KeyHandle = 0LL;
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)&v17;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    if ( !*((_QWORD *)a1 + 12) )
    {
      v5 = -1073741823;
      goto LABEL_15;
    }
    v6 = RtlFormatCurrentUserKeyPath(&KeyPath);
    v5 = v6;
    if ( v6 < 0 )
    {
      v8 = 4983;
LABEL_8:
      CitpLogFailureWorker((unsigned int)v6, v7, v8);
      goto LABEL_15;
    }
    RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    v9 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon";
  }
  else
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v9 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
    if ( !IsStateSeparationEnabled )
      v9 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  }
  RtlAppendUnicodeToString(&Destination, v9);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = 5002;
    goto LABEL_8;
  }
  v11 = KeyHandle;
  v5 = 0;
  *((_QWORD *)a1 + 65) = KeyHandle;
  *a2 = v11;
  KeyHandle = 0LL;
LABEL_15:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
