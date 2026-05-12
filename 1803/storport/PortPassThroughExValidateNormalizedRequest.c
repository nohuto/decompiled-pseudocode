/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C0068C88
 * Callers:
 *     PortPassThroughExValidate @ 0x1C00488A0 (PortPassThroughExValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v9; // ecx
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r8
  bool v15; // zf
  bool v16; // zf
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  bool v19; // cc
  char v20; // al
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  struct _UNICODE_STRING v24; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 56) == 72 )
  {
    RtlInitUnicodeString(&v24, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v24;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(_BYTE *)(a1 + 17);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v9 = v11 + v10;
    if ( v9 > (unsigned int)v6 || v9 > (unsigned int)v7 )
      return 3221225485LL;
  }
  v12 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v12 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v13 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v14 = *(_BYTE *)(a1 + 18);
  if ( v14 == 2 )
  {
    if ( (_DWORD)v13 || (_DWORD)v12 )
      return 3221225485LL;
    v15 = *(_QWORD *)(a1 + 48) == 0LL;
LABEL_17:
    if ( !v15 )
      return 3221225485LL;
    v16 = *(_QWORD *)(a1 + 40) == 0LL;
    goto LABEL_19;
  }
  if ( (!v14 || v14 == 3) && !(_DWORD)v12 || ((v14 - 1) & 0xFD) == 0 && !(_DWORD)v13 )
    return 3221225485LL;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_31;
    v15 = (_DWORD)v12 == 0;
    goto LABEL_17;
  }
  if ( (_DWORD)v13 )
    return 3221225485LL;
  v16 = *(_QWORD *)(a1 + 48) == 0LL;
LABEL_19:
  if ( !v16 )
    return 3221225485LL;
LABEL_31:
  if ( a3 )
    goto LABEL_38;
  if ( !v14 )
  {
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 < v9 )
      return 3221225485LL;
    v18 = v17 + v12;
LABEL_36:
    v19 = v18 <= v6;
    goto LABEL_37;
  }
  if ( v14 != 1 )
  {
    if ( v14 != 3 )
      goto LABEL_38;
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v22 = *(_QWORD *)(a1 + 40);
    if ( v22 < v9 )
      return 3221225485LL;
    if ( v22 + v12 > v6 )
      return 3221225485LL;
    if ( v22 + v12 > v7 )
      return 3221225485LL;
    if ( !(_DWORD)v13 )
      return 3221225485LL;
    v23 = *(_QWORD *)(a1 + 48);
    if ( v23 < (unsigned int)(v12 + v22) )
      return 3221225485LL;
    v18 = v23 + v13;
    if ( v23 + v13 > v7 )
      return 3221225485LL;
    goto LABEL_36;
  }
  if ( !(_DWORD)v13 )
    return 3221225485LL;
  v21 = *(_QWORD *)(a1 + 48);
  if ( v21 < v9 )
    return 3221225485LL;
  v19 = v21 + v13 <= v7;
LABEL_37:
  if ( !v19 )
    return 3221225485LL;
LABEL_38:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v20 = *(_BYTE *)(a1 + 56);
  if ( v20 == 24 || (unsigned __int8)(v20 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
