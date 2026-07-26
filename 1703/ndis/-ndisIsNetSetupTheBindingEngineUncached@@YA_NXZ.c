/*
 * XREFs of ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00BE2C0
 * Callers:
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00AF260 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 ndisIsNetSetupTheBindingEngineUncached(void)
{
  void *v0; // rbx
  HANDLE v1; // rdi
  __int64 v2; // rcx
  const wchar_t *v3; // rax
  NTSTATUS v4; // eax
  const wchar_t *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int8 v8; // si
  _UNICODE_STRING v10; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+20h] BYREF
  void *v13; // [rsp+88h] [rbp+28h] BYREF

  v0 = 0LL;
  v13 = 0LL;
  v1 = 0LL;
  *(_DWORD *)&v10.Length = 0;
  v10.Buffer = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}";
  while ( *v3 )
  {
    ++v3;
    if ( !--v2 )
      goto LABEL_11;
  }
  v10.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v10.Length = 2 * (0x7FFF - v2);
  v10.MaximumLength = v10.Length + 2;
  ObjectAttributes.ObjectName = &v10;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v1 = KeyHandle;
  if ( v4 < 0 )
    goto LABEL_11;
  *(_DWORD *)&v10.Length = 0;
  v5 = L"Installer32";
  v10.Buffer = 0LL;
  v6 = 0x7FFFLL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v6 )
      goto LABEL_11;
  }
  v10.Buffer = L"Installer32";
  v10.Length = 2 * (0x7FFF - v6);
  v10.MaximumLength = v10.Length + 2;
  v7 = KRegKey::QueryValueString(&KeyHandle, &v10, &v13);
  v1 = KeyHandle;
  v0 = v13;
  if ( v7 < 0 )
  {
LABEL_11:
    v8 = 1;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_12:
  if ( v0 )
    ExFreePoolWithTag(v0, 0x7274534Bu);
  if ( v1 )
    ZwClose(v1);
  return v8;
}
