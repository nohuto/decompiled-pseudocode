/*
 * XREFs of ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01B992C
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00C4958 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ReadTabletButtonConfig(
        unsigned int a1,
        const unsigned __int16 *a2,
        struct tagTABLET_BUTTON_DESK_CONFIG *a3)
{
  unsigned int *v6; // rbx
  __int64 v8; // rdx
  NTSTATUS v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r14
  int *v13; // r8
  int v14; // r9d
  unsigned int v15; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[8]; // [rsp+90h] [rbp-70h]
  PCWSTR SourceString[8]; // [rsp+D0h] [rbp-30h]
  wchar_t pszDest[264]; // [rsp+110h] [rbp+10h] BYREF

  v6 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v6 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    pszDest,
    0x105uLL,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d\\%ws",
    a1,
    a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v21[0] = a3;
    v21[1] = (char *)a3 + 4;
    v21[2] = (char *)a3 + 8;
    v21[3] = (char *)a3 + 12;
    v21[4] = (char *)a3 + 16;
    v21[5] = (char *)a3 + 20;
    v21[6] = (char *)a3 + 24;
    v21[7] = (char *)a3 + 28;
    v11 = 0LL;
    SourceString[0] = L"DEFACTION";
    SourceString[1] = L"DEFACTIONDATA";
    SourceString[2] = L"DEFHOLDACTION";
    v12 = 8LL;
    SourceString[3] = L"DEFHOLDACTIONDATA";
    SourceString[4] = L"WINLOGONACTION";
    SourceString[5] = L"WINLOGONACTIONDATA";
    SourceString[6] = L"WINLOGONHOLDACTION";
    SourceString[7] = L"WINLOGONHOLDACTIONDATA";
    do
    {
      RtlInitUnicodeString(&ValueName, SourceString[v11]);
      v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v6, 0x224u, &ResultLength);
      if ( v9 < 0 )
      {
        *(_DWORD *)v21[v11] = 0;
      }
      else
      {
        v13 = (int *)v21[v11];
        v14 = *(unsigned int *)((char *)v6 + v6[2]);
        *v13 = v14;
        v15 = v6[3];
        if ( v15 < 4 )
          *v13 = v14 & ((1 << (8 * v15)) - 1);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    ZwClose(KeyHandle);
  }
  Win32FreePool(v6, v8, v10);
  return (unsigned int)v9;
}
