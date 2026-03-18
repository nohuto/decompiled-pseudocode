/*
 * XREFs of InitClipboardILDef @ 0x1C011A6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C01E80DC (-GetClipILIndexFromName@@YAIPEAGI@Z.c)
 */

int InitClipboardILDef()
{
  int *v0; // rbx
  int *v1; // rdi
  int *v2; // rax
  ULONG v3; // r14d
  ULONG v4; // esi
  __int64 v5; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v0 = 0LL;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v2) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( (int)v2 < 0 )
    goto LABEL_2;
  LODWORD(v2) = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( (_DWORD)v2 != -2147483643 && (_DWORD)v2 != -1073741789 )
    goto LABEL_2;
  v2 = (int *)Win32AllocPool(Length, 1650684757LL);
  v0 = v2;
  if ( !v2
    || (LODWORD(v2) = ZwQueryKey(KeyHandle, KeyFullInformation, v2, Length, &Length), (int)v2 < 0)
    || (LODWORD(v2) = v0[8] - 1, (unsigned int)v2 > 4)
    || (v3 = v0[9] + 16, (unsigned int)v0[9] >= 0xFFFFFFF0)
    || (v2 = (int *)Win32AllocPool(v3, 1650684757LL), (v1 = v2) == 0LL) )
  {
LABEL_2:
    dword_1C03240CC = 0;
    dword_1C03240B4 = 0;
    dword_1C0324084[0] = 0;
    dword_1C03240E4 = 1;
    dword_1C032409C = 1;
    goto LABEL_3;
  }
  v4 = 0;
  if ( v0[8] )
  {
    do
    {
      LODWORD(v2) = ZwEnumerateValueKey(KeyHandle, v4, KeyValueBasicInformation, v1, v3, &Length);
      if ( (int)v2 < 0 )
        goto LABEL_2;
      if ( v1[1] == 1 )
      {
        LODWORD(v2) = GetClipILIndexFromName((wchar_t *)v1 + 6, v1[2]);
        if ( (_DWORD)v2 != -1 )
        {
          v5 = 3LL * (unsigned int)v2;
          v2 = dword_1C0324084;
          dword_1C0324084[2 * v5] = 1;
        }
      }
    }
    while ( ++v4 < v0[8] );
  }
LABEL_3:
  dword_1C03240FC = 1;
  if ( v1 )
    LODWORD(v2) = Win32FreePool(v1);
  if ( v0 )
    LODWORD(v2) = Win32FreePool(v0);
  if ( KeyHandle )
    LODWORD(v2) = ZwClose(KeyHandle);
  return (int)v2;
}
