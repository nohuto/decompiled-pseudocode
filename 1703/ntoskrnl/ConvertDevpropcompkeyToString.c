/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x140745AC8
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x14069599C (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x140745C08 (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14007FF78 (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rsi
  NTSTATUS v8; // ebx
  int v9; // r9d
  int v10; // eax
  const wchar_t *v11; // r8
  __int64 v12; // rcx
  int v13; // ecx
  unsigned int v14; // edx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rax
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((PGUID)a1, &GuidString, 1u);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        goto LABEL_23;
      }
      v10 = GuidString.Length + 26;
    }
    else
    {
      v10 = GuidString.Length + 30;
    }
    v11 = *(const wchar_t **)(a1 + 24);
    if ( v11 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      v13 = 2 * v12;
    }
    else
    {
      v13 = 12;
    }
    v14 = v10 + v13 + 4;
    if ( a4 )
      *a4 = v14;
    if ( v14 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      v15 = L"(NULL)";
      if ( v11 )
        v15 = v11;
      v16 = L"System";
      if ( v9 )
        v16 = L"User";
      v8 = RtlStringCbPrintfExW(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             GuidString.Buffer,
             *(_DWORD *)(a1 + 16),
             v16,
             v15);
    }
  }
LABEL_23:
  RtlFreeUnicodeString(&GuidString);
  return (unsigned int)v8;
}
