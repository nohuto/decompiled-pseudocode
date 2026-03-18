/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1C0085074
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1C0084878 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ZwClose_0 @ 0x1C002BFA6 (ZwClose_0.c)
 *     ZwCreateKey_0 @ 0x1C002BFE2 (ZwCreateKey_0.c)
 *     ZwOpenKey_0 @ 0x1C002BFFA (ZwOpenKey_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     ArbFreeOrderingList @ 0x1C0084AFC (ArbFreeOrderingList.c)
 *     ArbInitializeOrderingList @ 0x1C0084B30 (ArbInitializeOrderingList.c)
 *     ArbpGetRegistryValue @ 0x1C0084C58 (ArbpGetRegistryValue.c)
 *     ArbAddOrdering @ 0x1C0084F98 (ArbAddOrdering.c)
 *     ArbPruneOrdering @ 0x1C00A689C (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rsi
  int v4; // edi
  int RegistryValue; // eax
  char *v6; // r13
  char *i; // r15
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  const WCHAR *v11; // rdx
  char *v12; // r13
  char *j; // r15
  int v14; // edx
  __int64 v15; // rcx
  const WCHAR *v17; // rdx
  void *v18; // rcx
  void *v19; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  PVOID P; // [rsp+50h] [rbp-61h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  int v23; // [rsp+60h] [rbp-51h] BYREF
  const wchar_t *v24; // [rsp+68h] [rbp-49h]
  unsigned __int64 v25; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-39h] BYREF
  char v27[8]; // [rsp+80h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  __int128 v29; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v30; // [rsp+C8h] [rbp+17h]

  v1 = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  P = 0LL;
  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v4 = ArbInitializeOrderingList(a1 + 56);
  if ( v4 < 0 )
    goto LABEL_39;
  v4 = ArbInitializeOrderingList(a1 + 72);
  if ( v4 < 0 )
    goto LABEL_39;
  v23 = 7733366;
  v24 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_39;
  v23 = 1966110;
  v24 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&Handle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_39;
  RegistryValue = ArbpGetRegistryValue(Handle, L"Root", &P);
  v3 = P;
  v4 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_39;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v17 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
    if ( v17[((unsigned __int64)*((unsigned int *)P + 3) >> 1) - 1] )
      goto LABEL_32;
    v4 = ArbpGetRegistryValue(Handle, v17, &P);
    if ( v4 < 0 )
      goto LABEL_39;
    ExFreePoolWithTag(v3, 0);
    v3 = P;
  }
  ZwClose_0(Handle);
  Handle = 0LL;
  if ( v3[1] != 10 )
    goto LABEL_32;
  v6 = (char *)v3 + (unsigned int)v3[2] + 32;
  for ( i = v6 + 8; i < &v6[32 * *((unsigned int *)v6 + 1) + 8]; i += 32 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    v9 = *(_QWORD *)i >> 8;
    v29 = *(_OWORD *)i;
    v30 = *((_OWORD *)i + 1);
    if ( (unsigned __int8)v9 == v8 || (_BYTE)v9 == 7 && v8 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, char *, char *))(a1 + 120))(
             &v29,
             &v26,
             &v25,
             v27,
             v27);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbAddOrdering((unsigned __int16 *)(a1 + 56), v26, v25);
      if ( v4 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v3, 0);
  v24 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
  P = 0LL;
  v3 = 0LL;
  v23 = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey_0(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 || (v10 = ArbpGetRegistryValue(Handle, L"Root", &P), v3 = P, v4 = v10, v10 < 0) )
  {
LABEL_39:
    if ( KeyHandle )
      ZwClose_0(KeyHandle);
    if ( Handle )
      ZwClose_0(Handle);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v18 = *(void **)(a1 + 64);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_WORD *)(a1 + 56) = 0;
      *(_WORD *)(a1 + 58) = 0;
    }
    v19 = *(void **)(a1 + 80);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v1 = v4;
    goto LABEL_28;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_19;
  v11 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  if ( v11[((unsigned __int64)*((unsigned int *)P + 3) >> 1) - 1] )
  {
LABEL_32:
    v4 = -1073741811;
    goto LABEL_39;
  }
  v4 = ArbpGetRegistryValue(Handle, v11, &P);
  if ( v4 < 0 )
    goto LABEL_39;
  ExFreePoolWithTag(v3, 0);
  v3 = P;
LABEL_19:
  ZwClose_0(Handle);
  Handle = 0LL;
  v12 = (char *)v3 + (unsigned int)v3[2] + 32;
  for ( j = v12 + 8; j < &v12[32 * *((unsigned int *)v12 + 1) + 8]; j += 32 )
  {
    v14 = *(_DWORD *)(a1 + 32);
    v15 = *(_QWORD *)j >> 8;
    v29 = *(_OWORD *)j;
    v30 = *((_OWORD *)j + 1);
    if ( (unsigned __int8)v15 == v14 || (_BYTE)v15 == 7 && v14 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, char *, char *))(a1 + 120))(
             &v29,
             &v26,
             &v25,
             v27,
             v27);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbAddOrdering((unsigned __int16 *)(a1 + 72), v26, v25);
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = ArbPruneOrdering(a1 + 56, v26, v25);
      if ( v4 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v3, 0);
  ZwClose_0(KeyHandle);
  KeyHandle = 0LL;
LABEL_28:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v1;
}
