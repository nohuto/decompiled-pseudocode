/*
 * XREFs of ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0161B78
 * Callers:
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0161AD0 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0164664 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpEnsureKey(void **a1, const unsigned __int16 *a2, char a3)
{
  _BYTE *v3; // rbx
  struct _ACL *v4; // rdi
  NTSTATUS v8; // eax
  const char *v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  int v12; // ecx
  ULONG v13; // ebx
  struct _ACL *v14; // rax
  NTSTATUS Acl; // eax
  const char *v16; // rdx
  unsigned int v17; // r8d
  void *v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  ULONG Disposition; // [rsp+F0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v4 = 0LL;
  KeyHandle = 0LL;
  if ( a3 )
  {
    v8 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 4458;
      v12 = v8;
LABEL_4:
      CitpLogFailureWorker(v12, v9, v11);
      goto LABEL_24;
    }
    v13 = RtlLengthSid(SeExports->SeLocalSystemSid) + 20;
    v14 = (struct _ACL *)Win32AllocPool(v13, 0x49637355u);
    v4 = v14;
    if ( !v14 )
    {
      v10 = -1073741670;
      v11 = 4467;
      v12 = -1073741670;
      goto LABEL_4;
    }
    Acl = RtlCreateAcl(v14, v13, 2u);
    v10 = Acl;
    if ( Acl < 0 )
    {
      v17 = 4474;
LABEL_9:
      CitpLogFailureWorker(Acl, v16, v17);
      goto LABEL_22;
    }
    Acl = RtlAddAccessAllowedAce(v4, 2u, 0xF003Fu, SeExports->SeLocalSystemSid);
    v10 = Acl;
    if ( Acl < 0 )
    {
      v17 = 4484;
      goto LABEL_9;
    }
    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
    v10 = Acl;
    if ( Acl < 0 )
    {
      v17 = 4491;
      goto LABEL_9;
    }
    v3 = SecurityDescriptor;
  }
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  Disposition = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v3;
  Acl = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v17 = 4509;
    goto LABEL_9;
  }
  if ( Disposition != 1 )
  {
    if ( a3 )
    {
      Acl = ZwSetSecurityObject(KeyHandle, 4u, SecurityDescriptor);
      v10 = Acl;
      if ( Acl < 0 )
      {
        v17 = 4523;
        goto LABEL_9;
      }
    }
  }
  v18 = KeyHandle;
  KeyHandle = 0LL;
  v10 = 0;
  *a1 = v18;
LABEL_22:
  if ( v4 )
    Win32FreePool((__int64)v4);
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
