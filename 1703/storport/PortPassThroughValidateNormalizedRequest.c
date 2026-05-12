/*
 * XREFs of PortPassThroughValidateNormalizedRequest @ 0x1C0066BB8
 * Callers:
 *     PortPassThroughValidate @ 0x1C0066ACC (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughValidateNormalizedRequest(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int8 v9; // dl
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // al
  struct _UNICODE_STRING v17; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( *((_BYTE *)a1 + 36) == 72 )
  {
    RtlInitUnicodeString(&v17, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  if ( *((_BYTE *)a1 + 6) > 0x10u )
    return 3221225485LL;
  v9 = *((_BYTE *)a1 + 7);
  if ( v9 )
  {
    v10 = *((unsigned int *)a1 + 8);
    if ( *a1 > (unsigned int)v10 )
      return 3221225485LL;
    if ( !a3 )
    {
      if ( *((_DWORD *)a1 + 3) )
      {
        v11 = *((_QWORD *)a1 + 3);
        if ( v10 >= v11 || (unsigned int)v10 + v9 > v11 )
          return 3221225485LL;
      }
    }
    if ( (unsigned int)v10 > (unsigned int)v7 || (unsigned int)v10 + v9 > (unsigned int)v7 )
      return 3221225485LL;
  }
  if ( a3 )
  {
    if ( !*((_QWORD *)a1 + 3) && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( *a1 > v12 && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
    v13 = *((_BYTE *)a1 + 8);
    if ( v13 != 1 )
    {
      v14 = *((unsigned int *)a1 + 3);
      if ( (_DWORD)v14 )
      {
        if ( v12 > v6 || v12 + v14 > v6 )
          return 3221225485LL;
      }
    }
    if ( v13 )
    {
      v15 = *((unsigned int *)a1 + 3);
      if ( (_DWORD)v15 )
      {
        if ( v12 > v7 || v12 + v15 > v7 )
          return 3221225485LL;
      }
    }
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 4) - 1) > 0x1A5DF )
    return 3221225485LL;
  v16 = *((_BYTE *)a1 + 36);
  if ( v16 == 24 || (unsigned __int8)(v16 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
