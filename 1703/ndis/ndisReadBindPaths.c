/*
 * XREFs of ndisReadBindPaths @ 0x1C00ABC40
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00ADB74 (ndisInitializeConfiguration.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisReadBindPaths(__int64 a1, _RTL_QUERY_REGISTRY_TABLE *a2, const WCHAR *a3)
{
  bool v6; // r15
  NTSTATUS v7; // eax
  unsigned int v8; // esi
  WCHAR *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  void *v12; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v14; // r13d
  __int64 v15; // r12
  __int64 v16; // rbx
  _UNICODE_STRING v18; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  __int64 Context; // [rsp+A8h] [rbp+58h] BYREF

  SourceString = 0LL;
  Context = 0LL;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xCu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1);
  a2->QueryRoutine = 0LL;
  Context = 0LL;
  a2[1].Flags = 20;
  a2[1].DefaultType = 0;
  a2[2].QueryRoutine = 0LL;
  a2->Flags = 1;
  a2->Name = L"Linkage";
  a2[2].Flags = 0;
  a2[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ndisReadParameter;
  a2[1].Name = L"RootDevice";
  a2[1].EntryContext = &SourceString;
  a2[2].Name = 0LL;
  v7 = RtlQueryRegistryValuesEx(0x40000000u, a3, a2, &Context, 0LL);
  v8 = v7;
  if ( v7 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v7 < 0 || (_DWORD)Context != 7 )
  {
    v9 = (WCHAR *)SourceString;
    v6 = SourceString != 0LL;
    if ( v7 >= 0 )
      v8 = -1073741823;
    goto LABEL_20;
  }
  v9 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    v6 = 1;
  }
  else
  {
    v9 = *(WCHAR **)(a1 + 3824);
    SourceString = v9;
  }
  v10 = 24;
  v11 = 0;
  if ( !*v9 )
  {
LABEL_29:
    v8 = -1073741811;
    goto LABEL_20;
  }
  do
  {
    RtlInitUnicodeString(&DestinationString, v9);
    ++v11;
    v10 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v9 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
  }
  while ( *v9 );
  if ( !v11 )
  {
    v9 = (WCHAR *)SourceString;
    goto LABEL_29;
  }
  v12 = *(void **)(a1 + 3792);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6E61444Eu);
  *(_QWORD *)(a1 + 3792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    **(_DWORD **)(a1 + 3792) = v11;
    if ( v11 > 1 )
    {
      *(_DWORD *)(a1 + 124) |= 0x8000000u;
      *(_DWORD *)(a1 + 1872) |= 0x10000000u;
    }
    v14 = v11 - 1;
    v9 = (WCHAR *)SourceString;
    v15 = 16LL * v11 + *(_QWORD *)(a1 + 3792) + 24LL;
    if ( !*SourceString )
      goto LABEL_20;
    while ( 1 )
    {
      RtlInitUnicodeString(&v18, v9);
      if ( v18.Length > 0x1000u )
        break;
      v16 = *(_QWORD *)(a1 + 3792) + 16LL * v14;
      v9 += ((unsigned __int64)v18.Length + 2) >> 1;
      *(_WORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = v15;
      *(_WORD *)(v16 + 10) = v18.Length + ndisDeviceStr.Length + 2;
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(v15 + ndisDeviceStr.Length);
      DestinationString.MaximumLength = v18.Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(v16 + 8), &ndisDeviceStr);
      RtlUpcaseUnicodeString(&DestinationString, &v18, 0);
      --v14;
      *(_WORD *)(v16 + 8) += DestinationString.Length;
      v15 += 2 * ((unsigned __int64)*(unsigned __int16 *)(v16 + 10) >> 1);
      if ( !*v9 )
        goto LABEL_19;
    }
  }
  v8 = -1073741670;
LABEL_19:
  v9 = (WCHAR *)SourceString;
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v9, 0);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xDu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1);
  return v8;
}
