/*
 * XREFs of ACPIInitMultiString @ 0x1C009F504
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1C009B8A0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 ACPIInitMultiString(struct _UNICODE_STRING *a1, ...)
{
  const char **v1; // rdi
  int v2; // ebx
  const char *v3; // rax
  ULONG v4; // eax
  unsigned int v5; // ebx
  wchar_t *Buffer; // rcx
  wchar_t *v8; // rcx
  PCSZ *v9; // rbx
  struct _UNICODE_STRING v10; // [rsp+28h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  PUNICODE_STRING v12; // [rsp+80h] [rbp+28h]
  const char *v13; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v13 = va_arg(va1, const char *);
  v12 = a1;
  va_copy((va_list)v1, va);
  *(_QWORD *)&v10.Length = 0LL;
  v10.Buffer = 0LL;
  v2 = 0;
  v3 = v13;
  if ( v13 )
  {
    do
    {
      RtlInitAnsiString(&DestinationString, v3);
      if ( (_BYTE)NlsMbCodePageTag )
        v4 = RtlxAnsiStringToUnicodeSize(&DestinationString);
      else
        v4 = 2 * DestinationString.Length + 2;
      ++v1;
      v2 += v4;
      v3 = *v1;
    }
    while ( *v1 );
    a1 = v12;
  }
  if ( v2 )
  {
    v5 = v2 + 2;
    a1->MaximumLength = v5;
    v12->Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x53706341u);
    Buffer = v12->Buffer;
    if ( !Buffer )
      return 3221225626LL;
    memset(Buffer, 0, v5);
    v8 = v12->Buffer;
    v10.MaximumLength = v5;
    va_copy((va_list)v9, va);
    while ( 1 )
    {
      v10.Buffer = v8;
      if ( !*v9 )
        break;
      RtlInitAnsiString(&DestinationString, *v9);
      RtlAnsiStringToUnicodeString(&v10, &DestinationString, 0);
      ++v9;
      v8 = &v10.Buffer[((unsigned __int64)v10.Length >> 1) + 1];
      v10.MaximumLength += -2 - v10.Length;
      v10.Length = 0;
    }
    *v8 = 0;
    v12->Length = v12->MaximumLength;
  }
  else
  {
    RtlInitUnicodeString(a1, 0LL);
  }
  return 0LL;
}
