/*
 * XREFs of OpenCacheKeyEx @ 0x1C0025E50
 * Callers:
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0006FC0 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C0007090 (-InitUIPI@@YAXXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0007C20 (W32kEtwEnableCallback.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0007ED0 (InitializeWin32KSyscallFilter.c)
 *     FastGetProfileDwordW @ 0x1C0008440 (FastGetProfileDwordW.c)
 *     FastGetProfileStringW @ 0x1C0025C70 (FastGetProfileStringW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C005F450 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C005FF30 (FastGetProfileValue.c)
 *     CheckDesktopPolicy @ 0x1C0060D80 (CheckDesktopPolicy.c)
 *     InitScancodeMap @ 0x1C0062360 (InitScancodeMap.c)
 *     FastWriteProfileStringW @ 0x1C009B0F0 (FastWriteProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C00DE9E0 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C00DEB30 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C00DEDE0 (FastWriteProfileValue.c)
 *     InitCreateUserSubsystem @ 0x1C01DD5C0 (InitCreateUserSubsystem.c)
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0005048 (RtlStringCchPrintfW.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0024D94 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1C008B2C0 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  const UNICODE_STRING *v8; // rbx
  PVOID v9; // r15
  int v10; // r14d
  int v11; // eax
  NTSTATUS v12; // eax
  int v13; // ebx
  const UNICODE_STRING *v15; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // r8
  PVOID v18; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  const UNICODE_STRING *v23; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = a2;
  KeyHandle = 0LL;
  v23 = a1;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess();
  v9 = (PVOID)CurrentProcess;
  if ( a3 == 131097 && ((_DWORD)v5 == 4 || (_DWORD)v5 == 23) )
  {
    v10 = *a4;
    while ( 1 )
    {
LABEL_7:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v26;
      if ( (v10 & 4) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v11 = -5;
      }
      else
      {
        if ( *off_1C015E910[dword_1C015E580[4 * v5]] == 77 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        }
        else
        {
          if ( v8 )
          {
            v15 = v8;
          }
          else
          {
            InitPreviousUserString();
            v15 = &PreviousUserString;
          }
          RtlAppendUnicodeStringToString(&Destination, v15);
        }
        if ( (v10 & 2) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
          v11 = -3;
        }
        else if ( (v10 & 8) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Remote\\");
          RtlStringCchPrintfW(pszDest, 0x20uLL, L"%ld\\", gSessionId);
          RtlAppendUnicodeToString(&Destination, pszDest);
          v11 = -9;
        }
        else
        {
          if ( a4 && (*a4 & 0x10) != 0 )
            goto LABEL_40;
          v11 = -2;
        }
      }
      v10 &= v11;
      RtlAppendUnicodeToString(&Destination, off_1C015E910[dword_1C015E580[4 * v5]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C015E588)[2 * v5]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v13 = v12;
      if ( a3 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v12 < 0 )
          goto LABEL_25;
        v16 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v18 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v13 = -1073741790;
        }
        else
        {
          LOBYTE(v17) = 1;
          if ( !(unsigned int)AccessCheckObject(Object, a3, v17, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v13 = -1073741790;
          }
          ObfDereferenceObject(v18);
        }
        v9 = (PVOID)CurrentProcess;
      }
      if ( v13 >= 0 )
        goto LABEL_17;
LABEL_25:
      if ( !v10 )
      {
LABEL_17:
        if ( a4 )
          *a4 = v10;
        if ( v13 >= 0 )
          return KeyHandle;
        return (void *)v4;
      }
      v8 = v23;
    }
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v10 = 1;
    goto LABEL_7;
  }
LABEL_40:
  *a4 = 0;
  return 0LL;
}
