/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x140787F9C
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x1406C1744 (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x1407880DC (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140019CFC (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rsi
  NTSTATUS v8; // ebx
  int v9; // r8d
  int v10; // eax
  const wchar_t *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rax
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
      v10 = 28;
    }
    else
    {
      v10 = 32;
    }
    v11 = *(const wchar_t **)(a1 + 24);
    v12 = GuidString.Length + v10;
    if ( v11 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v11[v13] );
      v14 = v12 + 2 * v13;
    }
    else
    {
      v14 = v12 + 12;
    }
    v15 = v14 + 2;
    if ( a4 )
      *a4 = v15;
    if ( v15 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      v16 = L"(NULL)";
      v17 = L"System";
      if ( v11 )
        v16 = v11;
      if ( v9 )
        v17 = L"User";
      v8 = RtlStringCbPrintfExW(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             GuidString.Buffer,
             *(_DWORD *)(a1 + 16),
             v17,
             v16);
    }
  }
LABEL_23:
  RtlFreeUnicodeString(&GuidString);
  return (unsigned int)v8;
}
